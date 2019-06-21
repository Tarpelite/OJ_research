import os
import numpy as np


class ABCmeter:
    """
    """

    def __init__(self, INPUT_FILE_NAME: str):
        '''
        '''
        self.INPUT_FILE_NAME = INPUT_FILE_NAME
        self.p = 0
        self.SOURCE_TEXT = ""
        self.RESULT = []
        self.STATUS = 0
        self.REPLY = ""
        self.KEYWORDS = ["const", "int", "void", "if", "else",
                    "while", "main", "return", "printf",
                    "scanf", "include", "case", "default",
                    "goto", "for"]
    
    def web_input(self, SOURCE_TEXT):
        '''
        从表单输入文本
        '''
        self.SOURCE_TEXT = SOURCE_TEXT
        self.p = 0
    
    def read(self):
        '''
        如果以文件形式输入，调用该函数执行读操作
        '''
        with open(self.INPUT_FILE_NAME, "r") as f:
            self.SOURCE_TEXT = f.read()
    
    def clearToken(self):
        '''
        清空目前已经读取的字符缓存
        '''
        self.TOKEN = ""
    
    def curChar(self):
        '''
        返回当前指针指向的字符
        '''
        return self.SOURCE_TEXT[self.p]
    
    def isSpace(self):
        '''
        判断当前字符是否为'/r'或者"/n"
        '''
        if self.curChar() == " ":
            return True
        return False
    
    def isNewLine(self):
        """
        """
        if self.curChar() == '\n':
            return True
        return False
    
    def isDigit(self):
        '''
        判断当前字符是否为数字
        '''
        ch = self.curChar()
        if ord(ch) >= ord('0') and ord(ch) <= ord('9'):
            return True
        return False
    
    def isLetter(self):
        '''
        判断当前字符为字母
        '''
        ch = self.curChar()
        if (ord(ch) >= ord('a') and ord(ch) <= ord('z')) or (ord(ch) >= ord('A') and ord(ch) <= ord("Z")) or ch == '_':
            return True
        return False

    def isPercent(self):
        if self.curChar() == '%':
            return True
        return False

    def isSquareLeft(self):
        if self.curChar() == "[":
            return True
        return False

    def isSquareRight(self):
        if self.curChar() == "]":
            return True
        return False

    def isPlus(self):
        if self.curChar() == '+':
            return True
        return False
    
    def isMinus(self):
        if self.curChar() == '-':
            return True
        return False
    
    def isMult(self):
        if self.curChar() == "*":
            return True
        return False
    
    def isLess(self):
        if self.curChar() == "<":
            return True
        return False
    
    def isMore(self):
        if self.curChar() == ">":
            return True
        return False
    
    def isMark(self):
        if self.curChar() == "!":
            return True
        return False
    
    def isLpar(self):
        if self.curChar() == "(":
            return True
        return False
    
    def isRpar(self):
        if self.curChar() == ")":
            return True
        return False
    
    def isBigLpar(self):
        if self.curChar() == "{":
            return True
        return False
    
    def isBigRpar(self):
        if self.curChar() == "}":
            return True
        return False
    
    def isComma(self):
        if self.curChar() == ",":
            return True
        return False

    def isSemi(self):
        if self.curChar() == ";":
            return True
        return False
    
    def isEqu(self):
        if self.curChar() == "=":
            return True
        return False
    
    def isDot(self):
        if self.curChar() == ".":
            return True
        return False
    
    def isColon(self):
        if self.curChar() == ":":
            return True
        return False

    def isTab(self):
        if self.curChar() == "\t":
            return True
        return False
    
    def isDiv(self):
        if self.curChar() == '/':
            return True
        return False

    def isSharp(self):
        if self.curChar() == '#':
            return True
        return False

    def isAnd(self):
        if self.curChar() == "&":
            return True
        return False

    def isOr(self):
        if self.curChar() == "|":
            return True
        return False

    def isQuestion(self):
        if self.curChar() == "?":
            return True
        return False

    def isKeyWord(self):
        if self.TOKEN.lower() in self.KEYWORDS:
            return True
        return False

    def isTrans(self):
        if self.curChar() == '\\':
            return True

    def isQuote(self):
        if self.curChar() == '\"':
            return True
        return False

    def isInvalidchar(self):
        ch = self.curChar()
        if ch == '\a' or ch == '\b' or ch == '\t' or ch == '\n' or ch == '\v' or ch == '\f' or ch == '\r' or ch == '\0':
            return True
        elif ord(ch) >= 1 and ord(ch) <= 31:
            return True
        elif ord(ch) == -1 or ord(ch) == 255:
            return True
        return False

    def getchar(self):
        '''
            将当前字符加入TOKEN末尾
            文件指针+1
        '''
        self.TOKEN += self.SOURCE_TEXT[self.p]
        self.p += 1
    
    def error(self):
        '''
            出错提示
        '''
        self.REPLY += "Invalid Syntax"+self.TOKEN+"\n"
        raise Exception("Invalid syntax")
        #print("Invalid Syntax")
    
    def tobin(self, x: int):
        '''
            十进制转二进制
        '''
        return bin(x).replace('0b', "")

    def getsym(self):
        res = []
        self.clearToken()
        lim = len(self.SOURCE_TEXT)
        if self.p >= lim:
            return False
        while self.isSpace() or self.isNewLine() or self.isTab():
            self.p += 1
            if self.p >= lim:
                return False
        if self.isLetter():
            while self.isLetter() or self.isDigit():
                self.getchar()
            if self.isKeyWord():
                res = ['关键字',
                      self.TOKEN.upper()]
            else:
                res = ["标识符", self.TOKEN]
        elif self.isDigit():
            flag = 0
            while self.isDigit():
                self.getchar()
                if self.isDot():
                    if flag == 0:
                        self.getchar()
                        flag = 1
                    else:
                        break
            if flag == 0:
                res = ['常数（二进制）', self.tobin(int(self.TOKEN))]
            elif flag == 1:
                res = ["常数（小数）", float(self.TOKEN)]
        elif self.isMinus():
            flag = 0
            self.getchar()
            if self.isEqu():
                flag = 3 # -=
            elif self.isMinus():
                flag = 4 # --
            while self.isDigit():
                if flag == 0:
                    flag = 1
                self.getchar()
                if self.isDot():
                    if flag == 1:
                        self.getchar()
                        flag = 2
                    else:
                        break
            if flag == 0:
                res = ['单字符运算符', '-']
            elif flag == 1:
                res = ['常数（二进制）', self.tobin(int(self.TOKEN))]
            elif flag == 3:
                res = ['双字符运算符', '-=']
            elif flag == 4:
                res = ['双字符运算符', '--']
            else:
                res = ['常数（小数）', float(self.TOKEN)]

        elif self.isPlus():
            flag = 0
            self.getchar()
            if self.isEqu():
                flag = 3 # +=
            elif self.isPlus():
                flag = 4 # ++
            else:
                while self.isDigit():
                    if flag == 0:
                        flag = 1
                    self.getchar()
                    if self.isDot():
                        if flag == 1:
                            self.getchar()
                            flag = 2
                    else:
                        break
            if flag == 0:
                res = ['单字符运算符', '+']
            elif flag == 1:
                res = ['常数（二进制）', self.tobin(int(self.TOKEN))]
            elif flag == 3:
                res = ['双字符运算符', "+="]
            elif flag == 4:
                res = ['双字符运算符', '++']
            else:
                res = ['常数（小数）', float(self.TOKEN)]

        elif self.isQuote():
            flag = 0
            self.p += 1
            while not self.isQuote():
                if self.isInvalidchar():
                    self.p += 1
                    if self.p >= len(self.SOURCE_TEXT):
                        return False
                elif self.isTrans():
                    self.p += 1
                    if self.p >= len(self.SOURCE_TEXT):
                        return False
                    self.getchar()
                else:
                    self.getchar()
            self.p += 1
            res = ['字符串', self.TOKEN]

        elif self.isLess():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "<="]
            elif self.isLess():
                self.getchar()
                if self.isEqu():
                    self.getchar()
                    res = ["三字符运算符", "<<="]
                else:
                    res = ["双字符运算符", "<<"]
            else:
                res = ['单字运算符', '<']


        elif self.isMore():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", ">="]
            elif self.isLess():
                self.getchar()
                if self.isEqu():
                    self.getchar()
                    res = ["三字运算符", ">>="]
                else:
                    res = ["双字运算符", ">>"]
            else:
                res = ["单字符运算符", ">"]

        elif self.isSharp():
            self.getchar()
            res = ["分界符", "#"]

        elif self.isMark():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "!="]
            else:
                res = ["单字符运算符", "!"]

        elif self.isEqu():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "=="]
            else:
                res = ["单字符运算符", "="]
        elif self.isPercent():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "%="]
            else:
                res = ["单字符运算符", "%"]
        elif self.isMult():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "*="]
            else:
                res = ['单字符运算符', '*']
        elif self.isDiv():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "/="]
            else:
                res = ['单字符运算符', '/']
        elif self.isAnd():
            self.getchar()
            if self.isEqu():
                self.getchar()
                res = ["双字符运算符", "&="]
            elif self.isAnd():
                self.getchar()
                res = ["双字符运算符", "&&"]
            else:
                res = ["单字符运算符", "&"]
        elif self.isQuestion():
            self.getchar()
            res = ["单字符运算符", "?"]
        elif self.isLpar():
            self.getchar()
            res = ['分界符', '(']
        elif self.isRpar():
            self.getchar()
            res = ['分界符', ')']
        elif self.isBigLpar():
            self.getchar()
            res = ['分界符', '{']
        elif self.isBigRpar():
            self.getchar()
            res = ['分界符', '}']
        elif self.isSquareLeft():
            self.getchar()
            res = ["分界符", "["]
        elif self.isSquareRight():
            self.getchar()
            res = ["分界符", "]"]
        elif self.isComma():
            self.getchar()
            res = ['分界符', ',']
        elif self.isSemi():
            self.getchar()
            res = ['分界符', ';']
        elif self.isDot():
            self.getchar()
            res = ['分界符', '.']
        elif self.isColon():
            self.getchar()
            res = ['分界符', ':']
        else:
            self.error()
            return False
        self.RESULT.append(res)
        self.REPLY += "[" + str(res[0]) + ", " + str(res[1]) + "]\n"
        return True

    def word_analyze(self):
        '''
            自动词法分析至出错或到文件末尾
        '''
        self.read()
        self.SOURCE_TEXT.replace("\t", "")
        self.SOURCE_TEXT.replace("\r", "")

        length = len(self.SOURCE_TEXT)
        while self.p < length and self.getsym():
            continue
        if self.p >= length:
            print("WordAnalysis Completed!")
        else:
            print("Unknown invalid syntax!")
    
    def web_word_analyze(self):
        '''
            用于服务器的词法分析接口
        '''
        length = len(self.SOURCE_TEXT)
        while self.p < length and self.getsym():
            continue
        if self.p >= length:
            self.REPLY += "WordAnalysis Completed!" + "\n"
        else:
            self.REPLY += "Unknown invalid syntax!" + "\n"
    
    def web_reply(self):
        '''
            用于服务器的分析应答接口
        '''
        return self.REPLY
    
    def print_result(self):
        '''
            打印词法分析结果
        '''
        i = 1
        for res in self.RESULT:
            print(str(i), "类型:" + str(res[0]), "值:" + str(res[1]))
            i += 1


    def count_if(self):
        '''
            计算if出现次数
        :return: cnt
        '''

        cnt = 0
        for res in self.RESULT:
            if res[0] == '关键字' and res[1] == 'IF':
                cnt += 1
        return cnt

    def ABC_metric(self):

        self.A_cnt = 0
        self.B_cnt = 0
        self.C_cnt = 0
        for res in self.RESULT:
            if res[0] == '单字符运算符' and res[1] == '=':
                self.A_cnt += 1
            elif res[0] == '双字符运算符' and (res[1] == '*=' or res[1] == '/=' or res[1] == '%=' or res[1] == '+='
            or res[1] == '!=' or res[1] == '^=' or res[1] == '&=' or res[1] == '++' or res[1] == '--'):
                self.A_cnt += 1
            elif res[0] == '关键字' and (res[1] == 'GOTO' or res[1] == 'WHILE' or res[1] == 'FOR'):
                self.B_cnt += 1
            elif res[0] == '单字符运算符' and (res[1] == '<' or res[1] == '>' or res[1] == '&' or res[1] == '^' or res[1] == '|' or res[1] == '?'):
                self.C_cnt += 1
            elif res[0] == '双字符运算符' and (res[1] == '==' or res[1] == '!=' or res[1] == '<=' or res[1] == '>='):
                self.C_cnt += 1
            elif res[0] == '关键字' and (res[1] == 'ELSE' or res[1] == 'CASE' or res[1] == 'DEFAULT'):
                self.C_cnt += 1
        return (self.A_cnt, self.B_cnt, self.C_cnt), np.sqrt(self.A_cnt**2 + self.B_cnt**2 + self.C_cnt**2)



    def output(self):
        '''
            输出词法分析结果文件
        '''
        length = len(self.RESULT)
        (_ , tempfilename) = os.path.split(self.INPUT_FILE_NAME)
        (filename, _) = os.path.splitext(tempfilename)
        OUTPUT_FILE_NAME = filename + "wout.txt"
        with open(OUTPUT_FILE_NAME, "w+") as f:
            f.writelines(str(length))
            for res in self.RESULT:
                f.writelines(str(res[0]) + " " + str(res[1]))
        f.close()



if __name__ == "__main__":
    #  INPUT_FILE_NAME = str(input("请输入C0源文件:"))
    INPUT_FILE_NAME = "code/5.c"

    #print(ast)
    meter = ABCmeter(INPUT_FILE_NAME)
    meter.word_analyze()
    #meter.print_result()
    #lexyyy.output()
    (A_cnt, B_cnt, C_cnt), ABC = meter.ABC_metric()
    print("A:{} B:{} C:{} ABC:{}".format(A_cnt, B_cnt, C_cnt, ABC))

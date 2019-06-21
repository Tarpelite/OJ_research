from zss import simple_distance, Node
import json
from cparser import *
import sys
from tqdm import trange, tqdm

#url = "https://sc.ftqq.com/SCU47715T1085ec82936ebfe2723aaa3095bb53505ca315d2865a0.send"

def file_to_json(path):
    test_path = "test_code/" + path[6:-2] + "test.c"

    with open(path) as f:
        data = f.read()
        lines = list(data.split("\n"))
        content = ""
        for line in lines:
            line.strip()
            if "//" in line:
                continue
            if not line.startswith("#"):
                content += line + "\n"

    with open(test_path, "w+") as f:
        f.write(content)
    
    ast_dict = file_to_dict(test_path)
    ast = from_dict(ast_dict)
    with open("ast.json", "w+") as f:
        f.write(to_json(ast, sort_keys=True, indent=4))
    
    with open("ast.json") as f:
        data = json.load(f)
    return data

#path = "ast.json"
#path2 = "ast2.json"


def dfs_search(n_node):
    if isinstance(n_node, dict):
        if "_nodetype" in n_node.keys():
            res = Node(n_node['_nodetype'])
            for item in n_node.values():
                if isinstance(item, dict):
                    kid = dfs_search(item)
                    res.addkid(kid)
                elif isinstance(item, list):
                    for block in item:
                        kid = dfs_search(block)
                        if kid:
                            res.addkid(kid)
            return res
        else:
            return None
    else:
        return None

if __name__ == "__main__":
    '''
    path = "test1.c" # if using dataset, set path = "code/4.c"
    path2 = "test2.c"
    min_ID = sys.maxsize
    min_score = sys.maxsize
    A = dfs_search(file_to_json(path))
    B = dfs_search(file_to_json(path2))
    distance = simple_distance(A,B)
    print(distance)
    '''
    path = "code/4.c"
    A = dfs_search(file_to_json(path))
    min_ID = sys.maxsize
    min_score = sys.maxsize
    for i in trange(1, 3542):
        if i == 4:
            continue
        path2 = "code/" + str(i) + ".c"
        try:
            B = dfs_search(file_to_json(path2))
            distance = simple_distance(A, B)
            print("ID:{} score:{}".format(str(i), distance))
            if distance < min_score:
                min_ID = i
                min_score = distance
        except Exception as e:
            print(e)
            continue
    #distance = simple_distance(A, B)
    print("ID:{} min_score:{}".format(str(min_ID), str(min_score)))
    





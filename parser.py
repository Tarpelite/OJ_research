import json
from ABCmeter import ABCmeter
import matplotlib.pyplot as plt
import numpy as np



data_path = "数据/yuchun.json"
store_path = "code/"

with open(data_path, encoding="utf-8") as f:
    data = json.load(f)

cnt = 0

data_list = []

for record in data:
    cnt += 1
    path = store_path+str(cnt)+".c"
    code = record["submission_code"]["content"]
    try:
        meter = ABCmeter("")
        meter.web_input(code)
        meter.web_word_analyze()
        (A_cnt, B_cnt, C_cnt), ABC = meter.ABC_metric()
        #print("name:{} A:{} B:{} C:{} ABC:{}".format(record['creator']['nickname'], A_cnt, B_cnt, C_cnt, ABC))
    except Exception as e:
        continue
    r_dict = {}
    r_dict['name'] = record['creator']['nickname']
    r_dict['A'] = float(A_cnt)
    r_dict['B'] = float(B_cnt)
    r_dict['C'] = float(C_cnt)
    r_dict['ABC'] = float(ABC)
    data_list.append(r_dict)

data_list.sort(key = lambda x: x['ABC'])
x = []
y = []
for data in data_list:
    x.append(data['ABC'])

x_mean = np.average(x)
y = [i-x_mean for i in x]
plt.scatter(x)
plt.show()



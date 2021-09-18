from bs4 import BeautifulSoup
import requests
import os
import re

# Access new url
def access_new_url(url):
    URL = src_url + url
    page = requests.get(URL).text
    doc = BeautifulSoup(page, 'html.parser')

    div = doc.find("div", {
        "class":"floatbox",
        "id":"col3_content_wrapper"
    })

    table = div.find("table", {
        "cellpadding":"4",
        "cellspacing":"0",
        "border":"0",
        "width":"100%"
    })
    return table

src_url = "https://onlinejudge.org/"
mid_url = "index.php?option=com_onlinejudge&Itemid=8&category="

# Solved tasks
solved_task = []
for folder in os.listdir(os.curdir+'/src'):
    for file in os.listdir(os.curdir+'/src'+'/'+folder):
        solved_task.append(file[:-4].replace("-", " - "))

task_dict = {}

# access html document
for i in range(1, 3):
    table = access_new_url(mid_url+str(i))
    problem_sets = table.find_all(text=re.compile("Volume"))

    for sets in problem_sets:
        s_idx = sets.find("(") + 1
        category = sets[s_idx:-1]
        print(category)
        parent = sets.parent
        link = parent['href']

        table = access_new_url(link)

        problem_name = table.find_all(text=re.compile("-"))
        problem_name = list(map(lambda x:x.replace("\xa0", " "), problem_name))

        task_dict[category] = problem_name

print("Access Done")

# README
text = '''# Online Judge Solution
> Accepted solutions for [Online Judge Problems](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8).<br>
> These solutions are may not the best solution for each task. <br>
> I'm just sharing my own solutions or solution that I had found. <br>
> Some of the questions have been rated in stars by their difficulty in [CPE](http://par.cse.nsysu.edu.tw/~advprog/star.php). <br>
'''

table_of_contents = "# Table of Contents\n"

for c in task_dict.keys():
    table_of_contents += f'* [{c}](#{c})\n'

contents = ""
for idx, c in enumerate(task_dict.keys()):
    contents += f"# {c} <a id='{c}'></a>\n"
    src = f"src/{c}/"
    for t in task_dict[c]:
        src_t = t.replace(" - ", "-").replace("*", " ").replace(" ", "%20")
        real_src = src + src_t + ".cpp"
        if t in solved_task:
            t = t.replace(" - ", "-").replace("*", " ").replace("`", "'")
            contents += f'* [{t}]({real_src})\n'
        else:
            t = t.replace(" - ", "-").replace("*", " ").replace("`", "'")
            contents += f'* {t}\n'

text = text + table_of_contents + contents

with open("Ex.md", 'w') as f:
    f.write(text)
    pass
print("README Updated")
f.close()

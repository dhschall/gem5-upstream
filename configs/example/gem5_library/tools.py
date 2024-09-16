with open('trace', 'r') as file:
    lines = file.readlines()

A = set()
B = set()

# 遍历所有行，找到包含'PFC'的行，并提取'sn:'后面的数字
for line in lines:
    if 'PFC' in line:
        parts = line.strip().split('sn:')
        if len(parts) > 1:
            # 提取'sn:'后面的部分，并获取第一个空格前的数字
            sn_part = parts[1].strip().split()[0]
            A.add(sn_part)

# 再次遍历所有行，找到包含'Commit branch:'的行，并提取'sn:'后面的数字
for line in lines:
    #if 'Commit branch' in line:
    if 'Committing branches un' in line:
        parts = line.strip().split('sn:')
        if len(parts) > 1:
            sn_part = parts[1].strip().split()[0]
            B.add(sn_part)

# 计算A和B的交集
common_numbers = A.intersection(B)

# 输出同时在A和B中的数字
print("同时出现在A和B中的sn数字：")
for number in common_numbers:
    print(number)


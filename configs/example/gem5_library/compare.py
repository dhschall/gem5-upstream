import re
from collections import deque

def extract_pc_taken_with_disassembly(log_file):
    # 正则表达式来匹配含有tick、PC、反汇编和taken?的行
    branch_pattern = re.compile(r"(\d+):.*Predict branch for PC (0x[0-9a-fA-F]+)\s+(.+?)\s+taken\?:(\d)")
    originally_hint_pattern = re.compile(r"(\d+):.*Predict hint for PC (0x[0-9a-fA-F]+) taken\?:(\d)")

    # 用于跟踪之前提取的branch和taken?以及反汇编信息
    branches = {}
    branch_changed = set()  # 用于记录发生过Predict branch变更的PC
    originally_hints = {}  # 维护PC对应的先进先出队列

    with open(log_file, 'r') as file:
        for line in file:
            # 匹配Predict branch行
            branch_match = branch_pattern.search(line)
            if branch_match:
                tick, pc, disassembly, taken = branch_match.groups()
                taken = int(taken)

                # 如果taken是1，记录PC值、反汇编以及tick
                branches[pc] = {'taken': taken, 'disassembly': disassembly, 'tick': tick}

            # 匹配Originally Predict hint行
            originally_hint_match = originally_hint_pattern.search(line)
            if originally_hint_match:
                tick, pc, taken = originally_hint_match.groups()
                taken = int(taken)

                # 比较当前的taken值与之前Predict branch中的taken值
                if pc in branches:
                    branch_taken = branches[pc]['taken']
                    # 保存结果（不同为True，相同为False）
                    is_different = branch_taken != taken

                    if is_different:
                        print(f"{pc} - Predict hint differs (taken?: {taken}) - Disassembly: {branches[pc]['disassembly']} - last prediction tick: {branches[pc]['tick']} - predict_hint tick: {tick}")

# 调用函数，传入日志文件路径
log_file = 'trace'
extract_pc_taken_with_disassembly(log_file)


import re

# 读取文件内容
def read_file(file_path):
    try:
        with open(file_path, 'r') as file:
            return file.readlines()
    except FileNotFoundError:
        print(f"文件 {file_path} 不存在。")
        return []
    except IOError:
        print(f"读取文件 {file_path} 时出错。")
        return []

# 提取 sn 数字的函数
def extract_sn_numbers(lines, keyword):
    sn_numbers = set()
    pattern = re.compile(r'sn:\s*(\d+)|\[sn:(\d+)\]')
    for line in lines:
        if keyword in line:
            matches = pattern.findall(line)
            for match in matches:
                # match 是一个元组，(sn_number, None) 或 (None, sn_number)
                sn_number = match[0] if match[0] else match[1]
                sn_numbers.add(sn_number)
    return sn_numbers

# 主函数
def main():
    file_path = 'trace'
    lines = read_file(file_path)

    if not lines:
        return

    # 提取包含 'PFC' 和 'Commit branch:' 的 sn 数字
    A = extract_sn_numbers(lines, 'PFC')
    #B = extract_sn_numbers(lines, 'Commit branch')
    B = extract_sn_numbers(lines, 'Committing branches')

    # 计算交集并输出
    common_numbers = sorted(A.intersection(B), key=int)
    
    print("同时出现在A和B中的sn数字：")
    for number in common_numbers:
        print(number)

if __name__ == "__main__":
    main()


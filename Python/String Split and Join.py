def split_and_join(line):
    # write your code here
    listed = line.split()
    NewLine = "-".join(listed)
    return NewLine

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)

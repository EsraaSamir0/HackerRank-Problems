if __name__ == '__main__':
    N = int(input())
    list = []
    
    for i in range(N):
        command = input().split()
        if command[0] == "print":
            print(list)
        elif command[0] == "sort":
            list.sort()
        elif command[0] == "pop":
            list.pop()
        elif command[0] == "reverse":
            list.reverse()
        elif command[0] == "insert":
            index = int(command[1])
            value = int(command[2])
            list.insert(index,value)
        elif command[0] == "append":
            value = int(command[1])
            list.append(value)
        elif command[0] == "remove":
            value = int(command[1])
            list.remove(value)

if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
    
    scores = [i[1] for i in students] 
    scores = sorted(set(scores))
    names = []
    for student in students:
        if student[1] == scores[1]:
            names.append(student[0])
            
    names.sort()
    
    for name in names:
        print(name)


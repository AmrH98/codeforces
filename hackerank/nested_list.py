#Given the names and grades for each student in a Physics class of  students,
#store them in a nested list and print the name(s) of any student(s) having the second lowest grade.

if __name__ == '__main__':
    x = []
    low = 0
    for _ in range(int(input())):
        name = input()
        score = float(input())
        x.append([])
        x[_].append(name)
        x[_].append(score)

    x.sort()
    grades = []
    for i in range(len(x)):
        grades.append(x[i][1])
    low = min(grades)
    while min(grades) == low:
        grades.remove(min(grades))
    low = min(grades)
    for i in range(len(x)):
        if x[i][1] == low:
            print(x[i][0])

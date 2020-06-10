from collections import namedtuple

n = int(input())
columns = input().split()
count = 0
for i in range(n):
    students = namedtuple('student', columns)
    col1, col2, col3, col4 = input().split()
    student = students(col1, col2, col3, col4)
    count += int(student.MARKS)
print((count/n))

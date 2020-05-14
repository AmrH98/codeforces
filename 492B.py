# B. Vanya and Lanterns
# time limit per test1 second
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Vanya walks late at night along a straight street of length l, lit by n lanterns. Consider the coordinate system with the beginning of the street corresponding to the point 0, and its end corresponding to the point l. Then the i-th lantern is at the point a i. The lantern lights all points of the street that are at the distance of at most d from it, where d is some positive number, common for all lanterns.
#
# Vanya wonders: what is the minimum light radius d should the lanterns have to light the whole street?

# n is number of lanterns, l is length of street, a are lantern locations

n, l = input().split()
a = input().split()
a.sort()
radius = 0.0
n = int(n)
l = float(l)
for i in range(n-1): #finding maximum distance between adjacent lanterns
    s = float(a[i+1]) - float(a[i])
    abs(s)
    if s > radius:
        radius = s
radius /=2.0
left, right = float(a[0]),float(a[n-1])
if left > radius: #checking left most side and right side before declaring covered radius by lanterns
    radius = left
if (l - right) > radius:
    radius = right
print(radius)

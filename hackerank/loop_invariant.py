

def insertion_sort(l):
    for i in range(1, len(l)):
        key = l[i]
        while (j >= 0) and (l[j] > key):
            l[j+1] = l[j]
            j -= 1
        l[j+1] = key

m = int(input().strip())
ar = [int(i) for i in input().strip().split()]
insertion_sort(ar)
print(" ".join(map(str,ar)))

# In order to identify a correct loop invariant, ask the following questions:

# Does the initialization (before the loop) make the invariant true?
# Does the invariant (together with a false loop guard) imply the goal (or post condition)? In other words, does the invariant capture the correctness and the meaning of the loop?
# Does the loop make progress toward termination (achieving the goal)
# As the loop progresses towards the goal, does it preserve the invariant?

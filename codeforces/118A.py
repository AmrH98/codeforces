# A. String Task
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:
#
# deletes all the vowels,
# inserts a character "." before each consonant,
# replaces all uppercase consonants with corresponding lowercase ones.
# Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.
#
# Help Petya cope with this easy task.

text = input().lower()
main = []
the_vowel = ["a","e","i","o","u","y"]
count = 0
for x in text:
    if x in the_vowel:
        count+=1
    else:
        main.append('.'+x)
for x in range(len(main)):
    print(main[x], end = "")

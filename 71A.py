# A. Way Too Long Words
# time limit per test1 second
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.
#
# Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
#
# This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
#
# Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
#
# You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

lo = int(input())
while lo < 0 or lo > 100:
    lo = int(input())

for x in range(lo):
    word = input().lower()
    n = len(word)
    s = n - 2
    if n < 11:
        print(word)
    else:
        print("{}{}{}".format(word[0],s,word[n-1]))

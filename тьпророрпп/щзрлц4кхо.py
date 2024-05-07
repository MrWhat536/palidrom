
x = input("ваше слово")
n = x[::-1]
print(n)
if x == n:
    print("ваше слово палиндром")
elif x != n:
    print("ваше слово не палиндром")

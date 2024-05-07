while(True):
 x = input("ваше слово: ")
 n = x[::-1]
 if x == n:
     print ("ваше слово палиндром\n")
 elif x != n:
     print ("ваше слово не палиндром\n")

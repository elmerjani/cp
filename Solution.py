string =input()
n=len(string)
size=1
maxSize=1
for i in range(1,n):
    if (string[i]==string[i-1]):
        size+=1
    else :

        maxSize=max(size,maxSize)
        size=1

print(max(size,maxSize))
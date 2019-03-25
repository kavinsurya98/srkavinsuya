s=input("enter sentence:")
t=input("enter string:")
s=s.split(" ")
count=0
for i in range (0,len(s)):
    if(s[i]==t):
        count=count+1
print(count)

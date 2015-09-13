s='abcde'
num = 0
length = len(s)
vo=0
while num < len:
    if s[num] == 'a' or s[num]=='e' or s[num]=='i' or s[num]=='o' or s[num]=='u' :
        vo+=1
    num =num + 1

print ("Number of vowels: "+vo)



r=annualInterestRate
m=0

bal=balance
while(bal>=0):
    m=m+10
    bal=balance
    for i in range(1,13):
        bal=bal-m
        
        
        bal=bal + (bal*r/12)


print "Lowest Payment: "+str(m)




    


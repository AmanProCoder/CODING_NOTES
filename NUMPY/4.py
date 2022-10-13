from traceback import print_tb
import numpy as np
# aa=np.arange(1,13)//creates the array having values from 1 to 13(13 is exclusive)
# print(aa)
# aa=np.arange(1,13,2)//creates the array as above but it add difference of 2 between 2 elements 
# print(aa)

# al=np.linspace(1,5,4) #creates the array having values between 1 and 5 which are equally spaced and the array has 4 elements
# print(al)

# aa=np.arange(1,13)
# ar=aa.reshape(2,6)
# print(ar)

aar=np.arange(1,13).reshape(2,6)
print(aar)

aar=aar.ravel()#convets the multi dimensional array into the one dimensional array
print(aar)

aar=np.arange(1,13).reshape(2,6)
aar=aar.flatten()
print(aar)

aar=aar.transpose()

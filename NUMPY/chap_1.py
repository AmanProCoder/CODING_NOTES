import numpy as np


# myarr=np.array([[3,6,32,7]],np.int8)
# print(myarr[0,1]) #prints 6
# print(myarr[0]) #prints [3,6,32,7]
# print(myarr.shape)
# print(myarr.dtype)
# myarr[0,1]=45


#NUMPY ARRAY CREATION
# 1. CONVERSION FROM OTHER PYTHON STRUCTURE 
# 2. INTRINSIC NUMPY AS ARRAY CREATION OBJECTS(EG arange,ones,zeros,etc)
# 3. Reading arrays from disk, either from standard or custom format
# 4. Creating arrays from raw bytes through the use of strings or buffer
# 5. use of special library functions



# 1. CONVERSION FROM OTHER PYTHON STRUCTURE 
# listarray=np.array([[1,2,3],[5,8,5],[0,3,1]])
# listarray.dtype
# listarray.shape
# listarray.size
# setarray=np.array({34,23,23}) #dtype=object






# 2. INTRINSIC NUMPY AS ARRAY CREATION OBJECTS(EG arange,ones,zeros,etc)
# zeros=np.zeros((2,5)) #creates a array of order 2x5 and all the elements are zero
# zeros.shape

# rng=np.arange(15,20) #creates a row array with 0 to n-1 

# lspace=np.linspace(1,5,12) #it gives 12 elements between 1 to 5 and elements are equally spaced 

# emp=np.empty((4,6)) #creates an array of order 4x6 and all the elements have garbage values 

# emp_like=np.empty_like(lspace) #creates array of same order as lspace and all the elements have garbage values 
# ide=np.identity(45) #creates identity matrix of size 45x45

# arr=np.arange(99)
# arr=arr.reshape(3,33)
# arr=arr.ravel() #converts the array into single row array(1D array)
# print(arr.shape)




# AXIS 
# x=[[1,2,3],[4,5,6],[7,1,0]]
# ar=np.array(x)
# ar
# ar.sum(axis=0)
# ar.sum(axis=1)
# ar.T #transposes the array
# for item in ar.flat:
#     print(item) # it will print all the elements in the array
# ar.ndim #tell the no of dimension of the array
# ar.size #tells the no of elements in the array
# ar.nbytes #tells the totally memory space consumed by the array
# one=np.array(1,3,4,634,2)
# one.argmax() # tells the index of max element
# one.argmin() #tells the index of min element
# one.argsort() # this turns an array with containing the index of the no if they were arranged in the arranged order
# ar.argmin() #first it straigthens the array and tells the index of min element
# ar.argmax(axis=0)





#MATRIX FUNCTIONS
# ar2=np.array([1,2,1],[4,0,6],[15,2,0])
# ar+ar2 
# ar*ar2 #elementwise mutltiplication
# np.sqrt(ar) #finds the sqrt elementwise
# np.where(ar>5) #returns the index of all the element with satisfies the condition
# type(np.where(ar>5)) #prints tuple
# np.count_nonzero(ar)#tells the no of non zero elements 
# np.nonzero(ar)

# import sys
# py_ar=[0,4,55,2]
# np_ar=np.array(py_ar)
# sys.getsizeof(1)*len(py_ar) #56
# np_ar.itemsize*np_ar.size   #16



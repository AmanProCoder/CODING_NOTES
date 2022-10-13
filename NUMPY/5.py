import numpy as np
arr1=np.arange(1,10).reshape(3,3)
arr2=np.arange(1,10).reshape(3,3)

print(arr1+arr2)
print(np.add(arr1,arr2))
#above both adds the corresponding elements of the arrays
print(np.subtract(arr1,arr2))
print(np.divide(arr1,arr2))
print(arr1/arr2)
print(np.multiply(arr1,arr2)) #corresponding elements is been multiplied 
print(arr1*arr2)
print(arr1@arr2)#matrix product
print(arr1.dot(arr2))#matrix product
print(arr1.max())
print(arr1.argmax())
print(arr1.max(axis=0)) #0 represents the column
print(arr1.max(axis=1)) #1 represents the row
#for minimum value replace max with min, rest is same 
print(np.sum(arr1))
print(np.sum(arr1,axis=0))
print(np.sum(arr1,axis=1))
print(np.mean(arr1))
print(np.sqrt(arr1))
print(np.std(arr1))#standard division

print(np.exp(arr1))
print(np.log(arr1))
print(np.log10(arr1))




import numpy as np
arr1=np.arange(1,17).reshape(4,4)
arr2=np.arange(17,33).reshape(4,4)
# print(np.concatenate((arr1,arr2),axis=1)) #by default the axis is 0
# print(np.vstack((arr1,arr2)))
# print(np.hstack((arr1,arr2)))
print(np.split(arr1,2))
list1=np.split(arr1,2)
print(list1[0])
print(type(list[0]))
print(np.split(arr1,2,axis=1))
d1=np.array([])
print(np.splti(d1,[1,3]))
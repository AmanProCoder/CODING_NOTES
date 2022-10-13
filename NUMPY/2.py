import numpy as np


arr_1d=np.array([1,2,3,4])
print(type(arr_1d))
print(arr_1d.ndim)
print(arr_1d.size) #give the no of elements
print(arr_1d.shape)

arr_2d=np.array([[1,2,3,4],[5,6,7,8]])
print(arr_2d)
print(arr_2d.ndim)
print(arr_2d.size) #gives the no of elements
print(arr_2d.shape) #returns a tuple and (row,colm)
print(arr_2d.dtype)



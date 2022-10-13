import numpy as np
mx=np.array([[1,1,1],[1,1,1],[1,1,1]])
print(mx)
mx=np.ones(5)
print(mx.dtype)
print(mx)
mx=np.ones((3,4)) #by default it is float
print(mx)
mx=np.ones((3,4),dtype=int)
print(mx)


nx=np.zeros((4,6))#by  default it is float 
print(nx)
nx=np.zeros((4,6),dtype=bool)
print(nx)
nx=np.zeros((4,6),dtype=str)
print(nx)

ex=np.empty((3,5))
print(ex)
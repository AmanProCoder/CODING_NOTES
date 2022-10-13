# series one dimensional labelled homogenous array
# dataframe 2d labelled hetergenous tabular structure, if we add 2 series we will get the dataframe
# panel 3d labelled 
from msilib.schema import ServiceInstall
import pandas as pd
ls=[1,2,-3,6,2,'data values']
s=pd.Series(ls)
print(s)
print(type(s))
ss=pd.Series([1,2,3,4])
print(ss)
empty=pd.Series([])
print(empty)
sd=pd.Series([1,2,3,4,],index=['a','b','c','d'],dtype=float)
print(sd)
sd=pd.Series([1,2,3,4,],index=['a','b','c','d'],dtype=float,name='data values')
scalar_s=pd.Series(0.5)

print(scalar_s)
scalar_s=pd.Series(0.5,index=[1,2])


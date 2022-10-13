#include<stdio.h>
//return with arguments 
//global and local variable 
//scope of variable
/*
   ____
  a|10|
   |__|

*/
int a=5;//this is a global variable to the whole function
void am()
{   
    printf("am-%d",a);//
}
int main()
{   //local variables are always given priority over global variable
    printf("1-%d\n",a); //prints the value of global variable // which is 5
    int a=10; // now a is a local variable  
    am();  
    printf("\n3-%d",a);//
    a=55; //local variable 
    printf("\n4-%d",a);// 55
    am();
    return 0;
}
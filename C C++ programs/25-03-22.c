#include<stdio.h>
void main()
{
    //Storage classes in C
    //call by reference and call by value 
    //storage casses refers to variable, function...
    //scope, lifetime(how long it is alive) and default value
    //types of storage classes are:: auto,extern, static and register (default one is auto)
    //IN "auto" the variable is stored the RAM   
    //in "register" the variable is stored in the CPU REGISTERS
    // for cpu or processor nearest memory is CPU-->REGISTER-->CACHE-->RAM-->SECONDARY MEMORY


    // int a;
    // auto int b;
    // //extern int c;
    // static int d; //by default value is zero
    // register int e; //STOERED IN THE REGISTERS 
    // printf("a is:%d",a);  //garbage values is printed
    // printf("\nb is:%d",b);//garbage values is printed
    // //printf("\nc is:%d",c);  
    // printf("\nd is:%d",d);
    // printf("\ne is:%d",e);  //garbage values is printed






//     auto int a=10;
//     printf("%d",a);
//     {
//         auto int a=20;
//         printf("%d",a);
//     }
//     {
//         auto int a=30;
//         printf("%d",a);
//     }
//    printf("%d",a);
   // this set of lines prints this as output ==>>10 20 30 10





    // register int a=10;
    // printf("%u",&a); //we cant excess the address of the register variables




    //static - it will declare only once 
    int i;
    for(i=1;i<=10;i++)
    {
        int a=10;
        static int b=10;
        a++;
        b++;
        printf("\nthe a is: %d",a);
        printf("\tthe b is: %d",b);

    }
}
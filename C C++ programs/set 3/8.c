#include<stdio.h>
void main()
{
    float balance,rate,year,month,payment,interest;
    int i;
    printf("loan payment::");
    scanf("%f",&balance);
    printf("no of year::");
    scanf("%f",&year);
    printf("annual interest rate::");
    scanf("%f",&rate);
    printf("monthly payment::");
    scanf("%f",&payment);
    rate=rate/12;
    month=year*12;
    printf("Payment#\tInterest\tPrincipal\tBalance\n");
    for(i=1;i<month+1;i++)
    {
        interest=balance*rate/100;
        balance=balance+interest-payment;
        printf("%-15d %-15f %-15f %-15f\n",i,interest,payment-interest,balance);
    }
}
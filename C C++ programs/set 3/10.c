#include<stdio.h>
void main()
{
    int year,day,i,n,t=0,k,j;
    printf("enter the year::");
    scanf("%d",&year);
    printf("enter the day(1 for Monday,2 for tuesday)::");
    scanf("%d",&day);
    if(year%4==0)
    {
        if(year%100==0)
            {
                if(year%400==0)
                t=1;
            }
        else
            t=1;
    }
    for(i=1;i<13;i++)
    {
        switch(i)
        {
            case 1:
            printf("\tJanuary %d",year);
            n=31;
            break;
            case 2:
            printf("\tFeburary %d",year);
            if(t==1)
                n=29;
            else
                n=28;
            break;
            case 3:
            printf("\tMarch %d",year);
            n=31;
            break;
            case 4:
            printf("\tApril %d",year);
            n=30;
            break;
            case 5:
            printf("\tMay %d",year);
            n=31;
            break;
            case 6:
            printf("\tJune %d",year);
            n=30;
            break;
            case 7:
            printf("\tJuly %d",year);
            n=31;
            break;
            case 8:
            printf("\tAugust %d",year);
            n=31;
            break;
            case 9:
            printf("\tSeptember %d",year);
            n=30;
            break;
            case 10:
            printf("\tOctober %d",year);
            n=31;
            break;
            case 11:
            printf("\tNovember %d",year);
            n=30;
            break;
            case 12:
            printf("\tDecember %d",year);
            n=31;
            break;
        }
        printf("\n\n");
        printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
        for(int u=0;u<day;u++)
        printf("\t ");
        j=day-1;
        for(k=1;k<n+1;k++)
        {
            printf("%-8d",k);
            j=j+1;
            if(j==6)
            {
            printf("\n");
            j=-1;
            }
        }
        day=j+1;
        printf("\n");
    }
}
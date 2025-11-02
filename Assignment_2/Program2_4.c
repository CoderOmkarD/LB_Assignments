#include<stdio.h>

void Display(int iNo,int ifrequency)
{ 
    int No1=0;

    if(ifrequency<0)
    {
        ifrequency=-ifrequency;
    }
    
    for(No1=1;No1<=ifrequency;No1++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{

    int iValue=0;
    int iCount=0;

    printf("Enter the Number..\n");
    scanf("%d",&iValue);

    printf("Enter the Frequency..\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
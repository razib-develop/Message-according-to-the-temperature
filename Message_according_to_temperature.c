#include<stdio.h>
#include<conio.h>
int main()
{
    int temp;
    printf("Enter temperature in Celcius: ");
    scanf("%d",&temp);
    if(temp<0)
        printf("Freezing weather");
    else if(temp<10)
        printf("Very cold weather");
    else if(temp<20)
        printf("Cold weather");
    else if(temp<30)
        printf("Normal in Temp");
    else if(temp<40)
        printf("Its Hot");
    else
        printf("Its Very Hot");
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    float amt;
    int unit;
    printf("Enter unit",unit);
    scanf("%d",&unit);
    if(unit<50)amt=unit*0.50;
    else if(unit<=100)50*0.50+(unit-50)*0.75;
    else if(unit<=150)50*0.50+50*0.75+(unit-100)*1.20;
    printf("amount=%.2f",amt);
}
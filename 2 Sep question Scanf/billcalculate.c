/*write a c program using the ternary operator to calculate the electricity bill for a given number of units consumed 
by a customer.
For the first 100 units, the rate is Rs.3.00rs per unit.
For any additional units beyond 100,the rate is Rs.4.50 per unit*/
#include<stdio.h>
int main(){
    int unit;
    float amt;
    printf("Enter consumed unit");
    scanf("%d",&unit);
    amt=unit<=100?amt=unit*3.0:(100*3.0)+(unit-100)*4.5;
    printf("%f",amt);
    return 0;

}
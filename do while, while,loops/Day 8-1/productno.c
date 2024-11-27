#include<stdio.h>
#include<stdlib.h>// for the abs function
int main(){
    int number, product=1;
    //input number
    printf("enter a number: ");
    scanf("%d",&number);
    //convert number to positive if it is negative
    number=abs(number);
    //check if the number is zero
    if(number==0){
        product = 0;

    }
    else{
        // calculate the product of the digits
        while (number>0)
        {
            product *=number %10;//multiply last digit
            number/=10;//remove the last digit
            number /=10;

        }
        
    }
    printf("the product of the digit is %d\n",product);
    return 0;

}
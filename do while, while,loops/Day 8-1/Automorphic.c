/*write a c program to check given number is automorphic number or not 
Automorphic number: an automorphic number is a whose square ends in the same digit as the number itself
5*5=25//last digit is 5*/



#include<stdio.h>
#include<conio.h>
int main(){
    int no,sq,ld,c=0;
    printf("enter your no");
    scanf("%d",&no);
    ld= printf("%d",no);
    sq=no*no;
    printf("%d",sq);  // 5==5   25  ==25
    while (sq%10==no%10)
    {
         sq/=10;
         no/=10;
         c++;
    }

    if(c==ld)
    {
        printf("true");
    }
    else
    printf("False");

    


    
}
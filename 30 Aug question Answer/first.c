/*write a c program to take the mark of a students in 5 subject as input and determine how many subjects have marks 
greater than or equal to 35 and how many have marks less than 35*/
#include<stdio.h>
int main(){
  int   s1=38,s2=34,s3=35,s4=78,s5=20;
  int res =(s1>=35)+(s2>=35)+(s3>=35)+(s4>=35)+(s5>=35);
  printf("pass in %d subject and fail in %d subject ",res,5-res);
  return 0;
}
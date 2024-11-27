//write c proram to print sum of first and last digit of given any 3 digit number
#include <stdio.h>

int main() {
 int number=123;
 printf("%d",number%10+ number/100 );
}
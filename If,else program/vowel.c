//Write c program to input any alphabet and check whether it is vowel or consonant using simple (if) only


#include<stdio.h>
int main(){
    char ch;
    printf("enter your char");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e'  || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
   { puts("it is Vowel");}
    else if(ch>='a' && ch<='z'){
    puts("it is consonant");}
    else{
        printf("the character is not alphabate");
    }

    
}
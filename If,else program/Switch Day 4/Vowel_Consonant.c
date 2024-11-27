//write a c program to check whether a given alphabet is vowel or consonant or special character using switch case.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter your char");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z') ch+32;
    if(ch>='a' && ch<='z')
    switch (ch)
    {
    case 'a': case 'e': case 'i': case 'o' : case 'u' : case 'A': case 'E': case 'I': case 'O' : case 'U':
    puts("Vowel");break;
    
    default:puts("Consonant"); break;
    }
    else if (ch>='0' && ch<='9')
    {
        puts("Digit");
    }
    else  {puts("Specal Character");}
    

}
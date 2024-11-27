#include<stdio.h>
#include<string.h>
void main()
{
    int l,i;
    char name[30],c;
printf("enter string");
gets(name);
l-strlen(name);
for ( i = 0; i <1/2; i++)
{
    c=name[i];
    name[i]=name[l-1-i];
    name[l-1-i]=c;
}

printf("%s",name);

    
}
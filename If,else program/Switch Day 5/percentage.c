/*using a switch statement write a c program to take the value from the user as input marks of five subjects physics, chemistry, biology, math
and computer*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int totalmark,per,phy,chem,bio,math,com;
    printf("enter your mark",phy,chem,bio,math,com);
    scanf("%d %d %d %d %d ",&phy,&chem,&bio,&math,&com);
    totalmark=phy+chem+bio+math+com;
    per=totalmark/6.0;
    if(per>=90){
        
    }
    else if(per>=80){
       
    }
    else if(per>=70){
        
    }

 else if(per>=60){
        
    }
     else if(per>=40){
    
    }
    else if(per<=35){
    
    }

switch (per)
{
case 90:printf("Grade A");break;
case 80:printf("Grade B");break;
case 70: printf("Grade C");break;
case 60:printf("Grade D");break;
case 40:printf("Grade E");break;
case 5:printf("fail");break;

default:printf("result not found");break;
}




    
}




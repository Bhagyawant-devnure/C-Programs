//write a c program for a service center by followint rules and guide line.
/*This service center only accepts wheeler, 3 wheeler &4 wheeler if any other vehicle came to you
you have to message that "this service center is not accepting 
other than 2 wheeler, 3wheeler,4wheeler
==> if the vehicle is 2,3,4 only then have to ask the user what is the age of the vehicle.
if the age your vehicle is above 8 month the only accept the service center.
otherwise ou have to show message that "your vehicle servie will done after a while."
if the vehicle age is greater than 8 another them show option to the user on the console  "*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int tyer;
    int age;
    printf("Enter your tyer: ");
    scanf("%d",&tyer);
    
    if(tyer>=4)printf("This service center is not accepting");
    printf("Enter Your vehicle age");
    scanf("%d",&age);
     if(age<=8){
printf("Accept the service center");
    }
    else{
        printf("your vehicle servie will done after a while");
    }
    
        
        
    
    
}
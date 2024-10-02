//A programme to calculate the simple interest 
/*
programme to find the simple interest 
Author:Arnold Toby Thuranira
Reg no:CT101/G/22183/24
Date:29/09/2024
*/
#include <stdio.h>
int main(){
int p;
int R;
int T;

printf("enter p"); 
scanf("%d",&p);//The user is asked to enter the value of p
printf("The principal is %d",p);//It tells the user what value of p he or she has inserted

printf("enter R");
scanf("%d",&R);//It asks to user to enter the value of R
printf("The rate is %d",R);//It tells the user what rate has been inserted 

printf("enter T");
scanf("%d",&T);//It asks the user to type in the value of T
printf("The time is %d",T);// Tells the user what value of t they have inserted 

float SI=(p*R*T)/100;//
printf("%f",SI);
return 0;
}
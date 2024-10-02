//programme to find the compound interest
/*
programme to find the compound interest
Author:Arnold Toby Thuranira
Reg no:CT101/G/22183/24
Date:29/08/2024
*/

#include <stdio.h>
#include <math.h>
int main() {
    char Name [24];
    printf("enter your name");
    scanf("%s",&Name);//prompts user to enter their name
    printf("\nhello:%s.\nThis prgm calculates CI",Name);

    float p,r,n,t;

    printf("\nenter p");// user to enters principal
    scanf("%f",&p);
    printf("\nThe principal is %f",p);
    printf("\nenter r");
    scanf("%f",&r);
    printf("\n The principal amount is %f",r);
    printf("\nenter n");
    scanf("%f",&n);
    printf("\nThe Number of compounding per year is %f",n);
    printf("\nenter t");
    scanf("%f",&t);
    printf("\nThe total number of years is %f",t);

    float CI=p*pow((1+(r/100)/n),n*t)-p;
    printf("\nThe compound interest is%.1f",CI);

    return 0;
}
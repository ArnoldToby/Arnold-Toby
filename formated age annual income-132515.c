//programme for age and annual income
/*
Author:Arnold Toby Thuranira
Reg no:CT101/G/22183/24
Date:1/10/2024
*/

#include <stdio.h>
int main() {
    int age;
    float annualincome;
    printf("\nEnter your age");
    scanf("%d",&age);
    printf("\nEnter your annual income");
    scanf("%f",&annualincome);
    if(age>=21 & annualincome>=21000) {
        printf("\ncongratulations you qualify for a loan");
    }
    else {
        printf("\nYou don't qualify for a ploan");
    }
    return 0;
}
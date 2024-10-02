//programme for library books
/*
Author:Arnold Toby Thuranira
Reg no:CT101/G/22183/24
Date:1/10/2024
*/

#include <stdio.h>
int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int fineRate;
    int fineAmount;
    printf("Enter your Book Id");
    scanf("%d",&bookID);
    printf("\nYour book ID is %d",bookID);
    
    printf("\nEnter the Due date");
    scanf("%d",&dueDate);
    printf("\nYour Due date is %d",dueDate);
    
    printf("\nEnter the Return date");
    scanf("%d",&returnDate); 
    printf("\nYour Return date is %d",returnDate);
    
    int O=returnDate-dueDate;
    printf("\n Your overdue is %d",O);
   
    if(O<=7){
    fineRate= 20;
    fineAmount=fineRate*O;
    printf("\nThe FA is %d",fineAmount);} 
    
    else if (O<=15){
    int fineRate=50;
    int fineAmount=fineRate*O;
    printf("\nThe Fine Amount is %d",fineAmount);}
    
    else {
      fineRate=100;
      fineAmount= fineRate*O;
      printf("\noverdue is %d",O);}
      printf("\nYour due date is%d",dueDate);
      printf("\nYour Book ID is %d",bookID);
      printf("\nYour Return date is %d",returnDate);
      printf("\nYour fine rate is %d",fineRate);
      printf("\nYour Fine amount is %d", fineAmount);
      
    return 0;
}
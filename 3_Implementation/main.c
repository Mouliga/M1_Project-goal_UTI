
#include<stdio.h>

int main()
{
  int p,balance = 3000, withdraw = 0, deposit,amount=0,c;
  printf(" \n INSERT THE CARD \n");
  printf(" \n Enter the PIN number \n");
  scanf("%d",&p);
  
  printf(" \n 1.Check Balance\n");
  printf(" \n 2.Withdraw\n");

S:
  printf(" \n Enter the choice \n ");
  scanf("%d",&c);
  
  if(c==1)
  {
    printf("Your available balance is: %d", balance);
  }
  
  else if(c==2)
  {
    printf("Enter the amount to withdraw");
    scanf("%d",&amount);
     if(amount > balance)
       printf(" You have insufficient amount");
     else
       balance = balance - amount;
       printf(" Available balance is: %d",balance);
  }
  
  else 
  {
    printf("Invalid input");
  }
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int Withdraw(int wd)
{
  int Bal;
  scanf("%d",&Bal);
  
  printf(" Withdraw a money\n");
  
  if(Wd<Bal)
  {
    Bal -= Wd;
    printf("Withdrawing money is: %d,wd);
  }
           
  else
  {
    printf("You Don't have enough money");
  }
  }

/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("\n\n\n\nPlease enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  //remove the "enter" endline character
  getchar();

  printf("\n\nDo you have any children? (Y) or (N)? ");
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("\n\nHow many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax here


  if(agi >= 0 && agi <= 19900){
    tax = agi * .1;
  }
  else if(agi >= 19001 && agi <= 81050){
    tax = (agi - 19900) * .12 + 1990;
  }
  else if(agi >= 81051 && agi <= 172750){
    tax = (agi - 81050) * .22 + 9328;
  }
  else if(agi >= 172751 && agi <= 329850){
    tax = (agi - 172750) * .24 + 29502;
  }
  else if(agi >= 329851 && agi <= 418850){
    tax = (agi - 329850) * .32 + 67206;
  }
  else if(agi >= 418851 && agi <= 628300){
    tax = (agi - 418850) * .35 + 95686;
  }
  else if(agi >= 628301){
    tax = (agi - 628300) * .37 + 168933;
  }
  else{
    printf("\n\nError...invalid input");
  }

  if(numChildren > 0){
    childCredit = numChildren * 2000;
  }
  else{
    childCredit = 0;
  }

  totalTax = tax - childCredit;

  if(totalTax < 0){
    totalTax = 0;
  }

  printf("\n\nAGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n\n\n\n", totalTax);

  return 0;
}

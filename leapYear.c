/**
 * This program determines if various years are leap
 * years or not.
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Returns true (1) if the given year is a leap year,
 * false (0) if it is not a leap year.
 */
int isLeapYear(int year);

int main(int argc, char **argv) {

  int year;
  int numPassed = 0;
  int numFailed = 0;

  //Hard-coded ad-hoc test cases
  //Do not change these, add your own test cases
  //below.  All test cases should pass.

  year = 2000;
  printf("Test Case 1: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2001;
  printf("Test Case 2: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2100;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  //TODO: write at least 3 more of your own
  //      test cases here, they should all pass!
  
  year = 2022;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)){
    printf("FAILED!\n");
    numFailed += 1;
  }
  else{
    printf("PASSED!\n");
    numPassed += 1;
  }

  year = 4092131;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)){
    printf("FAILED!\n");
    numFailed += 1;
  }
  else{
    printf("PASSED!\n");
    numPassed += 1;
  }

  year = 6021;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)){
    printf("FAILED!\n");
    numFailed += 1;
  }
  else{
    printf("PASSED!\n");
    numPassed += 1;
  }







  printf("\n\n");
  printf("Summary:\n");
  printf("Number of test cases passed: %d\n", numPassed);
  printf("Number of test cases failed: %d\n", numFailed);
  printf("Percentage Passed: %.2f%%\n", (double) numPassed / (numPassed + numFailed) * 100.0);

  return 0;
}

int isLeapYear(int year) {
  //TODO: Write your logic here
  //      The year is stored in the variable year
  //      Your function should return true (1) if it represents a leap year
  //      and false (0) if it does not.
  if(0 == (year % 4)){
    if((0 == year % 100) && !(0 == year % 400)){
      return 0;
    }
    else{
      return 1;
    }
  }
  else{
    return 0;
  }
}

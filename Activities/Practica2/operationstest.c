#include <stdio.h>
#include "operations.h"

void printTestMessage(int, char *, char *);
int testAddition(void);
int testSubstraction(void);

int main(){
  //Test add

  printTestMessage(testAddition(), "Add test passed", "Add test Failed");
  printTestMessage(testSubstraction(), "Substraction test passed", "Substraction test Failed");
  return 0;
}

void printTestMessage(int condition, char *messagePassed, char *messageFailed){
  if (condition){printf("%s\n", messagePassed);}
  else {printf("%s\n", messageFailed);}
}

int testAddition(void){
  int a = 5;
  int b = 4;
  int resultAdd = add(a,b);
  int expectedAdd = a + b;
  return resultAdd == expectedAdd;
}

int testSubstraction(void){
  int a = 5;
  int b = 4;
  int resultSub = sub(a,b);
  int expectedSub = a - b;
  return resultSub == expectedSub;
}

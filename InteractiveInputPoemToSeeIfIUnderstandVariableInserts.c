#include <stdlib.h>
#include <stdio.h>

int main ()
{
  char color [20]
  char pluralNoun[20]
  char celebrity[20]
 // the 20 is the limit for the length
  
  printf("enter a color: ");
  scanf("%s", color);
  //that asks user and has user inpu a vaue
  printf("Enter a plural noun: ");
  scanf("%s", pluralNoun);
  printf("Enter a celebrity");
  scanf("%s," celebrity);
  // you are passing with scanf the value to the parameter or char that has a limit of 20 length
  
  printf("Roses are %s\n", color);
  print("%s are blue\n", pluralNoun);
  printf("I love %s\n", celebrity);
         
         // %s is string %d decimal %i interger
  
  return 0;
  }
// something is wrong and it wont compile 

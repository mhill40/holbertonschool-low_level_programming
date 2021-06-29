# holbertonschool-low_level_programming
mhill 0x00 c assignment

The project was about learning how C is structured, the syntax, and how to compile code with gcc and to a lesser extent npm and pip3, and how main is the starting point of a c program and things direct and squence from there. very fun.


things to remember is main at the beginning is the main function of the program. you need a main.c. void basically mean the function wont return any ifo
2. give function a name
3.  name according to what it does
4.    aka 
5.    
6.int main ()
7{
return 0;
 }
 void sayHi () {
    printf("Hello Person reading this");
}

// but ive seen it the oher way around with print first and return at the end


// now for a poem with user terminal input


#include <stdlib.h>
#include <stdlib.h>

int main ()
{
  char color [20]
  char pluralNoun[20]
  char celebrity[20]
  
  printf("enter a color: ");
  scanf("%s", color);
  //that asks user and has user inpu a vaue
  printf("Enter a plural nount: ");
  scanf("%s, pluralNoun);
  printf("Enter a celebrity");
  scanf("%s, celebrity);
  // you are passing with scanf the value to the parameter or char that has a limit of 20 length
  
  printf("Roses are %s\n", color);
  print("%s are blue\n", plural noun);
  printf("I love %s\n, celebrity);
  
  return 0;
  }

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ops 5

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
void exitprogram(int a, int b);


int main (void)
{ 
	/* IMPLEMENT ME: Insert your algorithm here */
  bool running = true;
  while(running == true){
    
  int (*ptr[ops])(int,int)={add,subtract,multiply,divide};
  int choice;
  int a,b;
  printf("Enter your choice: 0:add | 1:subtract | 2:multiply | 3:divide | 4:exit\n");
  scanf("%d",&choice);
  printf("Enter two numbers:\n");
  scanf("%d %d", &a, &b);
  printf("%d",ptr[choice](a,b));
    
  }
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
void exitprogram(int a, int b){printf("Exiting"); exit(0);}

#include <stdio.h>
#include <stdlib.h>
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
  int (*ptr[ops])(int,int)={add,subtract,multiply,divide};
  int choice;
  int a,b;
  printf("Enter your choice: 0 to add, 1 to subtract, 2 to multiply, 3 to divide, 4 to exit program\n");
  scanf("%d",&choice);
  printf("Enter two numbers:\n");
  scanf("%d %d", &a, &b);
  printf("%d",ptr[choice](a,b));
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
void exitprogram(int a, int b){printf("Exiting"); exit(0);}
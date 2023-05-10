#include <stdio.h>
#include <stdlib.h>

int main() {
// initiating as doubles not int to calculate decimal number like 3.65 
  double num1;
  double num2;

 //prompt user Input
 //if user inputs a string it breaks and prints 0.0000 as answer using a format specifier as lf
printf("Enter first Number:");
scanf("%lf", &num1);

printf("Enter second Number:");
scanf("%lf", &num2);

float sum = num1 + num2;

printf("Answer: %f", sum);

  return 0;
}
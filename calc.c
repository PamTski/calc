//Philip Martin Uy Antolihao CCPROG s27


#include <stdio.h>


float adder(float x, float y){
  return x +y;
}

float subtract(float x, float y){
  return x - y;
}

float divide(float x, float y){
  return x / y;
}

float multiply(float x, float y){
  return x * y;
}
int main(void){
  float x, y;
  int nChoice;
  printf("Enter first operand here: ");
  scanf("%f", &x);
  printf("Enter second operand here: ");
  scanf("%f", &y);
  printf("1.) Add\n2.)Subtract\n3.) Divide\n4.) Multiply \n");
  scanf("%d", &nChoice);
  switch(nChoice){
    case 1:
      printf("x + y = %.2f", adder(x,y));
      break;
    case 2:
      printf("x - y = %.2f", subtract(x, y));
      break;
    case 3:
      printf("x / y = %.2f", divide(x,y));
      break;
    case 4:
      printf("x * y = %.2f", multiply(x, y));
      break;
    default:
      printf("Error occured");
  }
  printf("\n"); 
  return 0;
}

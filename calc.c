#include <stdio.h>


int adder(int x, int y){
  return x +y;
}

int subtract(int x, int y){
  return x - y;
}

int divide(int x, int y){
  return x / y;
}

int multiply(int x, int y){
  return x * y;
}
int main(void){
  int x, y, nChoice;
  printf("Enter first operand here: ");
  scanf("%d", &x);
  printf("Enter second operand here: ");
  scanf("%d", &y);
  printf("1.) Add\n2.)Subtract\n3.) Divide\n4.) Multiply \n");
  scanf("%d", &nChoice);
  switch(nChoice){
    case 1:
      printf("x + y = %d", adder(x,y));
      break;
    case 2:
      printf("x - y = %d", subtract(x, y));
      break;
    case 3:
      printf("x / y = %d", divide(x,y));
      break;
    case 4:
      printf("x * y = %d", multiply(x, y));
      break;
    default:
      printf("Error occured");
  }
  printf("\n"); 
  return 0;
}

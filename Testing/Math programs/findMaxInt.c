#include <stdio.h>

int main() {
																
																int num1,num2,num3;
																
																//random values from user
																printf("Enter any random number: ");
																																scanf("%d%d%d",&num1,&num2,&num3);
																printf("\n");
																
																if (num1 > num2 && num1 > num3) {
																																printf("%d is the max",num1);
																} else if (num2 > num1 && num2 > num3) {
																																printf("%d is the max",num2);
																} else if (num3 > num1 && num3 > num2) {
																																printf("%d is the max",num3);
																}
																
																return 0;
}
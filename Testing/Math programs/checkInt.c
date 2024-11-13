#include <stdio.h>

int main() {
																
																int userInput;
																
																printf("\n");
																printf("Enter a number to check if divisable by 3 and 5: ");
																																scanf("%d",&userInput);
																
																//condition to check whether num is divisable by both conditions
																if (userInput % 3 == 0 && userInput % 5 == 0) {
																																printf("Is divisable True");
																} else {
																																printf("Is divisable False");
																}
																return 0;
}
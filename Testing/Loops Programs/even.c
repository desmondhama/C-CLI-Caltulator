#include <stdio.h>

int main() {
																
																int userInput;
																
																printf("Enter a value to check if Odd or Even: ");
																																scanf("%d",&userInput);
																
																if (userInput % 2 == 0) {
																																printf("Is Even: %d",userInput);
																} else {
																																printf("Is Odd %d",userInput);
																}
																
																return 0;
}
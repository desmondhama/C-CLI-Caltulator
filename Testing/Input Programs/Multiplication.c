#include <stdio.h>

int main() {
																
																int input,answer;
																
																printf("Enter a value to find the multiple of that number: ");
																																scanf("%d",&input);
																
																for(int i = 1;i <= 10;i++) {
																																
																																answer = input * i; //answer of mutliple of 5
																																printf("%d * %d = %d\n",input,i,answer);
																}
																return 0;
}
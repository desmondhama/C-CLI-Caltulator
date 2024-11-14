#include <stdio.h>

int main() {
																
																char userL;
																
																printf("Enter a random letter: ");
																																scanf("%c",&userL);
																
																if(userL == 'a' || userL == 'e' || userL == 'i' || userL == 'o' || userL == 'u') {
																																printf("VOWEL");
																} else {
																																printf("Consonent");
																}
																return 0;
}
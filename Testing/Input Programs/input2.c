#include <stdio.h>
#include <ctype.h>

int main() {
																char a; //memory location for user input
																
																printf("Enter a charecter: ");
																																scanf("%c",&a); //ask user for char input
																//Cornvert from lowercase char to uppercase char 
																printf("Capital 'a' to 'A' --> %c",toupper(a));
																return 0;
}
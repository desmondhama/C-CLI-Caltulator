#include <stdio.h>

int main() {
																
																int gpa;
																int gpaMinimum = 5;
																
																printf("What is your GPA: ");
																																scanf("%d",&gpa);
																
																if (gpa >= gpaMinimum) {
																																printf("YES you can apply\n"); 
																} else {
																																printf("NO you can't apply\n");
																}
																
																return 0;
}
#include <stdio.h>

int main() {
    int num;
    const char *month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter num of month: ");
    scanf("%d", &num);
																
																if(num >=1 && num <= 12) {
																																printf("%s",month[num - 1]);
																} else {
																       printf("Invalid value !");             
																}
																return 0;
}
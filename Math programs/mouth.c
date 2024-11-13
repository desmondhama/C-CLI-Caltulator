#include <stdio.h>

int main() {
    int num;
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter num of month: ");
    scanf("%d", &num);

    // 1 = Jan, 2 = Feb, etc.
    if(num == 1) {
        printf("%s\n", months[0]);
    } else if(num == 2) {
        printf("%s\n", months[1]);
    } else if(num == 3) {
        printf("%s\n", months[2]);
    } else if(num == 4) {
        printf("%s\n", months[3]);
    } else if(num == 5) {
        printf("%s\n", months[4]);
    } else if(num == 6) {
        printf("%s\n", months[5]);
    } else if(num == 7) {
        printf("%s\n", months[6]);
    } else if(num == 8) {
        printf("%s\n", months[7]);
    } else if(num == 9) {
        printf("%s\n", months[8]);
    } else if(num == 10) {
        printf("%s\n", months[9]);
    } else if(num == 11) {
        printf("%s\n", months[10]);
    } else if(num == 12) {
        printf("%s\n", months[11]);
    } else {
        printf("Invalid month number.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
																
																int rank;
																const char *salary[] = {"2 50 000","2 10 000","1 50 000","80 000","50 000"};
																
																printf("What is your rank 1-5?: ");
																																scanf("%d",&rank);
																
																if (rank >=1 && rank <= 5) {
																																printf("%d-%s",rank,salary[rank -1]);
																} else {
																																printf("You entered invalid value !");
																}
																return 0;
}
#include<stdio.h>
int main()
{
	int n;
	int x = 1;
	printf("Enter number :");
	scanf_s("%d", &n);
	while (x<=n) {
		int i = x;
		for (; i >= 1;) {
			printf("*");
			i--;
		}
		x += 1;
		printf("\n");
	}
	return 0;
}
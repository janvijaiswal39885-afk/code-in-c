#include <stdio.h>
int main() {
	int n, i;
	
	//ask the user for the upper limit
	printf("Enter a number to count up to: ");
	scanf("%d", &n);
	
	printf("Counting from 1 to %d:\n", n);
	
	//Loop from 1 to n
	for (i = 1; i <= n; i++){
		printf("%d\n", i);
	}
	return 0;
}

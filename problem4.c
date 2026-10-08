/* print Name with space 
If you want to allow full names including spaces and avoid a restrictive charachter limit the best approach in c is to use fget with a larger buffer size */
#include <stdio.h>
#include <string.h>
int main() {
	char name [100];
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = 0;
	printf("Welcome %s\n", name);
	
	return 0;
	
	
}

//print Name, Age, Marks
#include <stdio.h>
int main(){
	char name[50];
	int age;
	float marks;
	
	printf("Enter your name: ");
	scanf("%s", name);
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your marks: ");
	scanf("%f", &marks);
	
	printf("\n---Student Details---\n");
	printf("Name: %s\n",name);
	printf("Age: %d\n", age);
	printf("Marks: %f\n", marks);
	
	return 0;
}

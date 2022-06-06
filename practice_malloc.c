#include <stdio.h>
#include <stdlib.h>

struct student {
char firstname[50];
int roll_no;
int marks;
};

int main() {
	struct student *ptr;
	int i,n;
	printf("enter no. of data you want to enter\n");
	scanf("%d",&n);
	ptr = (struct student *)malloc(n * sizeof(struct student));
	printf("Enter information of students:\n");

	for (i = 0; i < n; ++i) 
	{
		(ptr + i)->roll_no=i+1;
		//s[i].roll_no = i + 1;
		printf("\nFor roll number %d\n", (ptr + i)->roll_no);
		printf("Enter first name: ");
		scanf("%s", (ptr + i)->firstname);
		printf("Enter marks: ");
		scanf("%d", &(ptr + i)->marks);
	}

	// for accending order
	printf("\nIn accending order\n");
	for (i = 0; i < n; ++i) 
	{
		printf("\nRoll number: %d\n", i + 1);
		printf("First name: ");
		puts((ptr + i)->firstname);
		printf("Marks: %d", (ptr + i)->marks);
		printf("\n");
	}

	printf("\n---------------------------------\n");
	// for decending order
	printf("In decending order\n");
	for (i = n-1; i >=0; i--) 
	{
		printf("\nRoll number: %d\n", i +1);
		printf("First name: ");
		puts((ptr + i)->firstname);
		printf("Marks: %d", (ptr + i)->marks);
		printf("\n");
	}
	return 0;
}

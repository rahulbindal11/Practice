#include <stdio.h>

int x;
void autoSC()
{
    int a=10;
    printf("auto storage class %d \n", a);
}

void staticSC()
{
    int i = 0;
    for (i=1;i<5;i++)
    {
	static int y=5;
	int p=10;
	y++;
	p++;

	printf("\nThe value of 'y', " "declared as static, in %d "	"iteration is %d\n",i, y);

	printf("The value of non-static variable 'p', "	"in %d iteration is %d\n",i, p);
    }
}

void externSC()
{
    extern int x;
    printf("old extern storage class %d \n", x);
    
    x=2;
    printf("new extern storage class %d \n", x);
}

void registerSC()
{
    register char b = 'R';
    printf("register storage class %d \n", b);
}

int main()
{
    autoSC();
	staticSC();
	externSC();
	registerSC();
    return 0;
}


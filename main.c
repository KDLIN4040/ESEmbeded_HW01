#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//arrary of function pointer 
	int(*fncpt[])(int,int) = {plus,minus,multiply,divided};
	char symble[4] = {'+','-','*','/'};
        for(int i=0;i<4;i++){
    	if(symble[i] == b)
    		printf("%d %c %d = %d\n", a, b, c, fncpt[i](a, c));
    }

}

#include <stdio.h>

long credit = 0;



int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);

while (credit > 0) {
int value;

int digit = credit % 10;

value /= 10;

printf("the digit is %d\n", digit);
printf("credit is %lli\n", credit);






}

	}


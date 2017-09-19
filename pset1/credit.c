#include <stdio.h>

long credit = 0;



int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);

while (credit > 0) {

int digit = credit % 10;

credit /= 10;

printf("the digit is %d\n", digit);
printf("credit is %lli\n", credit);






}

	}


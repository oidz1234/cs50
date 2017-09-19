#include <stdio.h>

long credit = 0;
int digit;


int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);

	while (credit > 0) {



if (digit % 2 == 0) {

	int added_value = (digit * 2);
	printf("the value of the added digits is %d\n", added_value);
	

	printf("credit is %lli\n", credit);


		int digit = credit % 10;

		credit /= 10;
	printf("the digit is %d\n", digit);

}

}
}


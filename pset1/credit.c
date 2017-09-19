#include <stdio.h>

long credit = 0;



int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);




	int c =0; /*the digit position */

	long n = credit;

while (n != 0); {


		printf("credit is %lli\n", n);
	n /= 10;
	c++;



}

	}


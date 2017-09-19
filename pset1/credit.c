#include <stdio.h>

long credit = 0;



int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);



	int c;			/* digit position */
	long n = credit;

	while (n != 0) {
		n /= 10;
		c++;
	
		printf("credit is %lli\n", n);

long number_array[c];

c = 0;
n = credit;

printf("array test print %lli\n", number_array[c]);


	}
}

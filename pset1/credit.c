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

for (int count = 0; ; count++) {

if (count % 2 == 0) {

digit * 2;

printf("the digit is %d\n", digit);
printf("credit is %lli\n", credit);




}

}

	}

}



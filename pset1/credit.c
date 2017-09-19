#include <stdio.h>

long credit = 0;
int digit;
int count = 0;


int main(void)
{


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);


/*
 *this while loop calcualates the last digit of the credit number
 * it does this recusivly
*/

	while (credit > 0) { 
	count++;
printf("DEBUG: %d\n", count);

		int digit = credit % 10;

		credit /= 10;
	printf("the digit is %d\n", digit);
       	printf("credit is %lli\n", credit);

					
		if (count ==  2) {  //reset the count to 0
		count = 0;
	printf("count loop %d\n", count);
}


}

/*

if (digit % 2 == 0) {

	int added_value = digit * 2;
	printf("the value of the added digits is %d\n", added_value);
	

	printf("credit is %lli\n", credit);

}

*/


			}

		

	



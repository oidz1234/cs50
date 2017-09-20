#include <stdio.h>

long credit = 0;
int digit;
int count = 0;
int sum_mutiplyed = 0;


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

		int digit = credit % 10;

		credit /= 10;
	printf("the digit is %d\n", digit);
       	printf("credit is %lli\n", credit);

					
		if (count ==  2) {  //reset the count to 0

		
		int added_value = (digit * 2);
printf("if this is greater then 9 the while loop shoild happen %d\n", added_value);			
	while(added_value > 9) {
		int added_digit = added_value % 10;
		added_value /=10;
printf("does this say 1 ? %d\n", added_value);

printf("THIS SHOULD DISPLAY THE ADDED_DIGIT SPLIT: %d\n", added_digit);
}

//need to split up the number.
 /*	
	
		int sum_mutiplyed = added_value + added_value +
	

			if (sum_mutiplyed != added_value) {

					
*/
				
printf("the sum mutiplyed is %d\n", sum_mutiplyed);


		count = 0;


	printf("count loop %d\n", count);
	printf("thew sum of the digit * 2 = %d\n", added_value);	
}

}
}


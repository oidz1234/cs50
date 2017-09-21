#include <stdio.h>

long credit = 0;
int digit;
int count = 0;
int sum_mutiplyed;
int added_digit;


int main(void) {


	printf("please enter your card number\n");


	scanf("%lli", &credit);


	printf("you have entered %lli\n", credit);


/*
 *this while loop calcualates the last digit of the credit number
 * it does this recusivly
*/

	while (credit > 0) {   //when there is still stuff to be caluclated
	count++;

		int digit = credit % 10;  //splits the number into digits

		credit /= 10;
	printf("the digit is %d\n", digit);
       	printf("credit is %lli\n", credit);

					
		if (count ==  2) {  //need to preform operations on every other digit

		
		int added_value = (digit * 2); //needed in the calcualtion




/*
 * this splits the digits further
 * if the value of the digit * 2 
 * is over 9. Needed to preform the
 * calculation
 */
	

while(added_value > 9) {   
		 added_digit = added_value % 10;
		added_value /=10;

printf("INSIDE WHILE ADDED DIGIT%d\n", added_digit);

	

}

	
		int sum_mutiplyed = added_value + added_digit + sum_mutiplyed;
	printf("addedvalue = %d\n", added_value);
	printf("addeddigit = %d\n", added_digit);

	printf("sum_mutiplyed %d\n", sum_mutiplyed);
					
count = 0;
} 

else if (count == 1) { 
printf("THECOUNTIS1yay");

}


}
}


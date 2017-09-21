#include <stdio.h>

long credit = 0;
int digit;
int count = 0;
int sum_mutiplied;
int added_digit;
int not_mutiplied;
int all_not_mutiplied_added;
int sum_mutiplied;
int main(void) {


	printf("please enter your card number\n");


	scanf("%lli", &credit);
	
	long initial_credit = credit;
	printf("FIRST INITIAL CREDIt %lli\n", initial_credit);
	
	printf("you have entered %lli\n", credit);


/*
 *this while loop calcualates the last digit of the credit number
 * it does this recusivly
*/

	while (credit > 0) {   //when there is still stuff to be caluclated
	count++;

		 digit = credit % 10;  //splits the number into digits

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


	

}
/*
 * calcualted the value of
 * everything added, I could
 * not figure out a way to 
 * do this without it adding itself again
 */

	
		 sum_mutiplied = added_value + added_digit + sum_mutiplied;
	printf("addedvalue = %d\n", added_value);
	printf("addeddigit = %d\n", added_digit);

	printf("sum_mmutiplied %d\n", sum_mutiplied);
					
count = 0;
} 

else if (count == 1 ) {  //add the digits that where not mutipled

 not_mutiplied = digit;
 all_not_mutiplied_added = all_not_mutiplied_added + not_mutiplied;


printf("all not mutiplied is %d\n", all_not_mutiplied_added);
}

 


}
int final_number = all_not_mutiplied_added + sum_mutiplied;
printf("final number is %d\n", final_number);

int ends_in_zero = final_number % 10;
printf("ends in zero %d\n", ends_in_zero); 

if (ends_in_zero != 0);
printf("INVALID\n");


 if (initial_credit / 100000000000 == 34 || 37); 
printf("initial_credit AMEX INITIAL CREDIT%lli\n", initial_credit);
printf("AMEX\n");

 if (initial_credit / 100000000000 == 51 || 52 || 53 || 54 || 55); 
printf("MASTERCARD\n");
printf("initial_credit  MASTERCARD INITIAL CREDIT)%lli\n", initial_credit);

}



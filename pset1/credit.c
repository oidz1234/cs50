/*
 * this program prints out
 * what type of number is 
 * on a credit card, it does
 * not completly work though
 */

#include <stdio.h>
//global variables ftw

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


	scanf("%li", &credit);
	
	long initial_credit = credit;


/*
 *this while loop calcualates the last digit of the credit number
 * it does this recusivly
*/

	while (credit > 0) {   //when there is still stuff to be caluclated
	count++;

		 digit = credit % 10;  //splits the number into digits

		credit /= 10;

					
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
					
	       	count = 0;
} 

else if (count == 1 ) {  //add the digits that where not mutipled

 not_mutiplied = digit;
 all_not_mutiplied_added = all_not_mutiplied_added + not_mutiplied;


}

 


}
int final_number = all_not_mutiplied_added + sum_mutiplied;

int ends_in_zero = final_number % 10; //for validation

/* 
 * the reason for the following is
 * that the cards are decided based
 * on their first few digits
 */


int amex_credit = initial_credit /  10000000000000; 
int mc_credit = initial_credit / 100000000000000;
int visa_credit13 = initial_credit / 1000000000000;
int visa_credit16 = initial_credit / 1000000000000000;

//decided what card it is

if (ends_in_zero != 0) {
	printf("INVALID\n");
}

  if (amex_credit == 34 || amex_credit == 37 ) {
	printf("AMEX\n");

}

 if (mc_credit == 51 || mc_credit == 52 || mc_credit == 53 || mc_credit == 54 || mc_credit == 55) {
	printf("MASTERCARD\n");

}

 if (visa_credit13 == 4) {
	printf("VISA\n");

}

 if (visa_credit16 == 4) {
	printf("VISA\n");

} 

return 0;

}






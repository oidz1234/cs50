#include <stdio.h>

long credit = 0;
int digit;
int count = 0;
int sum_mutiplyed;
int added_digit;
int not_mutiplied;
int all_not_mutiplied_added;

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

	
		int sum_mutiplyed = added_value + added_digit + sum_mutiplyed;
	printf("addedvalue = %d\n", added_value);
	printf("addeddigit = %d\n", added_digit);

	printf("sum_mutiplyed %d\n", sum_mutiplyed);
					
count = 0;
} 

else if (count == 1 ) { 

printf("BEFORE LOOP not_mutiplied %d\n", not_mutiplied);
printf("BEFORE LOOP digit %d\n", digit);
printf("BEFORE LOOP all_not_mutipled_added %d\n", all_not_mutiplied_added);
 not_mutiplied = digit;
 all_not_mutiplied_added = all_not_mutiplied_added + not_mutiplied;
printf("the digit is %d\n", digit);
printf("not_mutiplied is %d\n", not_mutiplied);
printf("all not mutiplied is %d\n", all_not_mutiplied_added);
}


}
}


/* This program converts the interger number into float, oct
 * and hexa decimal
 * */

# include<stdio.h>
 int main(){
	 int number;
	 printf("Enter the integet number you want to convert ?\n");
	 scanf("%d", &number);
	 // use #%o #%x to generate the 0 and 0x prefixes
	 printf("Dec=%d, Hex=%#x, Oct=%#o\n", number,number, number);
	 return 0;
 }
	 

#include <stdio.h>
	int domestic_customers(int units);
	int commercial_customers(int units);
	int main(){
		domestic_customers(420);
		commercial_customers(380);
		
	int domestic_customers(int units){
		int charges;
		int amount;
		int final_bill;
		int surcharge;
		if(units<=100){
			charges = 15;
		}else{
			charges = 20;
		}
		amount = charges * units;
		
		if(amount>5000){
			surcharge = (amount)*5/100;
			final_bill = amount-surcharge;
		}else{
			final_bill = amount;
		}
	
	printf("Domestic customer details:");
    printf("Units consumed: %d\n", units);
    printf("bill amount: %d\n", amount);
    printf("Surcharge: %d\n", surcharge);
    printf("Final bill: %d\n", final_bill);
		
		return final_bill;
	}
	int commercial_customers(int units){
		int charges = 25;
		int amount;
		int final_bill;
		int surcharge;
		
		amount = charges * units;
		
		if(amount>5000){
			surcharge = (amount)*5/100;
			final_bill = amount-surcharge;
		}else{
			final_bill = amount;
		}
	
	printf("Commercial customer details :");	
	printf("Units consumed: %d\n", units);
    printf("bill amount: %d\n", amount);
    printf("Surcharge: %d\n", surcharge);
    printf("Final bill: %d\n", final_bill);
		
		return final_bill;
	}
}

#include <stdio.h>
int delivery_charges(){
	int base_charges;
	int weight;
	int distance;
	int cost1, cost2;
	int discount_price;
	int tot_charges, final_bill;
	printf("Enter base charges of the parcel : ");
	scanf("%d", &base_charges);
	printf("Enter weight of the parcel : ");
	scanf("%d", &weight);
	printf("Enter distance from warehouse : ");
	scanf("%d", &distance);
	if(weight <= 2){
		cost1 = 200;
	}else if(weight > 2 && weight < 5){
		cost1 = 400;
	}else{
		cost1 = 700;
	}
	
	if(distance >= 10){
		cost2 = distance*20;
	}
	
	tot_charges = base_charges + cost1 + cost2;
	if(tot_charges >=1000){
		discount_price = tot_charges * 10/100;
	}
	final_bill = tot_charges - discount_price;
	
	printf("the base charges is : %d\n", base_charges);
	printf("the distance charges is : %d\n", cost2);
	printf("wieght charges are : %d\n", cost1);
	printf("total discount is : %d\n", discount_price);
	printf("Final bill is %d\n", final_bill);
	return final_bill;
}
int main(){
	delivery_charges();
}
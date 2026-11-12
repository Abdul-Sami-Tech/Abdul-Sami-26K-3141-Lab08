#include <stdio.h>
int salary(){
	int basic_salary;
	int years;
	int bonus;
	int bonus_amt;
	int bonus_salary;
	int tax_amt;
	int final_salary;
	printf("Enter you basic salary : ");
	scanf("%d", &basic_salary);
	printf("Enter years of experience : ");
	scanf("%d", &years);
	if(years > 5){
		bonus = 15;
	}else if(years<5 && years>=3){
		bonus = 10;
	}else{
		bonus = 5;
	}
	bonus_amt = basic_salary * bonus/100;
	bonus_salary = basic_salary + bonus_amt;
	if(bonus_salary > 100000){
		tax_amt = bonus_salary * 5/100;
	}else{
		tax_amt = 0;
	}
	final_salary = bonus_salary - tax_amt;
	printf("###### Salary-Details #######\n");
	printf("basic salary is : %d\n", basic_salary);
	printf("Bonus is : %d\n", bonus);
	printf("The tax applied is : %d\n", tax_amt);
	printf("Final Salary is : %d\n", final_salary);
	return final_salary;	
}
int main(){
	salary();
}
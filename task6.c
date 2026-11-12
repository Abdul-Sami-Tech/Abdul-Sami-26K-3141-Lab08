#include <stdio.h>
int loan(){
	int age;
	int salary;
	int expenses;
	int rem_salary;
	float rem_salary_percentage;
	int loan_amt = 0;
	printf("Enter you age : ");
	scanf("%d", &age);
	printf("Enter you Salary : ");
	scanf("%d", &salary);
	printf("Enter you expenses : ");
	scanf("%d", &expenses);
	rem_salary = salary - expenses;
	rem_salary_percentage = (float)rem_salary / salary * 100;
	if(age>21){
		if(salary > 50000){
			if(rem_salary_percentage > 40){
				loan_amt = 10*rem_salary;
				printf("you are eligible for loan and loan amount you can get is : %d", loan_amt);
			}else{
				printf("loan can not be approved because you remaining salary is below 40%");
			}
	}else{
		printf("loan can not be approved because you salary is below 50000");
	}
	}else{
		printf("loan can not be approved because your age is below 21!");
	}
	
	return loan_amt;
}
int main(){
	loan();
}
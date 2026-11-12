#include <stdio.h>
int main(){
    int choice;
    int balance=20000;
    int amount;
    do{
        printf("\nATM MENU \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Your current balance is: Rs.%d\n",balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d",&amount);

                if(amount>0){
                    balance=balance+amount;
                    printf("Amount deposited successfully!\n");
                    printf("Updated balance: Rs.%d\n",balance);
                }else{
                    printf("Invalid amount! Deposit must be positive.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d",&amount);

                if(amount>0){
                    if(amount<=10000){
                        if(amount<=balance){
                            balance=balance-amount;
                            printf("Withdrawal successful!\n");
                            printf("Updated balance: Rs.%d\n",balance);

                            if(balance<5000){
                                printf("Warning! Your balance is low.\n");
                            }
                        }else{
                            printf("Insufficient balance!\n");
                        }
                    }else{
                        printf("You cannot withdraw more than Rs.10000 per transaction.\n");
                    }
                }else{
                    printf("Invalid amount! Withdrawal must be positive.\n");
                }
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    }while(choice!=4);

    return 0;
}

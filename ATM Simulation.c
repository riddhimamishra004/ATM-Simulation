#include <stdio.h>

int main() {
    int x, pin = 1234, amount = 2500;

    printf("Please Insert Your ATM Card\n");
    printf("1 For Hindi\n2 For English\n");
    scanf("%d", &x);

    switch (x) {
        case 1: {
            int p;
            printf("\nEnter Your Four Digit Pin : ");
            scanf("%d", &p);

            if (p == pin) {
                printf("\n1 For Withdraw Amount\n2 For Deposite\n3 For CheckBalance\n");
                int y;
                scanf("%d", &y);

                switch (y) {
                    case 1: {
                        printf("\n1 For Saving Account\n2 For Current Account\n");
                        int z;
                        scanf("%d", &z);

                        switch (z) {
                            case 1:
                            case 2: {
                                int am;
                                printf("\nPlease Enter Your Amount : ");
                                scanf("%d", &am);

                                if ((amount >= am) && (am <= 10000)) {
                                    amount -= am;
                                    printf("\nYour Transaction Successful\n");
                                } else if (am > amount) {
                                    printf("\nInsufficient Balance\n");
                                } else {
                                    printf("\nPlease Enter Amount Less Equal To 10000\n");
                                }
                                break;
                            }
                            default:
                                printf("\nInvalid Account Type\n");
                        }
                        break;
                    }

                    case 2: {
                        int am;
                        printf("\nPlease Enter Your Amount To Deposit : ");
                        scanf("%d", &am);
                        amount += am;
                        printf("\nDeposit Successful. Your New Balance is : %d\n", amount);
                        break;
                    }

                    case 3: {
                        printf("\n1 For Saving Account\n2 For Current Account\n");
                        int z;
                        scanf("%d", &z);

                        switch (z) {
                            case 1:
                            case 2:
                                printf("\nYour Total Amount is : %d\n", amount);
                                break;
                            default:
                                printf("\nInvalid Account Type\n");
                        }
                        break;
                    }

                    default:
                        printf("\nInvalid Choice\n");
                }
            } else {
                printf("\nPlease Enter a Valid Pin\n");
            }
            break;
        }

        case 2:
            printf("\nEnglish Option Selected (Not Implemented Yet)\n");
            break;

        default:
            printf("\nInvalid Language Selection\n");
    }

    return 0;
}

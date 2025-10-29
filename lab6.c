#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double billAmount;
    double tipPercentage;
    int peopleSplittingBill;
    
    double tipAmount;
    double totalBillWithTip;
    double splitBillAmount;

    printf("Enter the original bill amount: ");
    scanf("%lf", &billAmount);
    
    printf("Enter the tip percentage (e.g., 15 for 15%%): ");
    scanf("%lf", &tipPercentage);
    
    printf("Enter the number of people splitting the bill: ");
    scanf("%d", &peopleSplittingBill);

    
    tipAmount = billAmount * (tipPercentage / 100.0);

    totalBillWithTip = billAmount + tipAmount;

    printf("\nThe total bill including tip is %.2f\n", totalBillWithTip);

    if (peopleSplittingBill > 0) {
        splitBillAmount = totalBillWithTip / peopleSplittingBill;
        printf("Each person should pay %.2f\n", splitBillAmount);
    } else {
        printf("Error: Cannot split the bill among zero or negative people.\n");
    }

    return 0;
}
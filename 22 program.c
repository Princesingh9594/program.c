#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

   
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

   
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit = %.2f\n", profitOrLoss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss = %.2f\n", profitOrLoss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

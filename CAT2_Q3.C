/*A program to calculate net pay
Authour:Mark kibui wanjau
ADM:CT101/G/22763/24
Date of coding:7/11/2024*/
#include <stdio.h>
int main() {
    float hours, wage_per_hour, grosspay, netpay, taxes;
    printf("Enter hours worked in a week time: ");
    scanf("%f", &hours);
    printf("Enter your wage rate per hour: ");
    scanf("%f", wage_per_hour);
    if (hours>40)
    {
        grosspay = (40*wage_per_hour) + ((hours-40)*wage_per_hour*1.5);   
    }else
    {
        grosspay = hours*wage_per_hour;
    }
    if (grosspay<=600)
    {
        taxes = grosspay * 0.15;
    }else
    {
        taxes = 600 * 0.15 + (grosspay - 600) * 0.20;
    }
    netpay = grosspay - taxes;
    printf("Your gross pay is: %.2f\n", grosspay);
    printf("You paid taxes worth: %.2f\n", taxes);
    printf("You net pay is: %.2f\n", netpay);
    return 0;
}
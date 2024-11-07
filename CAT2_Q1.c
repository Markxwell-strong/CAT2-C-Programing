/*A program to show how structures are essential
Authour: Mark kibui wanjau
ADM:CT101/G/22763/24
DATE OF CODING:11/6/2024*/
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};
int main() {
    struct employee emp = {"John Doe", 12345, "Human resources", 55000.50, "john.doe@company.com"};
    printf("Your name is: %s \n", emp.name);
    printf("Your ID is: %d \n",emp.id);
    printf("Your department is: %s \n",emp.department);
    printf("your salary is: %.2f\n", emp.salary);
    printf("Email:%s \n", emp.email);
    return 0;
}
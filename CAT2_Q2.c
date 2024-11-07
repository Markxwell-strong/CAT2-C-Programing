/*A program to show scores in 2 rows and 2 colums
Authour:Mark kibui wanjau
ADM:CT101/G/22763/24
Date of coding: 6/11/2024*/
#include <stdio.h>
int main() {
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };
    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };
    printf("SCORES\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", scores1[i][j]);
        }
        printf("\n");
    }
    printf("\n \n \n");//This is to separate the scores
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", scores2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
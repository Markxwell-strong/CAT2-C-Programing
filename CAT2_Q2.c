/*A program to show scores in 2 rows and 2 colums
Authour:Mark kibui wanjau
ADM:CT101/G/22763/24
Date of coding: 6/11/2024*/
#include <stdio.h>
int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };
    printf("Scores:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", scores[i][j]);
        }
        print("\n");
    }
    return 0;
}
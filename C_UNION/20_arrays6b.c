#include <stdio.h>

int main(){
    int tables[3][10];
    for (int i = 0; i < 10; i++)
    {
        tables[0][i] = 2*(i+1);
        tables[1][i] = 7*(i+1);
        tables[2][i] = 9*(i+1);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The table of %d is asq follows: ",i+1);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ",tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}
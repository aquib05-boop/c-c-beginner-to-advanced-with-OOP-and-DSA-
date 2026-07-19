#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}vector;

void sumVector(vector v1, vector v2){
    int x = v1.i + v2.i;
    int y = v1.j+ v2.j;
    printf("The vector is : %di + %dj ",x,y); 
}

int main(){
    vector v1,v2;
    printf("Enter the values of vector v1, in x and y coordinates:\n");
    scanf("%d %d",&v1.i,&v1.j);
    // printf("%d %d \n", v1);
    
    printf("Enter the values of vector v2, in x and y coordinates:\n");
    scanf("%d %d",&v2.i,&v2.j);
    sumVector(v1,v2);
    return 0;
}
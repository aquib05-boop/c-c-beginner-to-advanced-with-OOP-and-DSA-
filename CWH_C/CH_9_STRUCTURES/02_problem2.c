#include <stdio.h>

struct vector{
    int i;
    int j;
    int k;
};

struct vector sumVector(struct vector v1, struct vector v2, struct vector v3){
    struct vector v4 = {v1.i + v2.i+ v3.i , v1.j +v2.j+ v3.j, v1.k + v2.k + v3.k};
    return v4;
}


int main(){
    struct vector v1 = {1,2,8};
    struct vector v2 = {5,6,9};
    struct vector v3 = {9,7,8};
    struct vector v4 = sumVector(v1, v2, v3);
    printf("The value of vector is %di + %dj + %dk", v4.i, v4.j, v4.k);
    return 0;
}
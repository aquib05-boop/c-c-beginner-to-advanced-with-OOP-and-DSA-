#include <stdio.h>

int main(){
    int n = 12;
    for(int i = n; i ; i--){
        printf("%d\n", i);
    }

// why 'i' can't be 0
    return 0;
}
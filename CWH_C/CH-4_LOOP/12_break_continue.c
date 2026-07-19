#include <stdio.h>

int main(){
    for (int i = 1 ; i < 15; i++){
        printf("%d\n",i);

        if(i = 10){
            break; //exit the loop now!
        }       
    }
// continue; // skip this iteration now!    
    return 0;
}
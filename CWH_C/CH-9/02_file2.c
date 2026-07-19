#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry2.txt", "r");

    if(ptr== NULL){
        printf("tHE FILE DOES NOT EXIST, SORRY!\n");
    }
    else{
        int num;
        fscanf(ptr, "%d", &num);
        printf("The vlaue of num is %d \n", num);
        
        fscanf(ptr, "%d", &num);
        printf("The vlaue of num is %d \n", num);
        
        fclose(ptr);
    }
        
    return 0;
}
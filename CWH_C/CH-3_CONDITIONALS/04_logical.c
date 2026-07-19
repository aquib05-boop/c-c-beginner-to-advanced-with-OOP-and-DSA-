#include <stdio.h>

int main(){
    int a = 1; int b = 1;
    //both 1 then one,otherwise 0 in "and"
    printf("The value of a and b is %d\n", a&&b);
    
    //if either is one,then 1 is output
    printf("The value of a or b is %d\n",a||b);
    
    //jo true ko false aur false ko true bana de wo not(a) hai
    printf("The value of not(a) is %d\n", !a);

    if(a && b){
        printf("both are truee\n");
    }
    // is same as writing ......
    if(a){
        if(b){
            printf("both are true");
            // if under if is nested if(as i heard)
        }
    }
    return 0;
}
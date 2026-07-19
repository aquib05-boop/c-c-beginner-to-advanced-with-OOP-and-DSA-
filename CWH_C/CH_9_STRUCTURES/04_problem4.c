#include <stdio.h>

typedef struct employee{
    int salary;
    float score;
}Employee;

int main(){
    Employee e1;

    // e1.score = 45;
    // e1.salary = 12;

    // printf("The value of salary is %d and the value of score is %.2f \n", e1.salary, e1.score);


    Employee* ptr = &e1;
    (*ptr).salary = 56;
    (*ptr).score = 45.3;

    ptr->salary = 56;
    ptr->score = 45.3;

    printf("The value of salary is %d and the value of score is %.2f \n", ptr->salary, ptr->score);

    return 0;
}
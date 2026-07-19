#include <stdio.h>
#include <string.h>

typedef struct empployee{
    int age;
    char name[40];
    int salary;
}Emp;

int main(){
    Emp e1;
    // int x[40] = "Rahul";
    Emp* ptr1 = &e1;
    ptr1->age = 19;
    strcpy(ptr1->name, "Rahul");
    ptr1->salary = 19000;

    printf("%d %s %d", e1.age, e1.name, e1.salary);

    return 0;
}
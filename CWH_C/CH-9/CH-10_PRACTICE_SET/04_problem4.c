#include <stdio.h>

int main(){
    FILE *ptr;
    fopen("ptr.txt", "r");
    char name1[34],name2[34];
    int salary1, salary2;

    printf("Enter the name is employee 1:\n",name1);
    scanf("%s",name1);

    printf("Enter the salary of %d:\n", name1);
    scanf("%d",&salary1);

    printf("Enter the name is employee 2:\n",name2);
    scanf("%s",name2);

    printf("Enter the salary of %d:\n", name2);
    scanf("%d",&salary2);

    fopen("ptr.txt", "w");
    fprintf(ptr,"%s", name1);
    fprintf(ptr,"%s", ", ");
    fprintf(ptr,"%d", salary1);
    fprintf(ptr,"%c", '\n');
    fprintf(ptr,"%s", name2);
    fprintf(ptr,"%s", ", ");
    fprintf(ptr, "%d", salary2);
    
    return 0;
}
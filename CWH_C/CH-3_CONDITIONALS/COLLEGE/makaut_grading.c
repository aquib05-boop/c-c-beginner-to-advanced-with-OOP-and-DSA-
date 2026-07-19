#include <stdio.h>

int main() {
    int score;
    printf("Enter the score (0-100): \n");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
            printf("GRADE: O\n");
        case 9: 
            printf("Grade: O\n");
            break;
        case 8:
            printf("Grade: E\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: B\n");
            break;
        case 5:
            printf("Grade: C\n");
            break;
        case 4:
            printf("Grade: D\n");
            break;       
        default:
           if(score <100 && score>=0){
            printf("Grade: F");
           }
        else{
            printf("Invalid input! Please enter a number between 0 and 100");
        }
    }
    return 0;
}
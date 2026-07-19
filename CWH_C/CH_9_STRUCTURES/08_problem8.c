#include <stdio.h>

typedef struct bankacc {
    long long int accNo;
    char name[34];
    char ifsc[12];
    float balance;
} bank;

int main() {
    bank sbi;

    scanf("%lld", &sbi.accNo);
    scanf("%s", sbi.name);
    scanf("%s", sbi.ifsc);
    scanf("%f", &sbi.balance);  // fixed

    printf("ACCOUNT NO:- %lld\n", sbi.accNo);        // fixed
    printf("ACCOUNT HOLDER:- %s\n", sbi.name);
    printf("IFSC:- %s\n", sbi.ifsc);
    printf("BALANCE:- %.3f\n", sbi.balance);         // show 3 decimal places here instead

    return 0;
}


// #include <stdio.h>

// typedef struct bankacc{
//     long long int accNo;
//     char name[34];
//     char ifsc[12];
//     float balance;
// }bank;

// int main(){
//     bank sbi;
//     scanf("%lld", &sbi.accNo);
//     scanf("%s", sbi.name);
//     scanf("%s", sbi.ifsc);
//     scanf("%.3f", &sbi.balance);

//     printf("ACCOUNT NO:- %d \nACCOUNT HOLDER:- %s \nIFSC:- %s \nBALANCE:- %f\n", sbi.accNo, sbi.name, sbi.ifsc, sbi.balance);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a,b) ((a>b)? (a):(b))

struct Node{
    int coeff;
    int exp;
};

void addPolynomial(struct Node* n1, int terms1, struct Node* n2, int terms2 ){
    struct Node* result = (struct Node*)malloc((terms1+terms2)*sizeof(struct Node));
    int i = 0, j = 0, k = 0;
    while(i<terms1 || j<terms2){
        if(n1[i].exp == n2[j].exp){
            result[k].coeff = n1[i].coeff + n2[j].coeff;
            result[k].exp = n1[i].exp;
            k++, i++, j++;
        }
        else{
            if(n1[i].exp > n2[j].exp){
                result[k].coeff = n1[i].coeff;
                result[k].exp = n1[i].exp;
                k++, i++;
            }
            else{
                result[k].coeff = n2[j].coeff;
                result[k].exp = n2[j].exp;
                k++, j++;
            }
        }
    }
    while(i<terms1){
        result[k].coeff = n1[i].coeff;
        result[k].exp = n1[i].exp;
        i++ , k++;
    }
    while(j<terms2){
        result[k].coeff = n2[j].coeff;
        result[k].exp = n2[j].exp;
        j++ , k++;
    }

    printf("Resulting Polynomial: ");
    for (int l = 0; l < k; l++)
    {
        printf("(%d)x^%d ", result[l].coeff, result[l].exp);
        if(l<k-1) printf("+");
    }
}

int main(){
    int term1;
    printf("Enter the number of terms for 1st Polynomial: ");
    scanf("%d",&term1);
    int term2;
    printf("Enter the number of terms for 2nd Polynomial: ");
    scanf("%d",&term2);
    struct Node* poly1 = (struct Node*)malloc(term1*(sizeof(struct Node)));
    struct Node* poly2 = (struct Node*)malloc(term2*(sizeof(struct Node)));
    for (int i = 0; i < term1; i++)
    {
        printf("Enter the coefficient and power of each expression for term1(space by space separated): ");
        scanf("%d %d",&poly1[i].coeff,&poly1[i].exp);
        printf("%dx^%d\n",poly1[i].coeff, poly1[i].exp);
    }
    printf("\n");
    for (int i = 0; i < term2; i++)
    {
        printf("Enter the coefficient and power of each expression for term2(space by space separated): ");
        scanf("%d %d",&poly2[i].coeff,&poly2[i].exp);
        printf("%dx^%d\n",poly2[i].coeff, poly2[i].exp);
    }

    addPolynomial(poly1, term1, poly2, term2);
    return 0;
}
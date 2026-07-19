#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j =0; j < n; j++){
            cout << "* ";
        }
        printf("\n");
    }
}
void print2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");            /* code */
        }
        printf("\n");
    }    
}
void print3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }   
}
void print4(int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }   
}
void print6(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
                cout<<" ";
        }
        for (int j = 1; j <= (2*i)-1; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= n-i; j++)
        {
                cout<<" ";
        }
        cout<< endl;
    }
}
void print7(int n){
    for (int i = n; i >=0; i--)
    {
        for (int j = 0; j < n-i ; j++)
        {
            cout<<" ";
        }
        for (int k = 2*i-1; k >0; k--)
        {
            cout<<"*";
        }
        for (int j = 0; j < n-i ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void print8(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i<=n){
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        }
        else{
            for (int j = 0; j < 2*n -i ; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}
void print9(int n){
    for (int i = 0; i < n; i++)
    {
        int start =1;
        if(i%2==0) start =1;
        else start =0;
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
}
void print10(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int k = 1; k <= 2*(n - i); k++)
        {
            cout<<" ";
        }
        for (int l = i; l > 0; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}
void print11(int n){
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
}
void print12(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' ; ch <= 'A'+i ; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print13(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A'+(n-i); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print14(int n){
    // char chh= 'A';
    for (int i = 0; i < n; i++)
    {
        // for (char ch = 'A' ; ch <= 'A'+i ; ch++)
        for (int j = 0 ; j <= i ; j++)
        {
            char chh = 'A' + i;
            cout<<chh<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        ch = 'A';
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        char ch='A';
        int breakpoint = (2*i+1)/2;
        for (int j= 1; j <= 2*i+1; j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        // for (int j=0; j < i+1 ; j++)
        // {
        //     cout<<ch;
        //     ch++;
        // }
        // ch--;
        // char chh=ch;
        // for (int j = 1; j <= i; j++)
        // {
        //     chh--;
        //     cout<<chh;
        // }

        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";  
        }
        cout<<endl;
    }
}
void print16(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A'+(n-i-1);
        cout<<ch;
        for (char chh = ch+1; chh <= 'A'+ (n-1); chh++)
        {
            // chh++;
            cout<<chh;
        }
        cout<<endl;
    }  
}
void print17(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j>0; j--)
        {
            cout<<"*";
        }
        for (int j=0; j<2*i; j++)
        {
            cout<<" ";
        }
        for (int j = n-i; j>0; j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        for (int j=0; j<2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print18(int n){
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        for (int j=0; j<2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n-i; j>0; j--)
        {
            cout<<"*";
        }
        for (int j=0; j<2*i; j++)
        {
            cout<<" ";
        }
        for (int j = n-i; j>0; j--)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
void print19(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0 || i==n-1) cout<<"*";
            else if (j==0||j==n-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
// GOOD_ONE_@20
void print20(int n){
    for (int i = 0; i < 2*n -1; i++)
    {
        // subtracts n form the given matrix, results in comparing distance strategy
        // thus taking the minimal of all the adjacent distances
        for(int j =0; j< 2*n-1; j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout << (n - min(min(top,down), min(left, right)))<<" ";   
        }
        cout<<endl;
    }
}
int main(){
    // print7(5);
    // print6(5);
    // print1(4);
    // print2(5);
    // print3(5);
    print20(4);
    return 0;
}
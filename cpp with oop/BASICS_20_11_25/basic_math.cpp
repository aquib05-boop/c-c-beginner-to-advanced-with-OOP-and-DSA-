#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        rev=(rev*10) + n%10;
        n=n/10;
    }
    return rev;
}

int count(int n){
    if(n==0) return 1;
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }   
    // int cnt = (int)(log10(n));
    return cnt;
}

int isPalindrome(int N){
    int n = N;
    int rev = 0;
    while(n>0){
        rev=(rev*10) + n%10;
        n=n/10;
    }
    if(rev==N) return 1;
    else return 0;
}

int isArmstrong(int N){int sum=0;
    int n = N;
    int count =0;
    if(N==0) count=1; 
    else{while(n>0){
        n=n/10;
        count++;
        }
    }
    n=N;
    while(n>0){
        int digit=0;
        digit=n%10;
        n=n/10;
        sum=sum + pow(digit,count);
    }
    if(sum==N) return 1;
    else return 0;
}

void divisors(int n){
    vector<int> ls;
    int i = 1;
    if(n==0) cout<<"Every non-zero number is a divisor. ";
    
    //O(sqrt(n))
    while(i*i<=n){
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back(n/i);
            }
        } 
        i++;
    }

    //O(n log n); n is the number of factors
    sort(ls.begin(), ls.end());
    //O(number of factors)
    for(auto it:ls) cout<<it<<" ";
    
    // total TC being summation of all three, quivalnt to sqrt(n)

    //O(n) TIME COMPLEXITY 
    // while(i<=n){
        //     if(n%i==0) cout<<i<<" ";
        //     i++;
    // }
}

int GCD(int n1, int n2){
// EUCLIDEAN FORMULA
// TIME COMPLEXITY BEING O(log(phi)(min(n1,n2)))
    while(n1>0 && n2>0){
        if(n1>n2) return GCD(n1-n2, n2);
        else return GCD(n2-n1, n1);
    }
    if(n1==0) return n2;
    else return n1;
}

int main(){
    cout<<"Enter the numbers: ";
    int n, m;
    cin>>n>>m;
    // if(isArmstrong(n)) cout<<"Yes! its an armstrong number";
    // else cout<<"No! it isnt an armstrong number";
    // divisors(n);
    cout<<"The GCD of two numbers is: "<<GCD(m,n);
    return 0;
}
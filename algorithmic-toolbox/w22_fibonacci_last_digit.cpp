#include <bits/stdc++.h> 

using namespace std;

int fibo2(int n) {
    if(n <= 1) {
        return n;
    }    
    else {       
        int temp, fib[]={0,1};
        for(int i=2;i<n+1;i++) {
            temp = fib[1];
            fib[1] = (fib[0] + fib[1])%10;
            fib[0] = temp%10;
        }
        return fib[1];
    }    
}

int main() {
    int x;
    cin>>x;
    cout<<fibo2(x)<<"\n";
    // cout<<fibo(5);
    return 0;
}
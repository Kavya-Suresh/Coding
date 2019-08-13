#include <bits/stdc++.h>

using namespace std;

int last_fibo(int n) {
    if(n <= 1) {
        return n;
    }    
    else {
        int temp, fib[]={0,1}, sum=1;
        for(int i=2;i<n;i++) {
    
            swap(fib[0],fib[1]);
            fib[1]=(fib[0] + fib[1])%10;
            sum=sum%10+((fib[1]%10)*(fib[1]%10));
            // cout<<"**"<<fib[1]<<"--"<<sum;
        }
        cout<<"\n";
        return sum%10;
    }    
}

int main() {
    long n;
    cin>>n;    
    cout<<"\nfibo:"<<last_fibo((n+1)%60)<<"\n";
    return 0;
}
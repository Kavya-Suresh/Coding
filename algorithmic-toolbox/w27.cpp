#include <bits/stdc++.h>

using namespace std;

int last_fiborange(int m, int n) {
    if(n <= 1) {
        return n;
    }    
    else {
        int temp, fib[]={0,1}, sum=0;
        for(int i=2;i<n;i++) {
            cout<<"\n"<<i<<": ";
            swap(fib[0],fib[1]);
            fib[1]=(fib[0] + fib[1])%10;
            if(i==m) {
                sum=fib[1];
            }    
            else if(i>=m) {
                sum=sum%10+fib[1]%10;
            }
            cout<<"**"<<fib[1]<<"--"<<sum;;    
        }
        cout<<"\n";
        return sum%10;
    }    
}

int main() {
    long m,n,x;
    cin>>m;
    cin>>n;
    x=last_fiborange((m),(n+1));
    cout<<"\nfibo:"<<x<<"\n";
    return 0;
}
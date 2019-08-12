#include <bits/stdc++.h> 

using namespace std;

int s[45];

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int recfibo(int n) {
    if(n <= 1) {
        s[n]=n;  // s[0]=0 , s[1]=1
        return n;
    }    
    else {       
        if(s[n]==-1) { //if s.[3]. has  no val, compute & put in s[n]
            s[n]=recfibo(n-1)+recfibo(n-2);        
        }
        return s[n];    
    }    
}

int fibo2(int n) {
    if(n <= 1) {
        return n;
    }    
    else {       
        int temp, fib[]={0,1};
        for(int i=2;i<n+1;i++) {
            temp = fib[1];
            fib[1] = fib[0] + fib[1];
            fib[0] = temp;  
        }
        return fib[1];
    }    
}

int main() {
    fill_n(s, 46, -1);
    int x;
    cin>>x;
    cout<<fibo2(x)<<"\n";
    // cout<<fibo(5);
    return 0;
}
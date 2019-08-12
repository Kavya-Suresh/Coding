#include <bits/stdc++.h> 

using namespace std;

int find_pisano(int m) {
    if(m <= 1) {
        return m;
    }    
    else {       
        int x;
        int temp, fib[]={0,1}, pisano[]={-1,-1};
        for(int i=2;i<n;i++) {
            temp = fib[1];
            fib[1] = (fib[0] + fib[1])%m;
            fib[0] = temp;
            cout<<"--"<<fib[1];

            //find pisano period...
            pisano[0]=pisano[1];    
            pisano[1]= fib[1];  
            if(pisano[0]==0 && pisano[1]==1) {
                x=i-1;
                break;
            }
        }
        if(x)
            return(x);
        else 
            return -1;
    }        
}

int fibo(long n,long m) {
    if(n <= 1) {
        return n;
    }    
    else {       
        long temp, fib[]={0,1};
        for(int i=2;i<n;i++) {
            temp = fib[1];
            fib[1] = (fib[0] + fib[1])%m;
            cout<<"--"<<fib[1];
            fib[0] = temp;
        }
        cout<<"\n";
        return fib[1];
    }    
}

int main() {
    long n,m,p;
    cin>>n;
    cin>>m;
    p = find_pisano(m);
    cout<<"\n"<<p;
    if(p != -1) {
        n = n%p;
    }
    cout<<"\nfibo:"<<fibo(n+1,m)<<"\n";
    return 0;
}

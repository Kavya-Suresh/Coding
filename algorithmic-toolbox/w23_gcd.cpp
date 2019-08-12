#include <bits/stdc++.h> 

using namespace std;

int gcd(int a, int b) {
    if(b == 0)  {
        return a;
    }
    return gcd(b,a%b);
}

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b) {
        swap(a,b);
    }    
    cout<<"gcd : "<<gcd(a,b)<<"\n";
    return 0;
}
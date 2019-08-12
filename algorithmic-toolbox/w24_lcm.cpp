#include <bits/stdc++.h> 

using namespace std;

int gcd(int a, int b) {
    if(b==0)
        return a;
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
    int lcm = (a*b)/gcd(a,b);

    cout<<"\nlcm : "<<lcm<<"\n";
    return 0;
}
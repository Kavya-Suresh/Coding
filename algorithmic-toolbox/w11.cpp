#include <iostream>
#include <chrono>  // for high_resolution_clock
auto start = std::chrono::high_resolution_clock::now();

using namespace std;

int main()
{   int a,b;
    cin>>a;
    cin>>b;
    cout<<a+b;
    return 0;
}
auto finish = std::chrono::high_resolution_clock::now();

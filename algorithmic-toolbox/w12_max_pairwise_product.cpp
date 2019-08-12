
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

int64_t MaxPairwiseProductFaster(int n,int numbers[]) {
    if(n==2)
       cout<<int64_t(b[0])*int64_t(b[1]);    
    else        
    {   for(int i=1;i<n;i++)
        {   if(b[max1]<b[i])
            {   max1=i;}
        }
    
        for(int i=1;i<n;i++)
        {   if((b[i]>b[max2])&&(b[i]<b[max1]))
            {   max2=i;}
        }
        cout<<int64_t(b[max1])*int64_t(b[max2]);
    }
}

int64_t MaxPairwiseProduct(int n,int numbers[]) {
    int64_t product = 0;
  
    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j) {
            if (((int64_t)numbers[i])*numbers[j] > max_product) {
                max_product = ((int64_t)(numbers[i]))*numbers[j];
            }
        }
    }
    return max_product;
}	

int main()
{   int n,max1=0,max2=0;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    MaxPairwiseProductFaster(n,b);
    return 0;
}

/*
Car Fueling
Problem Introduction
You are going to travel to another city that is located miles away from your home city. Your can can travel
at most m miles on a full tank and you start with a full tank. Along your way, there are gas stations at
distances stop1 , stop2 , . . . , stopn from your home city. 
What is the minimum number of refills needed?

Problem Description
Input Format:
    The first line contains an integer d 
    (distance between the cities) 
    1 ≤ d ≤ 105.

    The second line contains an integer m 
    (at most distance that can be travelled on full tank) 
    1 ≤ m ≤ 400

    The third line specifies an integer n 
    (num of gas stations)
    1 ≤ n ≤ 300

    The last line contains integers stop1, stop2,., stopn
    (distances at which gas stations are found)
    0 < stop1 < stop2 < · · · < stopn < d

    Assume that the car starts with a full tank. 
       
output: 
    the min num of refills needed. 
    −1, if not possible to reach the destination.

Sample 1.
Input:
950
400
4
200 375 550 750
Output: 2
The distance between the cities is 950, the car can travel at most 400 miles on a full tank. It suffices
to make two refills: at points 375 and 750. This is the minimum number of refills as with a single refill
one would only be able to travel at most 800 miles.

Sample 2.
Input:
10
3
4
1 2 5 9
Output: -1
One cannot reach the gas station at point 9 as the previous gas station is too far away.

Sample 3.
Input:
200
250
2
100 150
Output: 0
There is no need to refill the tank as the car starts with a full tank and can travel for 250 miles
whereas the distance to the destination point is 200 miles.
Need Help?
Ask a question or see the questions asked by other learners at this forum thread.

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int d,m,n;
    cin>>d;
    cin>>m;
    cin>>n;
    int stop[n];
    for(int i=0 ; i<n ; i++) {
        cin>>stop[i];
    }

    if(m>=d) {
        cout<<"0";
        exit(1);
    }

    int interval[n+1], prev=0;
    for( int i=0 ; i<n ; i++ ) {

        interval[i] = stop[i]-prev;
        prev = stop[i];

        if(interval[i] > m) {
            cout<<"-1";
            exit(1);
        }  
    }
    interval[n] = d - stop[n-1];

    int current = m - stop[0], count = 0;
    for (int i = 0; i < n; i++) {
        // cout<<stop[i]<<" in: "<<interval[i+1]<<": "<<current<<" : ";
        if(current < interval[i+1]) { //refuell
            current = m;
            count++;
            // cout<<"refuelled ";
        }
        current -= interval[i+1];
        // cout<<"\n";
    }
    cout<<count;
    
    return 0;
}
/*
    Problem: 06 Print All Divisors
    Author: Amit Kumar Mandal
    Sheet: Striver's A2Z DSA Sheet
    
    Description:
    -----------
    TODO: Add problem description here
    
    Approach:
    --------
    TODO: Add approach here
    
    Time Complexity: O()
    Space Complexity: O()
*/

#include <bits/stdc++.h>
using namespace std;
bool perfect(int n)
{
    if(n<=1) return false;
    int sum=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==0)
            {
                sum+=i;
            }
            else{
                sum+= (i+(n/i));
            }
        }
    }
}

int main() {
    
    
    return 0;
}

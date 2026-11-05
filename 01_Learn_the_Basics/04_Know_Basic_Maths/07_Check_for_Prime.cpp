/*
    Problem: 07 Check for Prime
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
class solution{
public:
    int isprime(int n)
    {
        if(n<=1 || n%2==0) return false;
        if(n==2) return true;
        for(int i=3; i*i<=n; i+=2)
        {
            if(n%i==0){
                return false;
            }
        }
        return true;

    }
};


int main() {
    solution obj;
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<obj.isprime()
    
    return 0;
}


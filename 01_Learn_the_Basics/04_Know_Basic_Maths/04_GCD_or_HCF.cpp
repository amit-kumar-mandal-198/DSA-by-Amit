/*
    Problem: 04 GCD or HCF
    Author: Amit Kumar Mandal
    Sheet: Striver's A2Z DSA Sheet
    
    Description:
    -----------
    TODO: Add problem description here
    
    Approach:
    --------
    TODO: Add approach here
    
    Time Complexity: O(min(n1,n2))
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
class solution {
public:
    int GCD(int n1, int n2)
    {
        n1=abs(n1);
        n2=abs(n2);
        if(n1==0 && n2==0)
        {
            return 0;
        }

        while(n2!=0)
        {
            int temp=n2;
            n2=n1%n2;
            n1=temp;
        }
        return n1;
    
    }
};

int main() {
    solution obj;
    cout<<obj.GCD(15,20);
    
    return 0;
}

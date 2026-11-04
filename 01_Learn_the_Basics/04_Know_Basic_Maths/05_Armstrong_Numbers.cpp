/*
    Problem: 05 Armstrong Numbers
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
class solution
{
public:
    bool isArmstrong(int n)
    {
        if(n<0) return false;
        if(n==0) return true;
        int original=n;
        int digits = countDigits(n);

        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+= fastPower(digit,digits);
            n/=10;
        }
        return sum==original;
    }
private:
    int countDigits(int n)
    {
        int count=0;
        while(n>0)
        {
            count++;
            n/=10;
        }
        return count;
    }

    int fastPower(int base,int exponent){
        int result=1;
        while(exponent & 1){
            result*=base;
        }
        base*=base;
        exponent
    }
};

int main() {
    
    
    return 0;
}

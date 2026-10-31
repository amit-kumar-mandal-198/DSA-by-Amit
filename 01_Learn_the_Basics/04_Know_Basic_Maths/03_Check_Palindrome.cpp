
#include <bits/stdc++.h>
using namespace std;
class solution 
{
public :
    bool palindrome(int n)
    {
        int original =n;
        int rev =0;
        cin>>n;
        while(n>0)
        {
            int ld = n%10;
            rev = (rev*10)+ld;
            n/=10;
        }
        
    }
};

int main() {
    
    
    return 0;
}

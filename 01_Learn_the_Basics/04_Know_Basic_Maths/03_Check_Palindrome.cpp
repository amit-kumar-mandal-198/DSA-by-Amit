
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
        if(n<0) return false;
        while(n>0)
        {
            int ld = n%10;
            rev = (rev*10)+ld;
            n/=10;
        }
        return rev==original;
    }
};

int main() {
    solution obj;
    cout<<obj.palindrome(121);
    
    return 0;
}

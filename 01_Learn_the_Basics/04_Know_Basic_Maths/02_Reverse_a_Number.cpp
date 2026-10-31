
#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    int reverse(int x)
    {
        int rev =0;
        while(x!=0)  //this will works for every number whetehr it is positive or negative.
        {
            int last = x%10;  //gives the remainder.

            //this logic is for 32 bit memory space so that it does not exceed to 64bit as asked in the leetcode question.
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
            {
                return 0;
            }
            rev = (rev*10) +last;
            x/=10;
        }
        return rev;
    }
};

int main() {
    solution obj;
   cout<< obj.reverse(123)<<endl;
    
    return 0;
}



// TIME COMPLEXITY : O(log10(x))
//SPACE COMPLEXITY : O(1)
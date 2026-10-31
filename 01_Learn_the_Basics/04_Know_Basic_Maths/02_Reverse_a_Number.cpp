
#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    int reverse(int n)
    {
        int rev =0;
        while(x!=0)
        {
            int last = x%10;
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

#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
    // int largest(int n)
    // {
    //     string s=to_string(n);
    //     int largest=s[0];
    //     for(int i=0;i<s.size();i++)
    //     {
    //         if(s[i]>largest)
    //         {
    //             largest =s[i];
    //         }
           
    //     }

    //      return largest - '0';
    // }



    //2nd approach:optimal approach
    int largest(int n)
    {
        int largest =0;
        n=abs(n);  // Convert negative number to positive
        if(n==0) return 0;
        while(n>0)
        {
            int ld=n%10;
            if(ld>largest)
            {
                largest=ld;
            }
            n/=10;
        }
        return largest;
    }
};
int main() {
    solution obj;
    cout<<(obj.largest(19987));
    
    return 0;
}

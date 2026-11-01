
#include <bits/stdc++.h>
using namespace std;
// class solution 
// {
// public :
//     bool palindrome(int n)
//     {
//         int original =n;
//         int rev =0;
//         if(n<0) return false;
//         while(n>0)
//         {
//             int ld = n%10;
//             rev = (rev*10)+ld;
//             n/=10;
//         }
//         return rev==original;
//     }



// };

// int main() {
//     solution obj;
//     cout<<(obj.palindrome(121) ? "true" : "false")<<"\n";
    
//     return 0;
// }



class solution
{
public:
    int largest(int n)
    {
        string s=to_string(n);
        int largest=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>largest)
            {
                largest =s[i];
            }
           
        }
        
         return largest;
    }
};
int main() {
    solution obj;
    cout<<(obj.largest(125));
    
    return 0;
}

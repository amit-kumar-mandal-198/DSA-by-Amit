#include<bits/stdc++.h>
using namespace std;
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

         return largest - '0';
    }
};
int main() {
    solution obj;
    cout<<(obj.largest(162625));
    
    return 0;
}

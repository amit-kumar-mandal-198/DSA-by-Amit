
#include <bits/stdc++.h>
using namespace std;

 void pattern1(int n) {
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    };

int main() {
    //this is how test cases works on online compilers.
    // int t;
    // cin>>t;
    
    // for(int i=0;i<t;i++)
    // {
    //      int p;
    // cin>>p;
    // pattern1(p);
    // }

    int p;
    cin>>p;
    pattern1(p);
    
    return 0;
}

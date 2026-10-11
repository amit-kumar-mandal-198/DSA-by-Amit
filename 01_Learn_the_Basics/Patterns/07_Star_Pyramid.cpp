
#include <bits/stdc++.h>
using namespace std;
void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"-";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}

int main() {
   int n;
    cout<<"enter value of n :";
    cin>>n;
    pattern7(n);
    
    return 0;
}

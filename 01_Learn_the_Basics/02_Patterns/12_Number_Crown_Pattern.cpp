
#include <bits/stdc++.h>
using namespace std;
void pattern12(int n){
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
        for(int k=0;k<2*(n-i)-2;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<n-j-1;
        }
        cout<<endl;
    }
}
int main() {
     int n;
    cout<<"enter value of n :";
    cin>>n;
    pattern12(n);
    return 0;
}

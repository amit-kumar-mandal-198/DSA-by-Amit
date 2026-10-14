
#include <bits/stdc++.h>
using namespace std;
void pattern12(int n){
 for(int i=0;i<n;i++)
    {
        //numbers
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1;
        }

        //spaces
        for(int k=0;k<2*(n-i)-2;k++)
        {
            cout<<" ";
        }

        //numbers
        for(int j=i+1;j>=1;j--)
        {
            cout<<j;
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

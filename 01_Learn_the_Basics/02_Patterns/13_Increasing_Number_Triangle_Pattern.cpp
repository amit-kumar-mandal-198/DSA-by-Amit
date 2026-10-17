

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n) {
        int temp=1;
        for(int i=0;i<n;i++)
        
        {
            
            for(int j=0;j<i+1;j++)
            {
                cout<<temp<<" ";
                temp++;
            }
            cout<<endl;
        }
    }
int main() {
    int n;
    cout<<"enter value of n :";
    cin>>n;
    pattern13(n);
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

//Approach 1
    // void pattern10(int n){
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<i+1;j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     for(int i=0;i<n-1;i++)
    //     {
    //         for(int j=0;j<n-i-1;j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    // }

    //Approach 2
    void pattern10(int n) {
     for(int i=1;i<=2*n-1;i++)
     {
        int stars =i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }
    }

int main() {
    int n;
    cout<<"enter value of n :";
    cin>>n;
    pattern10(n);
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cout<<"Enter the number :";
        cin>>n;
        if(n==0)
        {
            cout<<"Number is zero.";
        }
        else if(n>0 & n<=9)
        {
            cout<<"1";
        }
        else if(n>10 & n<=99)
        {
            cout<<"2";
        }
        else if(n>99 & n<=999)
        {
            cout<<"3";
        }
        else if(n>999 & n<=9999)
        {
            cout<<"4";
        }
        else 
        cout<<"Digit contains pre zero.";

    
    return 0;
}

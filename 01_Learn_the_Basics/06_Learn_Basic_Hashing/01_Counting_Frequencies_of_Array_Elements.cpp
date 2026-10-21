#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    cout<<"Enter the array :";
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Enter the number of queries :";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
    }
    return 0;
}
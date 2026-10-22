#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
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
        cout<<"Enter the query :";
        cin>>number;
        cout<<hash[number] <<endl;
    }
    return 0;
}
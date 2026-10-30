
#include <bits/stdc++.h>
using namespace std;
// int countDigit(int n) {
      
//       if (n==0) return 1;
//     int count=0;
//     while(n>0)
//     {
//         count++;
//         n/=10;  //n=n/10;
//     }
//     return count;
//     }

// int main() {
//         int n;
//         cout<<"Enter the digit :";
//         cin>>n;
//         cout<< countDigit(n);
//     return 0;
// }



int main()
{
    int n;
    cin>>n;
    if (n==0) cout<<1;
    int count= (int)(log10(n)+1);
    cout<<count;
    return 0;
}

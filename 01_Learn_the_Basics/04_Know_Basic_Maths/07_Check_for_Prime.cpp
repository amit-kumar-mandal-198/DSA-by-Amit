/*
    Problem: 07 Check for Prime
    Author: Amit Kumar Mandal
    Sheet: Striver's A2Z DSA Sheet
    
    Description:
    -----------
    TODO: Add problem description here
    
    Approach:
    --------
    TODO: Add approach here
    
    Time Complexity: O()
    Space Complexity: O()
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // TODO: Write your solution here
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   if(n<0){
       cout<<"Error";
   }
   int fact=1;
   for(int i=2;i<=n;i++)
   {
       fact*=i;
   }
    cout<<fact;
    return 0;
}
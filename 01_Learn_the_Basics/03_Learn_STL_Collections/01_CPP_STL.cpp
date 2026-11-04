/*
    Problem: 01 CPP STL
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

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n) {
        int result =0;
	  for(int i=0;i<n;i++)
      {
        result+=arr[i];
      }
      return result;
	}

int main() {
    // TODO: Write your solution here
   int result=sum([1,2,3,4,5],5);
   
	
    
    return 0;
}

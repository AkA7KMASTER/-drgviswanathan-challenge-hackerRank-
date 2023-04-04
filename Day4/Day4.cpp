/* Problem Link:https://www.hackerrank.com/contests/vit-bhopal/challenges/maximum-subarray-19-1/problem*/
/* Problem Statement: Given an integer array nums, find the subarray with the largest sum, and return its sum*/
/*Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
Output Format

Maximum subarray sum

Sample Input 0

9
-2 1 -3 4 -1 2 1 -5 4
Sample Output 0

6
Explanation 0

The subarray [4,-1,2,1] has the largest sum 6.

Sample Input 1

1
1
Sample Output 1

1
Sample Input 2

5
5 4 -1 7 8
Sample Output 2

23
Explanation 2

The subarray [5,4,-1,7,8] has the largest sum 23.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,mx=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<=n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            cout<<a[j]<<" ";
            sum += a[j];
            mx= max(mx,sum);
            
        }
        cout<<"\n";
        
    }
    cout<<mx;
    return 0;
}

// Question Link: https://www.hackerrank.com/contests/vit-bhopal/challenges/rotate-array-28-3/problem
// Problem Description: 
/* Input Format

First line contains the value of size of your array
Line consists of 'n' space seperated integers representing the values present in the Array
Third line having the K value, how much you want to rotate
Constraints

1 <= nums.length <= 10^5
-231 <= nums[i] <= 231 - 1
0 <= k <= 10^5
Output Format

Rotated Array
Sample Input 0

7
1 2 3 4 5 6 7
3
Sample Output 0

5 6 7 1 2 3 4
Explanation 0

rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Sample Input 1

4
-1 -100 3 99
2
Sample Output 1

3 99 -1 -100
Explanation 1

rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100] */

// Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static void rotateonebyone(int arr[],int n){
    int last=arr[n-1];
        for(int i=n-2; i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=last;
}

 static void rotate(int arr[],int d,int n){
   int k= d%n;
        for(int i=0;i<k;i++){
            rotateonebyone(arr,n);
    
        
        
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotate(arr,d,n);
    return 0;
}

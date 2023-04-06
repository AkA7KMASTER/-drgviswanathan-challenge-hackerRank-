/*Problem link: https://www.hackerrank.com/contests/vit-bhopal/challenges/dutch-national-flag-algorithumn*/
/*You have been given a integer array/list(ARR) of size N. In the array you are only having 0, 1 and 2 elements. Write a function to sort the array using this algorithm.

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

No

Output Format

Return Sorted Array

Sample Input 0

3
0 1 0
Sample Output 0

0 0 1
Sample Input 1

9
0 0 1 1 2 2 2 0 1
Sample Output 1

0 0 0 1 1 1 2 2 2*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n; cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        ar.push_back(temp);
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}

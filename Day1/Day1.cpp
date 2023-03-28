// Question Link:https://www.hackerrank.com/contests/vit-bhopal/challenges/best-time-to-buy-and-sell-stock-8-1
 /* Problem Statement: You are given an array prices where prices[i] is the price of a given stock on the ith day.
 You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the 
 future to sell that stock.
 Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */

 /* Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

No

Output Format

Integer representing the answer of the problem statement.
Sample Input 0

6
7 1 5 3 6 4
Sample Output 0

5
Explanation 0

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Sample Input 1

5
7 6 4 3 1
Sample Output 1

0 */


#include <bits/stdc++.h>
using namespace std;

class id{
 public:   int stock(vector<int>& price,int n){
        int maxtotal=0, profit=0,maxprofit=0;
        for(int i=n-1;i>=0;i--){
            maxtotal= max(maxtotal,price[i]);
            profit= max(maxtotal-price[i], 0);
            maxprofit= max(profit,maxprofit);
        }
        return maxprofit;
    }
};


int main() {
   int n,a;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    id i;
   int ans= i.stock(arr,n);
    cout<<ans;
    return 0;
}

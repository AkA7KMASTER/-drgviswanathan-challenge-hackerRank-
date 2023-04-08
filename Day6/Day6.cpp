/*PROBLEM LINK: https://www.hackerrank.com/contests/vit-bhopal/challenges/store-rainwater*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*Sample Input 0
12
0 1 0 2 1 0 1 3 2 1 2 1

Sample Output 0
6

Explanation 0
The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
In this case, 6 units of rain water (blue section) are being trapped.

-------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------

Sample Input 1
6
4 2 0 3 2 5

Sample Output 1
9
*/
void rainwater(vector<int>&ar){
    int n=ar.size();
    cout<<n<<endl;
    int left[n]; /*For holding all max value of block from left to right by comparing post one*/
    left[0]=ar[0];/*That means holding data of all highest buiding comparing post one*/
    for(int i=1;i<n;i++){
        left[i]=max(ar[i],left[i-1]);
        cout<<left[i]<<" ";
    }
    cout<<endl;
    int right[n];/*For holding the min value of block from right to left by comparing post one*/
    right[n-1]=ar[n-1];/*That means holding data of all lowest buiding comparing post one*/
    for(int i=n-2;i>=0;i--){
        right[i]=max(ar[i],right[i+1]);
        cout<<right[i]<<" ";
    }
    cout<<endl;
    int sum = 0;/*This contain max no. of trap rain water*/
    for(int i=0;i<n;i++){
        int tp = min(left[i],right[i]);/*It hold the lowest building by comparing highest and lowest biuinding*/
        if(tp>ar[i]){
        sum += (tp - ar[i]);

        }
    }
    cout<<"Total Rain Water Trap is: "<<sum;

}
int main(){
    int n =0;
    cin>>n;
    vector <int> ar;
    for(int i=0; i<n;i++){
        int temp=0; cin>>temp;
        ar.push_back(temp);
    }
    rainwater(ar);
    return 0;
}
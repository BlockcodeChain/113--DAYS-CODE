// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,1]

// Output: 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Single(vector<int>v){
int ans=0;
for(auto val:v){
    ans^=val;
}
return ans;

}
int main()
{
    int num;
    cout<<"Enter  number:";
    cin>>num;
     vector<int>v;
     for(int i=0;i<num;i++){
        int x;
        cout<<"Enter "<<i+1<<" element:";
        cin>>x;
        v.push_back(x);
     }
     cout<<Single(v);
}
// sqrt x
#include<iostream>
using namespace std;
int Square(int n){
    int start=0,end=n,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
       end=mid-1;
        }
        else {
        ans=mid;
        start=mid+1;
    }
}
    return ans;
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<Square(num);
}
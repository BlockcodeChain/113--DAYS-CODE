// sqaure in n*n chessboard 
// In this u have to just apply a num*(num+1)*(2**n+1)/6
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number:";
    cin>>num;
    if(num==0) return 0;

         sum=(num*(num+1)*(2*num+1))/6;
        cout<<sum;
}
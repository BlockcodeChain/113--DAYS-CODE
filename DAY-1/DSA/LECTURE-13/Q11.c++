// decimal to binary
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number in decimal:";
    cin>>num;
    int mul=1;
    while(num){
   int rem=num%2;
   num/=2;
  sum=rem*mul+sum;
   mul*=10;
    }
    cout<<sum;
}
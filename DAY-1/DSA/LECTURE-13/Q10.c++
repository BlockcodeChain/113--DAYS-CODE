// binary to decimal 
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number in Binary:";
    cin>>num;
    int mul=1;
    while(num){
   int rem=num%10;
   num/=10;
  sum=rem*mul+sum;
   mul*=2;
    }
    cout<<sum;
}
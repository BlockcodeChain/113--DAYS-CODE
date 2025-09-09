// pallindrome number
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number:";
    cin>>num;
    int n=num;
    while(num!=0){
        int rem=num%10;
        num/=10;
        sum=sum*10+rem;
    }
  if(sum==n){
    cout<<"Pallindrome ";
  }
  else {
    cout<<"Not a pallindrome";
  }

}
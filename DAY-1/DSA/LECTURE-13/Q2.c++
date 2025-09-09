// leap year
#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter year:";
cin>>year;
if(year%400==0 ||(year%4==0&&year%100!=0)){
    cout<<year<<" is LEAP YEAR";
}
else cout<<"Not a LEAP YEAR";
}
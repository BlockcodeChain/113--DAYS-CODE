// // ADD DIGIT
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
#include<iostream>
using namespace std;
 int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    
    while(num>9){
           int sum=0;
   while(num!=0){
        int rem=num%10;
        num/=10;   
         sum+=rem;
        
    }
     num=sum;
}
   cout<<num;
 }
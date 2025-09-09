// // power of(x,n)



// compute x^n binary exponential 
// e.g 3^5 =>3*3*3*3*3

// n deciaml number toh binary form mai logn(base 2) +1   == 3+1=4
// e.g binary exponential mai hum binary form mai loop lgate hai n ki power pe time complexicity O(log n) aati hai 


// x1 x2 x4 x8 x16 x32.........


#include <iostream>
using namespace std;

double myPow(double x, long n) {
  if(n==0) return 1;
//   becuase power  x^0 ==1
else if(n<0){
    return myPow(1/x,-n);
}
else if(n>0){
    if( n%2==0){
     return   myPow(x*x,n/2);
    }
    else {
return  x*myPow(x*x,(n-1)/2);
    }
}
} 

int main() {
    int x,n;
    cout<<"Enter number and power:";
    cin>>x>>n;
   cout<<myPow(x,n);
}

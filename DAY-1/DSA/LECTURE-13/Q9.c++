// complement of base 10 integer same like dec to bin
#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,mul=1,rem;
    cout<<"Enter number:";
    cin>>num;
    if(num==0) return 0;
   while(num){
    rem=num%2;
  rem=rem^1;
  num/=2;
  ans+=rem*mul;
  mul*=2;
   }
cout<<ans;

}


// 👉 Think of your code like this:

// Take out last binary digit

// rem = num % 2;


// Example: 5 → 101 (binary) → last bit = 1.

// Flip the bit (0 → 1, 1 → 0)

// rem = rem ^ 1;


// Example: 1 ^ 1 = 0.

// Put flipped bit in the answer at the correct position

// ans += rem * mul;
// mul *= 2;


// mul starts at 1 (2⁰), then becomes 2 (2¹), then 4 (2²)…

// This places the flipped bit where it belongs in binary.

// Move to next bit

// num /= 2;


// Removes the last bit so we can check the next one.
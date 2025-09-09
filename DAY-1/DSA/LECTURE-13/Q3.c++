// ugly number  divide by 1 3 5 
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num <= 0) {
        cout << num << " is NOT an Ugly Number.";
        return 0;
    }

    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;

    if (num == 1)
        cout << "Ugly Number";
    else
        cout << "Not an Ugly Number";

 
}

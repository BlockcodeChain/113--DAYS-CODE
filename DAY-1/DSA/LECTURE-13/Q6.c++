// power of two
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num <= 0) {
        cout << "False";   // powers of two are positive only
        return 0;
    }

    while (num % 2 == 0) {  // keep dividing by 2
        num /= 2;
    }

    if (num == 1)
        cout << "True";    // it's a power of 2
    else
        cout << "False";   // not a power of 2

    return 0;
}

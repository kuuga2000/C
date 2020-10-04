// homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int oddNumber(int n) {
    if (n % 2 == 1) {
        return n;
    }  
    return false;
}

void main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (oddNumber(i)) {
            cout << i;
        }
    }
}

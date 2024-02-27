// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: HW E5.14
// Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is
// greater than b and otherwise leaves a and b unchanged. For example,
// int u = 2;
// int v = 3;
// int w = 4;
// int x = 1;
// sort2(u, v); // u is still 2, v is still 3
// sort2(w, x); // w is now 1, x is now 4

#include <iostream>
#include <math.h>
using namespace std;

void sort2(int& a, int& b){
    if (a > b){
        int i = max(a , b);
        int j = min(a, b);
        a = j;
        b = i;

    } 
}

int main() {
    int u, v;

    cout << "Enter the number: ";
    cin >> u;

    cout << "Enter the number: ";
    cin >> v;

    sort2(u, v);
    return 0;
}
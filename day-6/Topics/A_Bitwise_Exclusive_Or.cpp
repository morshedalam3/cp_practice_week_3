#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    std::cout << "Enter integers A and B between 0 and 255 (inclusive): ";
    std::cin >> A >> B;

    // Calculate C using the bitwise XOR operation
    int C = (A ^ B) % 256;

    std::cout << "The non-negative integer C such that A xor C = B is: " << C << std::endl;

    return 0;
}

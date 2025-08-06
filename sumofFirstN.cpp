#include <iostream>
using namespace std;

int sumN(int i, int n) {
    if (i > n)
        return 0;  // base case
    return i + sumN(i + 1, n);  // recursive case
}

int main() {
    int N;
    cin >> N;
    int result = sumN(1, N);
    cout << "Sum = " << result << endl;
    return 0;
}

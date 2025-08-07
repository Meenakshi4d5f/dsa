#include <iostream>
using namespace std;

int sumN(int i, int n) {
    if (i > n)
        return 0;  // base case
    return i + sumN(i + 1, n);  // recursive case
}
int factorial(int N){
    if(N==1||N==0)return 1;
    else
    return N*factorial(N-1);


}

int main() {
    int N;
    cin >> N;
    int result = sumN(1, N);
    cout << "Sum = " << result << endl;
    
    
    cout << "Factorial= " << factorial(N) << endl;
}

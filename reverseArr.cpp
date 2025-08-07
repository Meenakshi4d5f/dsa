#include <iostream>
#include <vector>
using namespace std;


void reverse(vector<int> &nums, int lhs, int rhs) {
    if (lhs >= rhs) return;
    swap(nums[lhs], nums[rhs]);
    reverse(nums, lhs + 1, rhs - 1);
}

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    vector<int> nums(n); 
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];  
    }

    reverse(nums, 0, n - 1); 

    cout << "Reversed array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

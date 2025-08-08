#include <iostream>
#include <vector>
using namespace std;

void sumK(int ind, int currentSum, vector<int> &nums, vector<int> &ds, int target, int n) {
    // Base case: if we've considered all elements
    if (ind == n) {
        if (currentSum == target) {
            for (auto id : ds) {
                cout << id << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include the current element
    ds.push_back(nums[ind]);
    currentSum += nums[ind];
    sumK(ind + 1, currentSum, nums, ds, target, n);

    // Backtrack: remove the element
    currentSum -= nums[ind];
    ds.pop_back();

    // Exclude the current element
    sumK(ind + 1, currentSum, nums, ds, target, n);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ds;
    sumK(0, 0, nums, ds, target, n);

    return 0;
}

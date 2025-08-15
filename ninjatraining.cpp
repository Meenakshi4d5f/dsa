#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp) {
    if (day == 0) {
        int maxi = 0;
        for (int task = 0; task < 3; task++) {
            if (task != last) {
                maxi = max(maxi, points[0][task]);
            }
        }
        return maxi;
    }

    if (dp[day][last] != -1) return dp[day][last];

    int maxi = 0;
    for (int task = 0; task < 3; task++) {
        if (task != last) {
            int currPoints = points[day][task] + f(day - 1, task, points, dp);
            maxi = max(maxi, currPoints);
        }
    }
    return dp[day][last] = maxi;
}

int main() {
    int n;
    cin >> n; // Number of days
    vector<vector<int>> points(n, vector<int>(3));
    
    // Input points matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> points[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(4, -1)); // last = 0..3
    cout << f(n - 1, 3, points, dp) << endl;

    return 0;
}

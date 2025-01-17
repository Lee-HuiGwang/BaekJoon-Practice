#include <iostream>
#include <vector>
#define MOD 1000000000

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> dp(n+1, 0);
    dp[2] = 1;

    for(int i=3; i<=n; i++) {
        dp[i] = (i-1)*(dp[i-1]+dp[i-2])%MOD;
    }

    cout << dp[n];
}
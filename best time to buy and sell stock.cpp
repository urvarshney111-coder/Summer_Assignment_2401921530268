#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int i = 0;
    int j = 0;
    int maxx = 0;
    while (j < prices.size()) {
        int profit = prices[j] - prices[i];
        if (profit < 0) i++;
        else{
            maxx = max(profit, maxx);
            j++;
        }
    }
    return maxx;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    int ans = maxProfit(prices);
    cout << ans;
    return 0;
}
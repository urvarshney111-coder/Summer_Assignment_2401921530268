#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int ans = removeDuplicates(nums);
    cout << ans;
    return 0;
}
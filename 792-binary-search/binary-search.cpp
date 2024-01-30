class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return BS(nums, 0, n - 1, target);
    }
    int BS(vector<int>& nums, int low, int high, int target) {
        int mid = (low + high) / 2;
        if (low > high)
            return -1;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return BS(nums, low, mid - 1, target);
        else if (nums[mid] < target)
            return BS(nums, mid + 1, high, target);
            else return -1;
    }
};
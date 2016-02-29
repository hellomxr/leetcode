class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        temp.resize(nums.size());
        for(int i = 0, s = nums.size(), t = (nums.size() + 1) / 2; i < nums.size(); i++){
            temp[i] = (i & 1) == 0 ? nums[--t] : nums[--s];
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = temp[i];
        }
    }
};

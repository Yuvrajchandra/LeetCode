class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = nums.size();
        vector<int> result(size);
        
        for(int oldStartPtr=0,oldMiddlePtr = n,newStartPtr = 0 ; oldStartPtr<n ; oldStartPtr++,oldMiddlePtr++,newStartPtr+=2)
        {
            result[newStartPtr] = nums[oldStartPtr];
            result[newStartPtr+1] = nums[oldMiddlePtr];
        }
        return result;
    }
};

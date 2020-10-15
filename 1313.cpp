// My Solution

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> result;
        
        for(int i=0; i<nums.size(); i+=2)
        {
            int freq = nums[i];
            while(freq)
            {
                result.push_back(nums[i+1]);
                freq--;
            }
        }
        return result;
        
    }
};







// Other Solution
vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    for (int i=0; i<nums.size(); i+=2)
        res.insert(res.end(), nums[i], nums[i+1]);
    return res;
}

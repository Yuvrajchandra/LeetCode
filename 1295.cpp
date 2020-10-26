class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int num,result=0;
        for(int i=0;i<nums.size(); i++)
        {
            int counter = 0;
            num = nums[i];
            while(num)
            {
                counter++;
                num/=10;
            }
            if(counter%2==0)
            {
                result++;
            }
        }
        return result;
        
    }
};

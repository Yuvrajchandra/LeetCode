class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max = *max_element(candies.begin(),candies.end());
        int totalElements = candies.size();
        vector<bool> result(totalElements);
        for(int i=0;i<totalElements;i++)
        {
            if((candies[i] + extraCandies) >= max)
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
        }
        return result;
    }
};

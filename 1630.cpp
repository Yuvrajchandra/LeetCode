class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector <bool> result;
        bool check;
        for(int i=0; i<l.size(); i++)
        {
            check = true;
            
            vector<int> tempVect(nums.begin()+l[i], nums.begin()+1+r[i]);
            sort(tempVect.begin(), tempVect.end());
            int diff= tempVect[1] - tempVect[0];
            for(int j=1; j<tempVect.size()-1; j++)
            {
                if(tempVect[j+1]-tempVect[j] != diff)
                {
                    check = false;
                }

            }
            if(check==false)
            {
                result.push_back(check);
            }
            else
            {
                result.push_back(true);
            }
        }
        
        return result;
    }
};

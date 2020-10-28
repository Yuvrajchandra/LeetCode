
// My solution
class Solution {
public:
    int maxCoins(vector<int>& piles) {
       int result=0;
       sort(piles.begin(), piles.end(), greater<int>());
        
       for(int i=1,counter=0; counter<piles.size()/3; i+=2,counter++)
       {
           result+=piles[i];
       }
        
        return result;
    }
};

// Best solution
class Solution {
public:
    int maxCoins(vector<int>& piles) {
    int result = 0;
    sort(begin(piles), end(piles));
    for (int j = piles.size() / 3; j < piles.size(); j += 2)
    {
        result += piles[j];
    }
        
    return result;
    }
};

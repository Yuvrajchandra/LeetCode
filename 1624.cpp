class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int result=0;
        bool check = false;
        for(int i=0 ; i<(s.length())/2 ; i++)
        {
            for(int j=s.length()-1; j>i ; j--)
            {
                if(s[i]==s[j])
                {
                    check = true;
                    if(j-i-1>result)
                    {
                        result= j-i-1;
                    }
                    
                }
            }
            
        }
        if(check)
        {
            return result;
        }
        else
        {
            return -1;
        }
    }
};

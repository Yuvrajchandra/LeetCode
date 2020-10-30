class Solution {
public:
    int minOperations(int n) {
        int count=0;
    
        for(int i=0,temp1=1,temp2=2; i<n/2; i++,temp1+=2, temp2+=2)
        {
            if(n%2==0)
                count += temp1;
            else
                count += temp2;
        }
        
        return count;
        
    }
};

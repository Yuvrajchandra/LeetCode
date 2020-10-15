class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,result;
        while(n)
        {
            int remainder = n%10; 
            product *= remainder;
            sum += remainder;
            n /= 10;
        }
        
        result = product - sum;
        return result;
    }
};

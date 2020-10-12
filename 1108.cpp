class Solution {
public:
    string defangIPaddr(string address) {
    string result = "";
    for(char & ch : address)
    {
        if(ch != '.')
        {
            result += ch;
        }
        else
        {
            result += "[.]";
        }
    }
        
    return result;
        
    }
};

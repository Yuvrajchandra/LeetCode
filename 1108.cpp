// Method 1
string defangIPaddr(string address) {
  return regex_replace(address, regex("[.]"), "[.]");
}



// Method 2
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

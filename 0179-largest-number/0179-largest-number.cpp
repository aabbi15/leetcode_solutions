class Solution {
public:
    bool static compare(string s1,string s2){
        if(s1+s2>s2+s1){
            cout<<"TRUE";
            return true;
                       }
        
        else return false;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> numstring;
        for(int n:nums){
            numstring.push_back(to_string(n));
        }
        
        sort(numstring.begin(),numstring.end(),compare);
        string ans="";
        
        
        
        for(auto s:numstring){
            ans+=s;
            
        }
        if(numstring[0]=="0") return "0";
        
        return ans;
        
        
        
    }
};
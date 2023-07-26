class Solution {
public:
    
    string reccur(string &s, int left, int right){
        if(left>=right){return s;}

        char temp= s[right];
        s[right] = s[left];
        s[left] = temp;

        return reccur(s,left+1,right-1);
        
    }
    bool isPalindrome(string s) {
        int a='a' , A='A';
        int z= 'z' , Z = 'Z';
        int diff=a-A;
        string newstr;
        
        
        for(char ch:s){
            if(ch>='0' && ch<='9') newstr.push_back(ch);
            if(ch>=a && ch<=z) newstr.push_back(ch);    
            
            if(ch>=A && ch<=Z) newstr.push_back(char(ch+32));
            
            else continue;

        }
        
        // cout<<newstr[1];
        string temp =newstr;
        string revstr = reccur(newstr,0,newstr.size()-1);
        cout<< revstr;
//         if(newstr.compare(revstr)==0) return true;
        
//         return false;
        return newstr == temp;
        
        
        
        
    }
};
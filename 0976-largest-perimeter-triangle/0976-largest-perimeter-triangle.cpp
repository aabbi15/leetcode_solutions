class Solution {
public:
    bool static cmp(int a,int b){
        return a>=b ;
    }
    int largestPerimeter(vector<int>& nums) {
        //a+b>c,a+c>b,b+c>a
        
        sort(nums.begin(),nums.end(),cmp);
        int maxp=0;
        for(int i=0;i<(nums.size()-2);i++){
            cout<<nums[i]<<endl;
           int  a=nums[i];
            int b=nums[i+1];
            int c=nums[i+2];
            if(b+c>a){
                return a+b+c;
            }
            
            
        }
       
        
        return 0;
    }
};
class Solution {
public:
    int tribonacci(int n) {
        
        int a=0;
        int b=1;
        int c=1;
        int d=a+b+c;
        if(n==0) return 0;
        for(int i=2;i<n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        cout<<a<<endl;
                cout<<b<<endl;

                cout<<c<<endl;

                cout<<d<<endl;

        return c;
        
    }
};
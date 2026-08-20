class Solution {
public:
    int tribonacci(int n) {
        int f = 0;
        int s = 1;
        int t = 1;
        if(n == 0) return 0;
        if(n == 1) return 1; 
        if(n == 2) return 1;

        for(int i=3; i <= n; i++){
            int o = f+s+t;
            f = s;
            s = t;
            t = o;
        }
        return t;
    }
};
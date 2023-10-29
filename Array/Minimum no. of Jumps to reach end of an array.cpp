class Solution {
public:
    int jump(vector<int>& a) {
        int Max = 0;
        int maxRange = 0;
        int jump = 0;
        int n = a.size();

        if(n == 1) return 0; 
        
        for(int i=0;i<n;i++){
            Max = max(Max,i+a[i]);

            if(maxRange == i){
                maxRange = Max;
                jump++;

                if(maxRange >= n-1){
                    return jump;
                }
            }
        }
        return -1;
    }
};
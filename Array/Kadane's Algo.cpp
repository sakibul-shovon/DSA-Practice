//find Largest sum contiguous Subarray [V. IMP]
class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int max = v[0]; // if there is 1 element it will print v[0]
        int curr = 0;

        for(int i=0;i<v.size();i++){
            curr = curr + v[i];

            if(curr > max){
                max = curr;
            }
            if(curr < 0 ){
                curr = 0;
            }

        }
        
        return max;
        
    }
};
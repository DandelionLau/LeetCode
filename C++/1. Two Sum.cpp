class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            std::vector<int> a(2);
            int length = nums.size();
            for(int i = 0;i<length;i++){
                for(int j = 0;j<length;j++){
                    if((nums[i] + nums[j] == target)&&(i!=j)){   
                        a[0] = j;
                        a[1] = i;
                        break;    
                    }//end if   
                }//end for j
            }//end for i
            return a;
        }
};

class Solution {
    int max_rob(vector<int> nums){

        int prev = nums[0];
        int prev2 = 0;

        for(int i=1 ; i< nums.size(); i++){
            int rob = nums[i];
            if(i > 1 ) rob += prev2;

            int not_rob= 0 + prev;

            int money = max(rob, not_rob);
            prev2 = prev;
            prev = money;
        }
        return prev;
    }

public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n == 1 ) return nums[0];
      
        
        vector<int> temp ;
        vector<int> temp2;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i != 0) temp.push_back(nums[i]);
            if( i != n-1) temp2.push_back(nums[i]);
        }

        return max(max_rob(temp), max_rob(temp2));
    }
};
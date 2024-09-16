class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max = INT_MIN; int j = 0;
        double sum = 0 ; double avg  = 0;
        int count = 0;
        int n = nums.size();
        // if(k >1){
        //     b--;
        // }
        cout<< " n = "<< n << endl<< endl;

        for(int i = 0 ; i< n; i++){
            if(count== k){  j=0; }

            sum += nums[i];
            // cout<< " sum : "<< sum << ", "<< endl;
            count ++;

            if(count > k){
            //     if(avg > max){
            //     max = avg;
            //     cout<<endl<< "max : "<< max<< endl;
            // }
                // cout<< endl<< "entered coutn > k "<< endl;
                if(nums[j] >= 0){ 
                    // cout<<endl<< " grtr wala";
                     sum -= nums[j++];  }
                else if(nums[j] < 0){ 
                    // cout<<endl<< " less then wala"; 
                    sum -= nums[j++];  }
                //  else{  sum += nums[j++];  }
                //  cout<< " sum : "<< sum << ", "<< endl;
                
                
            }

            avg = sum/k;
            // cout<<endl<< "avg : "<< avg<< endl;

            if((avg > max ) && (count >= k) ){
                max = avg;
                // cout<<endl<< "max : "<< max<< endl;
            }
        }

        return max;
    }
};
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       int n = nums.size();
       int temp;
       for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(nums[i] > nums[j]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        int largest = nums[n-1] * nums[n-2];
        int smallest = nums[0] * nums[1];
        int difference = largest - smallest;
        return difference; 
    }
};

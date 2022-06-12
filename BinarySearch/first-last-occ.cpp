#include<vector>
class Solution {
public:
    
    
    int firstOcc(vector<int>& nums, int target){
        
        int ans1=-1;
        int s=0;
        int e= nums.size()-1;
        int mid=(s+ (e-s)/2);
        while(s<=e){
            if(target==nums[mid]){
                ans1=mid;
                e=mid-1;
                
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
                
            }
            mid=(s+ (e-s)/2);
        }
        return ans1;
        
    }
    int lastOcc(vector<int>& nums, int target){
        int ans2=-1;
        int s=0;
      int e= nums.size()-1;
        int mid=(s+ (e-s)/2);
                while(s<=e){
            if(target==nums[mid]){
                ans2=mid;
                s=mid+1;
                
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
                
            }
            mid=(s+ (e-s)/2);
        }
        return ans2;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer;
        int x= firstOcc(nums, target);
        int y= lastOcc(nums, target);
        answer.push_back(x);
        answer.push_back(y);
        return answer;
        
        
    }
};

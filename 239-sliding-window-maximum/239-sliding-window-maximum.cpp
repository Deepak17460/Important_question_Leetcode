class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //  deque<int> dq;
        // vector<int> ans;
        // int res=0;
        // for (int i = 0; i < nums.size(); i++) {
        //     while (!dq.empty() and dq.front() <= i - k) dq.pop_front();
        //     while (!dq.empty() and nums[dq.back()] >=nums[i]) dq.pop_back();
        //     dq.push_back(i);
        //     if (i >= k - 1) {
        //          int x = nums[dq.front()];
        //         ans.push_back(x);
        //         res = max(res,x);
        //     }
        // }
        // return res;
        vector<int>res;
        list<int>l;
        int n=nums.size();
        int i=0,j=0;
        while(j<n){
            if(l.empty()){
                l.push_back(nums[j]);
            }
            else{
                while(!l.empty()&&l.back()<nums[j]){
                    l.pop_back();
                }
                l.push_back(nums[j]);
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                res.push_back(l.front());
                if(l.front()==nums[i]) l.pop_front();
                i++;
                j++;
            }
        }
           return res;
    }
};
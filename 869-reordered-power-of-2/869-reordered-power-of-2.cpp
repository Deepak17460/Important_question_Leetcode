class Solution {
public:
    bool reorderedPowerOf2(int n) {
       vector<int>countN=count(n);
       int num=1; 
		while(num<=1e9){
			if(count(num)==countN)return true;
			num<<=1;
		      }
				return  false;
			}
			vector<int>count(int n){
				vector<int>ans(10);
				while(n){
					ans[n%10]++;
					n/=10;
		 }
		return ans;
    }
};
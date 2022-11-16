/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo=1,hi=n;
        
        while(lo<=hi){
            long res=(int)(lo+(hi-lo)/2);
            int g=guess(res);
            if(g==0) return res;
            else if(g<0) hi=res-1;
              else lo=res+1;
            
        }
        return -1;
    }
};
class Solution {
    private:
    int Helper(int A,int B,int C,int D,int E,int F,int G,int H ){
        int total =(C-A) * (D-B) + (G-E) * (H-F);
       if (C<=E || A>=G || B>=H || D<=F )
        return total;
       else
        {
        vector <int> h;
        h.push_back(A);
        h.push_back(C);
        h.push_back(E);
        h.push_back(G);
   
        vector <int> v;
        v.push_back(B);
        v.push_back(D);
        v.push_back(F);
        v.push_back(H);
    
        sort(h.begin(), h.end());
        sort(v.begin(), v.end());
    
        total = total - (h[2] - h [1]) * (v[2] - v[1]);
        return total;
        }
    }
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        return Helper(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2);
    }
};
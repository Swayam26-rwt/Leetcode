class Solution {
public:
    int maxProfit(vector<int>& price) {
        int mp=0, bb=price[0], n=price.size();
        for(int i=1;i<n;i++){
            if(price[i]>bb){
                mp=max(mp,price[i]-bb);
            }
            bb=min(bb,price[i]);
        }
        return mp;
    }
};
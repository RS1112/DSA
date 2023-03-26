class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        int a=0;
        vector<vector<int>>ans;
        for(int i=1; i<n; i++){
            if(arr[i]<=arr[a])
                a=i;
            else{
                ans.push_back({a,i});
                a=i;
            }
        }
        return ans;
    }
};
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int r[n], l[n];
        long long res=0;
        l[0]=arr[0];
        for(int i=1; i<n; i++){
            l[i]=max(l[i-1],arr[i]);
        }
        r[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            r[i]=max(r[i+1],arr[i]);
        }
        for(int i=1; i<n-1; i++){
            res=res+min(l[i],r[i])-arr[i];
        }
        return res;
    }
};
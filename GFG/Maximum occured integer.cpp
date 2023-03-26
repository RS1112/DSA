class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int m){
        int f[m+2]={0};
        int i;
        for(i=0; i<n; i++){
            f[L[i]]++;
            f[R[i]+1]--;
        }
        int mx = f[0];
        int res=0;
        for(i=1; i<m+2; i++){
            f[i]+=f[i-1];
            if(f[i]>mx){
                mx=f[i];
                res=i;
            }
        }
        return res;
    }
};
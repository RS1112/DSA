class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        int i;
        unordered_map<int,int>m;
        for(i=1; i<n; i++){
            m[i]=0;
        }
        for(i=0; i<n; i++){
            m[arr[i]]++;
        }
        for(i=1; i<=n; i++){
            arr[i-1]=m[i];
        }
    }
};
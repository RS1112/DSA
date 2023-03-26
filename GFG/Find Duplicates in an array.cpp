class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int count=0;
        vector<int> l;
        sort(arr,arr+n);
        for(int i=0; i<n; i++){
                if(arr[i]==arr[i+1] && count!=1){
                    l.push_back(arr[i]);
                    count++;
                }
                else if(arr[i]!=arr[i+1]){
                    count=0;
                }
        }
        if(l.size()==0){
            l.push_back(-1);
        }
        return l;
    }
};
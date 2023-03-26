class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int strt=0;
	    int end=n-1;
	    while(strt<=end)
	    {
	        int mid=(strt+end)/2;
	        if((mid==0 || arr[mid]>arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1]))
	        {
	            return arr[mid];
	        }
	        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
	        {
	            strt=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    return -1;
	}
};
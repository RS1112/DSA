class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int l=0, h=n-1;
       while(l<h){
           int mid=l+(h-l)/2;
           if(arr[mid]>arr[mid+1]){
               h=mid;
           }
           else{
               l=mid+1;
           }
       }
       return h;
    }
};
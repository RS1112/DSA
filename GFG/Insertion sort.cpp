class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        insertionSort(arr,i);
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int i, j;
        for(i=1; i<n; i++){
            int key = arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
};
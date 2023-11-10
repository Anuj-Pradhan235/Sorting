class Solution{
public:
    void insertionSort(int arr[],int n){
        for(int i=0;i<n;i++){
            int tempSol=arr[i];
            int j=i-1;
            while(j>=0){
                if(arr[j]>tempSol)arr[j+1]=arr[j];
                else break;
                j--;
            }
            swap(arr[j+1],tempSol);
        }
    }
}
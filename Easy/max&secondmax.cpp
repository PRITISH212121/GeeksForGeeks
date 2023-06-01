class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = arr[0], max2= -1;
        for (int i=1;i<sizeOfArray;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for (int i=0;i<sizeOfArray;i++){
            if(arr[i]>max2&&arr[i]!=max){
                max2=arr[i];
            }
        }
        vector<int> v;
        v.push_back(max);
        if(max==max2){
         v.push_back(-1);
        }
        else 
            v.push_back(max2);
        return v;
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
    }
};


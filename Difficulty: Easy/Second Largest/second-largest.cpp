class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        int secondLar = -1;
        for(int i = 1 ; i < n ;i++){
            if( largest < arr[i]){
                secondLar = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > secondLar){
                secondLar = arr[i];
            }
        }
        
        return secondLar;
    }
};
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        vector<int> :: iterator largest = arr.begin() ;
        for(int i = 1 ; i < n ; i++){
            if( *largest <= arr[i]){
                *largest = arr[i];
            }
        }
        return *largest;
    }
};

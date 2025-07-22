class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int i = 0 , j = 0 ;
        
        vector<int> intersectionArr;
        
        while( i < n1 && j < n2){
            if( arr1[i] < arr2[j]){
                i++;
            }
            else if(arr1[i] > arr2[j]){
                j++;
            }
            else{
                if(intersectionArr.size() == 0 || intersectionArr.back() != arr1[i]){
                    intersectionArr.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
        return intersectionArr;
    }
};

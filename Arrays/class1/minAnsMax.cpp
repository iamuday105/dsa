// Min and Max in Array (geeksforgeeks.)

class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
     
      long long  int min =INT_MAX;
       long long int max=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
          long long int element =arr[i];
            
            if(element < min ){
                
                min = element;
             
                
            }
            
            if(element > max ){
                max =element;
              
            }
        }
        
    return make_pair(min, max);
      
    }
};

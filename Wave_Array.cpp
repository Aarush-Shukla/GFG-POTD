    void convertToWave(int n, vector<int>& arr){
  
    int i=0;
    int j=1;
    while(i<n&&j<n){
    swap(arr[i],arr[j]);
    i=i+2;
    j=j+2;
    }
        
    }

    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int i=0;
        int j=0;
        vector<int> v;
        bool found = false;
        for(int k=0;k<n;k++){
            if(arr[k] == x){
                if(!found){
                    i = k;
                    j = k;
                    found = true;
                }else{
                    j = k;
                }
            }
        }
        
        if(!found){
            v.push_back(-1);
            v.push_back(-1);
        }else{
            v.push_back(i);
            v.push_back(j);
        }
        
        return v;
    }

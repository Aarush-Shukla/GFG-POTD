   int equilibriumPoint(long long a[], int n) {
    
       int sum=0, left=0, right=0;
        for(int i=0; i<n; ++i){
            sum+=a[i];
        }
        for(int i=0; i<n; ++i){
            right=sum-a[i]-left;
            if(left==right) return (i+1);
            left+=a[i];
        }
        return -1;
    }

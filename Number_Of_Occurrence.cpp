	int count(int arr[], int n, int x) {
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    return mp[x];
	}

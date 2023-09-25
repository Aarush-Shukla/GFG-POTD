 vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
             // first sort a both array
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        // create a priority queue of max heap
        priority_queue<int> pq;
        
        for(int i = N-1 ; i >= 0 ; i--){
            for(int j = N-1 ; j >= 0 ; j--){
                // insert a negative element for mean heap
                int sum = (A[i] + B[j]) * -1;
                if(pq.size() < K){
                    pq.push(sum);
                }else if(sum < pq.top()){
                    pq.pop();
                    pq.push(sum);
                }else break;
            }
        }
       // create a vector of size k
        vector<int> result(K--);

        // geting value in vector
        while(!pq.empty()){
            // make value positive at their position
            result[K--] = pq.top()*-1;
            pq.pop();
        }
        
        return result;
    }

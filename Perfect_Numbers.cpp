   int isPerfectNumber(long long N) {
       long long sum=1;
       if(N==1)
       return false;
       for(int i=2;i<=sqrt(N);i++){
           if(N%i==0){
               sum+=i;
               sum+=N/i;;
           }
       }
       if(sum==N)
       return true;
       return false;
    }

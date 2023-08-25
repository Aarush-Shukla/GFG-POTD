	int isPalindrome(string S)
	{
	    int i=0;
	    int j=S.length()-1;
	    while(i<=j){
	        if(S[i]!=S[j]){
	            return 0;
	            break;
	        }
	        i++;
	        j--;
	    }
	    return 1;
	}

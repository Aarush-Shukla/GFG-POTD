void fun(stack<int>& nst,stack<int>& st){
        
        if(nst.empty()) return;
        
        st.push(nst.top());
        nst.pop();
        
        fun(nst,st);
    }
    
    
    void Reverse(stack<int> &st){
        stack<int> nst=st;
        while(!st.empty())
    st.pop();
        
        fun(nst,st);
        
    }

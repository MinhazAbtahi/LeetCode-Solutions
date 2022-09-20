class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack <char> st;
        for(int i =0;i<S.size();i++)
        {
            if(S[i]!='#') st.push(S[i]);                
            if(S[i] == '#')
            {
                if(!st.empty()) st.pop();                  
            }
        }
        S.clear();
        while(!st.empty())
        {
            S.push_back(st.top());
            st.pop();
        }
        for(int i =0;i<T.size();i++)
        {
            if(T[i]!='#')
                st.push(T[i]);
            if(T[i] == '#')
            {
                if(!st.empty())
                    st.pop();
            }
        }
        T.clear();
        while(!st.empty())
        {
            T.push_back(st.top());
            st.pop();
        }

        if(S.compare(T)==0) return true;          
        else return false;           
    }
};
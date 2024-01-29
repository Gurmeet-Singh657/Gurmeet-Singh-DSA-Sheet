class Solution {
public:
    void solve(int open,int close,int n,string curr,vector<string>& ans)
    {
        // Base Condn
        if(close==n)
        {
            ans.push_back(curr);
            return;
        }

        // ( -> open+1<=n
        if(open+1<=n)
        {
            solve(open+1,close,n,curr+'(',ans);
        } 
        // ) -> close+1<=open 
        if(close+1<=open)
        {
            solve(open,close+1,n,curr+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0,0,n,"",ans);
        return ans;
    }
};
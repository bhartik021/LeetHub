class Solution {
public:
    int minDeletions(string s) {
    int i,f[26]={0},ans=0;
        map<int,int> m;

        for(char c:s)
            f[c-'a']++;
        
        for(i=0;i<26;i++)
        {
            if(f[i]!=0)
                m[f[i]]++;
        }
            

        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            if(it->second>1 && it->first!=0)
            {
                m[it->first-1]+=it->second-1;
                ans+=it->second-1;
            }
        }

        return ans;     
    }
};
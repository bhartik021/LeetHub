unordered_map<string,priority_queue<string,vector<string>,greater<string>>> mp;
vector<string> ans;

class Solution {
    
private:
    void dfs(string& from){
        while(!mp[from].empty()){
            string to = mp[from].top();
            mp[from].pop();
            dfs(to);
        }
        ans.push_back(from);
    }
    
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
     mp.clear();
        ans.clear();
        int n = tickets.size();

        for(int i=0; i<n; i++) mp[tickets[i][0]].push(tickets[i][1]);

        string from = "JFK";
        dfs(from);
        reverse(ans.begin(),ans.end());

        return ans;   
    }
};
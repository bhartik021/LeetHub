class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
    int n = points.size();
        vector<vector<int>> distances(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                distances[i][j] = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
            }
        }
        vector<int> marked(n, -1); marked[0] = 1;
        vector<int> best_distances(n, INT_MAX);    best_distances[0] = 0;
        int back = 0;
        int ret = 0;
        while(true){
            int best_dis = INT_MAX, best_id = -1;
            for (int i = 0; i < n; i++){
                if (marked[i] == 1) continue;
                best_distances[i] = min(best_distances[i], distances[i][back]);
                if (best_distances[i] < best_dis){
                    best_dis = best_distances[i];
                    best_id = i;
                }
            }
            if (best_id == -1) break;
            marked[best_id] = 1;
            ret += best_dis;
            back = best_id;
        }
        return ret;    
    }
};
class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
    unordered_set<string> bankSet{bank.begin(), bank.end()};
    if (!bankSet.count(endGene))
      return -1;

    int ans = 0;
    queue<string> q{{startGene}};

    while (!q.empty()) {
      ++ans;
      for (int sz = q.size(); sz > 0; --sz) {
        string word = q.front();
        q.pop();
        for (int j = 0; j < word.length(); ++j) {
          const char cache = word[j];
          for (const char c : {'A', 'C', 'G', 'T'}) {
            word[j] = c;
            if (word == endGene)
              return ans;
            if (bankSet.count(word)) {
              bankSet.erase(word);
              q.push(word);
            }
          }
          word[j] = cache;
        }
      }
    }

    return -1;    
    }
};
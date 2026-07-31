class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for(char ch : word)
            freq[ch - 'a']++;

        sort(freq.begin(), freq.end());

        int minPushing = 0;

        for(int i = 25, pushCnt = 0; i >= 0; i--) {
            int currEleIdx = 25 - i;

            if(currEleIdx % 8 == 0)
                pushCnt++;

            minPushing += freq[i] * pushCnt;
        }

        return minPushing;
    }
};
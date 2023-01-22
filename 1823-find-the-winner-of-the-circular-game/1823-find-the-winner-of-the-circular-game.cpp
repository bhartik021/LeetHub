class Solution {
public:
    int findTheWinner(int n, int k) {
    vector<bool> friends(n);

    int friendCount = n;
    int fp = 0;  // friends' pointer

    while (friendCount > 1) {
      for (int i = 0; i < k; ++i, ++fp)
        while (friends[fp % n])  // The friend is not there.
          ++fp;                  // Point to the next one.
      friends[(fp - 1) % n] = true;
      --friendCount;
    }

    const auto it =
        find_if(begin(friends), end(friends), [](int f) { return !f; });
    return distance(begin(friends), it) + 1;  
    }
};
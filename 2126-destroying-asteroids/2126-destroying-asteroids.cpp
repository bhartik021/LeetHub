class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    sort(begin(asteroids), end(asteroids));

    long long m = mass;

    for (const int asteroid : asteroids)
      if (m >= asteroid)
        m += asteroid;
      else
        return false;

    return true;    
    }
};
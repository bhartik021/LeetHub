struct Trans {
  string name;
  int time;
  int amount;
  string city;
};

class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
    vector<string> ans;
    unordered_map<string, vector<Trans>> nameToTranses;

    for (const string& t : transactions) {
      const Trans trans = getTrans(t);
      nameToTranses[trans.name].push_back(trans);
    }

    for (const string& t : transactions) {
      const Trans currTrans = getTrans(t);
      if (currTrans.amount > 1000) {
        ans.push_back(t);
      } else if (nameToTranses.count(currTrans.name)) {
        // Iterate through all transactions w/ the same name,
        // Check if within 60 minutes in a different city
        for (Trans trans : nameToTranses[currTrans.name])
          if (abs(trans.time - currTrans.time) <= 60 &&
              trans.city != currTrans.city) {
            ans.push_back(t);
            break;
          }
      }
    }

    return ans;
  }

 private:
  Trans getTrans(const string& t) {
    istringstream iss(t);
    vector<string> s(4, "");
    for (int i = 0; getline(iss, s[i++], ',');)
      ;
    return {s[0], stoi(s[1]), stoi(s[2]), s[3]};    
    }
};
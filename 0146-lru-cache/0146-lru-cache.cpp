class LRUCache {
public:
    int cap;

    // Doubly linked list
    list<pair<int,int>> dll;

    // key -> iterator
    unordered_map<int, list<pair<int,int>>::iterator> mp;

    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
      // key not found
        if(mp.find(key) == mp.end()) {
            return -1;
        }

        // iterator of node
        auto it = mp[key];

        int value = it->second;

        // remove from current position
        dll.erase(it);

        // move to front (most recently used)
        dll.push_front({key, value});

        // update iterator
        mp[key] = dll.begin();

        return value;  
    }
    
    void put(int key, int value) {
       // if key already exists
        if(mp.find(key) != mp.end()) {

            // remove old node
            dll.erase(mp[key]);
        }

        // cache full
        else if(dll.size() == cap) {

            // least recently used node
            auto last = dll.back();

            // remove from map
            mp.erase(last.first);

            // remove from list
            dll.pop_back();
        }

        // insert new node at front
        dll.push_front({key, value});

        // store iterator
        mp[key] = dll.begin(); 
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
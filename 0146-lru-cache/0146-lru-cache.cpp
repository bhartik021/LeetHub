class LRUCache {
public:
    int cap;
    // doubly linked list
    list<pair<int, int>>dll;

    // map
    unordered_map<int, list<pair<int, int>>::iterator>mp;

    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        // check if exists in map if no return -1
        if(mp.find(key) == mp.end()) {
            return -1;
        }

        // iterator to node
        auto it = mp[key];

        int value = it->second;

        // remove current position form dll
        dll.erase(it);

        // move this iterator to front (recently used one)
        dll.push_front({key, value});

        // update iterartor
        mp[key] = dll.begin();

        return value;
    }
    
    void put(int key, int value) {
        // case 1 : if already present
        if(mp.find(key) != mp.end()) {
            dll.erase(mp[key]);
        }

        // case 2 : size oveflow - like cache full - if there is no space
        else if(dll.size() == cap) {
            // will take out least recently used
            auto last = dll.back();
            // remove from map
            mp.erase(last.first);
            // remove from the list
            dll.pop_back();
        }

        // will add at front
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
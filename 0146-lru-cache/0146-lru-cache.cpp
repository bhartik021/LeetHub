class LRUCache {
public:
    int cap;

    // doubly linked list as a pair
    list<pair<int, int>>dll;

    // hashmap to store
    unordered_map<int, list<pair<int,int>>::iterator> mp;


    LRUCache(int capacity) {
       cap = capacity; 
    }
    
    int get(int key) {
        // if key is not present
        if(mp.find(key) == mp.end()) {
            return -1;
        }

        // iterator of node
        auto it = mp[key];
        
        int value = it->second;

        //remove current position
        dll.erase(it);

        // moving to font recencylt used one
        dll.push_front({key, value});

        // update iterator
        mp[key] = dll.begin();

        return value;

    }
    
    void put(int key, int value) {
        // case 1 : if key is already present
        if(mp.find(key) != mp.end()) {
            // will remove old key 
            dll.erase(mp[key]);
        }

        // case 2 : cache full (if there is no space)
        else if(dll.size() == cap) {
            // will take out lease recently used node 
            auto last = dll.back();
            // remove from map
            mp.erase(last.first);
            // remove from list
            dll.pop_back();
        }

        // add new node to front
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
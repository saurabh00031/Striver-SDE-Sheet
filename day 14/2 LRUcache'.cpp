class LRUCache {
public:
    int maxCap;
    int cap;
    list<int> lst;
    unordered_map<int, list<int>::iterator> mp;
    unordered_map<int, int> kv;
    LRUCache(int capacity) {
        this->maxCap = capacity;
        this->cap = 0;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            lst.erase(mp[key]);
            lst.push_front(key);
            mp[key] = lst.begin();
            return kv[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end()){
            if(cap == maxCap){
                int last = lst.back();
                lst.pop_back();
                mp.erase(last);
                kv.erase(last);
                lst.push_front(key);
                mp[key] = lst.begin();
                kv[key] = value;
            }
            else {
                lst.push_front(key);
                mp[key] = lst.begin();
                kv[key] = value;
                cap++;
            }
        }
        else {
            lst.erase(mp[key]);
            lst.push_front(key);
            mp[key] = lst.begin();
            kv[key] = value;
        }
    }
};

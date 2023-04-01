// Runtime 224 ms Beats 21.79% 
// Memory 50.4 MB Beats 97.53%

class MyHashMap {
private:
    vector<pair<int, int>> map;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) { // check if key is in map first then edit or insert new pair
        for(auto& p: map){
            if(p.first == key){
                p.second = value;
                return;
            }
        }
        map.push_back({key, value});
    }
    
    int get(int key) {
        for(auto& p:map) if(p.first == key) return p.second;
        return -1;
    }
    
    void remove(int key) {
        for(auto idx=map.begin(); idx!=map.end();idx++){
            if(idx->first == key) {
                map.erase(idx);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

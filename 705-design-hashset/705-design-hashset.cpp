class MyHashSet {
public:
    int n = 1000001;
    vector<int> def;
    MyHashSet() {
        def.resize(n,0);
    }
    
    void add(int key) {
        def[key]=1;
    }
    
    void remove(int key) {
        def[key]=0;
    }
    
    bool contains(int key) {
       return def[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
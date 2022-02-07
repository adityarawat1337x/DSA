struct Node
{
    int key,val;
    Node *left,*right;
    Node(int k,int v){
        key=k;
        val=v;
        left=right=NULL;
    }
};

class LRUCache {
    Node *front,*back;
    unordered_map<int,Node*> mp;
    int limit;
public:
    void display(){
        Node* node = front;
        while(node){
            cout<<node->key<<"->";
            node=node->right;
        }
        cout<<"\n";
    }
    
    void makeFront(Node* tmp){
        if(tmp==front)
            return;
        Node *tmpLeft=tmp->left,*tmpRight=tmp->right;
        tmpLeft->right = tmpRight;
        if(tmp!=back)
            tmpRight->left = tmpLeft;
        else
            back = back->left;
        tmp->left=NULL;
        tmp->right=front;
        front->left=tmp;
        front=tmp;
    }
    
    void newNode(int key, int val){
        if(!front){
            front = new Node(key,val);
            back=front;
            mp[key] = front;
            return;
        }
        Node* node = new Node(key,val);
        Node* tmp = front;
        tmp->left = node;
        node->right = tmp;
        front = node;
        mp[key] = front;
    }
    
    LRUCache(int capacity) {
        limit=capacity;
        front=back=nullptr;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())
            return -1;
        Node* tmp = mp[key];
        makeFront(tmp);
        //display();
        return front->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            mp[key]->val=value;
            makeFront(mp[key]);
        }else
            newNode(key,value);
        
        while(mp.size()>limit){
            cout<<"Deleted "<<back->key<<"\n";
            mp.erase(back->key);
            Node *tmp = back->left;
            delete back;
            tmp->right = NULL;
            back = tmp;
        }
        
       // display();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
struct Node{
    int start,end;
    Node* left=nullptr;
    Node* right=nullptr;
    
    Node(int a,int b){
        start=a;
        end=b;
    }
};

class MyCalendar {
    Node* root;
public:
    MyCalendar() {
        root = new Node(-1,-1);
    }
    
    bool insert(Node* root,int a,int b){
         if(root->start>=b){
             if(root->left)
                return insert(root->left,a,b);
             else{
                 root->left = new Node(a,b);
                 return true;
             }
         }
         else if(root->end<=a){
              if(root->right)
                  return insert(root->right,a,b);
              else{
                 root->right = new Node(a,b);
                 return true;
             }
         }
         return false;
    }
    
    bool book(int a, int b) {
        if(root->start==-1){
            root->start = a;
            root->end = b;
            return true;
        }
        
        Node* node = root;
        return insert(node,a,b);
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
class Node {
public:
    int key, val, count;
    Node* prev;
    Node* next;
    Node() : key(-1), val(-1), count(-1), prev(nullptr), next(nullptr) {}
    Node(int key, int val) : key(key), val(val), count(1), prev(nullptr), next(nullptr) {}
};

class List {
    public:
    Node* head;
    Node* tail;
    int size;
    List() {
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
        size = 0;
    }
    void addFront(Node *node) {
        Node* temp = head->next;
        node->next = temp;
        node->prev = head;
        head->next = node;
        temp->prev = node;
        size++; 
    }
    void removeNode(Node* delnode){
        Node* delprev = delnode->prev;
        Node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
        size--; 
        
    }
};



class LFUCache {
public:
    unordered_map<int,Node*> keyNode;
    unordered_map<int,List*> freqList;
    int maxSize;
    int minFreq;

    LFUCache(int capacity) {
        maxSize = capacity;
        minFreq = 0;   
    }

    void updateList(Node* node){
        keyNode.erase(node->key);
        freqList[node->count]->removeNode(node);
        if(node->count == minFreq && freqList[node->count]->size == 0) minFreq++;
        List* nextList = new List();
        if(freqList.find(node->count+1)!=freqList.end()) nextList = freqList[node->count+1];
        node->count+=1;
        nextList->addFront(node);
        freqList[node->count] = nextList;
        keyNode[node->key] = node;
    }
    
    int get(int key) {
        if(keyNode.find(key)!=keyNode.end()){
            Node* temp = keyNode[key];
            int val = temp->val;
            updateList(temp);
            return val;

        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if(maxSize==0) return;
        if(keyNode.find(key)!=keyNode.end()){
            Node* temp = keyNode[key];
            temp->val = value;
            updateList(temp);
        }
        else{
            if(keyNode.size()==maxSize){
                List* list = freqList[minFreq];
                keyNode.erase(list->tail->prev->key);
                freqList[minFreq]->removeNode(list->tail->prev);
            }
            minFreq = 1;
            List* list = new List();
            if(freqList.find(minFreq)!=freqList.end()) list = freqList[minFreq];
            Node* node = new Node(key,value);
            list->addFront(node);
            keyNode[key] = node;
            freqList[minFreq] = list;
        }
        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

class Node {
public:
    Node* next;
    Node* prev;
    int key; 
    int val;
    Node() : next(nullptr), prev(nullptr), key(0), val(0) {}
    Node(int k, int x) : next(nullptr), prev(nullptr), key(k), val(x) {}
};

class LRUCache {
public:
    unordered_map<int, Node*> mp;
    int size;
    int currSize = 0;
    Node *head, *tail;

    LRUCache(int capacity) {
        size = capacity;
        head = new Node();
        tail = new Node(); 
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) != mp.end()) {
            Node* temp = mp[key];
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;

            temp->next = head->next;
            temp->prev = head;
            head->next->prev = temp;
            head->next = temp;
            return temp->val;
        } else {
            return -1; 
        }
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* temp = mp[key];
            temp->val = value;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->next = head->next;
            temp->prev = head;
            head->next->prev = temp;
            head->next = temp;
        } else {
            if (currSize == size) {
                Node* lru = tail->prev;
                mp.erase(lru->key);
                lru->prev->next = tail;
                tail->prev = lru->prev;
                delete lru; 
                currSize--;
            }
          
            Node* newNode = new Node(key, value);
            newNode->next = head->next;
            newNode->prev = head;
            head->next->prev = newNode;
            head->next = newNode;
            mp[key] = newNode;
            currSize++;
        }
    }
};


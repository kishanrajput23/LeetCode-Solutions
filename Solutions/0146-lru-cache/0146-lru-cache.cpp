class Node {
public:
    int key;
    int value;
    Node* prev;
    Node* next;

    Node(int key, int value) {
        this->key = key;
        this->value = value;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
private:
    int capacity;

    unordered_map<int, Node*> mp;

    Node* head;
    Node* tail;

    // Insert node just before tail (Most Recently Used position)
    void insert(Node* node) {
        Node* lastNode = tail->prev;

        lastNode->next = node;
        node->prev = lastNode;

        node->next = tail;
        tail->prev = node;
    }

    // Remove a node from the linked list
    void remove(Node* node) {
        Node* previousNode = node->prev;
        Node* nextNode = node->next;

        previousNode->next = nextNode;
        nextNode->prev = previousNode;
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {

        // Key doesn't exist
        if (mp.find(key) == mp.end()) {
            return -1;
        }

        Node* node = mp[key];

        // Move to Most Recently Used position
        remove(node);
        insert(node);

        return node->value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {

            Node* node = mp[key];

            node->value = value;

            remove(node);
            insert(node);

            return;
        }

        // Create a new node
        Node* newNode = new Node(key, value);

        insert(newNode);
        mp[key] = newNode;

        // Remove Least Recently Used node if capacity exceeded
        if (mp.size() > capacity) {

            Node* lruNode = head->next;

            remove(lruNode);

            mp.erase(lruNode->key);

            delete lruNode;
        }
    }

    ~LRUCache() {
        Node* curr = head;

        while (curr != nullptr) {
            Node* nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
    }
};
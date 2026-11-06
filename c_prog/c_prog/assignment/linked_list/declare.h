


// Define your struct only once here
struct Node {
    int data;
    struct Node *next;
};


// Function declarations (prototypes)
void insert_at_first(struct Node **head, int data);
void printlist(struct Node *head);
struct Node* createNode(int data);
void insert_at_end(struct Node **head, int data);
void insert_at_position(struct Node **head, int data, int pos);
void delete_at_first(struct Node **head);
void delete_at_last(struct Node **head);
void delete_at_position(struct Node **head, int data, int pos);


//#endif







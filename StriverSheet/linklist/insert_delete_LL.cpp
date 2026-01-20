// MY CODE THAT I WROME MY SELF
#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

// funstion to convert a array into linked list
node* convert_array_to_linkedlist(vector<int> &arr){
    if(arr.size() == 0) return NULL;
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;
}

// printing the linked list
void traverse_linked_list(node* head){
    node* temp = head;
    while( temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//  INSERT FUNCTION
// 1 insert at the head
node* insert_at_head(int val, node* &head){    
        node* temp = new node(val);
        temp->next = head;
        head = temp;
    
    return head;
}

// insert at tail
void insert_at_tail(int val, node* &head){
    if(head == nullptr) {
        head = new node(val);
        return;
    }
    else{
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        node* temp_node = new node(val);
        temp->next = temp_node;
    }
}

// insert at any position k (including head and tail (1 and n+1) where n = length of linked list)
void insert_at_position_k(int k, int val,node* &head){
    // at k = 1 means at head
    if(k <= 1 || head == nullptr){
        node* temp = new node(val);
        temp-> next = head;
        head = temp;
        return;
    }
    
    // from 2 to n 
    int count = 1;
    node* temp = head;
    while(count < (k-1) && temp->next != nullptr){
        temp = temp->next;
        count++;
    }
    node* curr = new node(val);
    curr -> next = temp->next;
    temp->next = curr;
    if(temp == nullptr) {
        cout << "Position out of bounds\n";
        return;
    }
}
// insert before value k
void insert_before_val(int val,int target, node* &head){
    if(head->data == target){
        node* newnode = new node(val,head);
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next->data != target){
        temp = temp->next;
    }
    node* newnode = new node(val);
    newnode ->next = temp->next;
    temp->next = newnode;
}
// DELETING HEAD OF A linked list
void delete_head(node* &head){
    if(head == nullptr) return ; // if linked list is empty then simply return
    node* temp = head;
    head = head->next;
    delete temp;
}
// deletion tail 
void delete_tail(node* &head){
    if(head == nullptr) return;

    if(head->next == nullptr){
        delete head;
        head= nullptr;
        return;
    }
    node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// delete at any positon k
void delete_at_position_k(int k, node* &head){
    if( k == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int count = 1;
    node* temp = head;
    while(count < (k-1) && temp-> next != nullptr){
        temp = temp->next;
        count++;
    }
    node* to_delete = temp->next;
    temp->next = to_delete->next;
    delete to_delete;
}
// delete 5 from the likkned list
void delete_val(int target,node* &head){
    if(head == nullptr)return;
    if(head->data == target){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* temp = head;
    while(temp->next->data != target){
        temp = temp->next;
    }
    node* newnode = temp->next;
     temp->next= newnode->next;
    delete newnode;
}
int main(){
    // declare a vector 
    vector<int> arr = {2,3,4,6};
    
    // converting it to an array 
    node* head = convert_array_to_linkedlist(arr);

    // node* head2 = nullptr;  //empty linked list to check edge cases

    // print the linked list
cout << "linked list : " << endl;
    traverse_linked_list(head);

    // insert an element in the linked list 
        // at head
        insert_at_head(100,head);
        cout << "Value 100 inserted at the head : " << endl;
        traverse_linked_list(head);

        // at tail
        insert_at_tail(200,head);
        cout << "value 200 inserted at th tail of the linked list : " << endl;
        traverse_linked_list(head);

        // at kth position
        insert_at_position_k(2,1,head);
        cout << "value 1 inserted at 1st position of the linked list : " << endl;
        traverse_linked_list(head);

        // insert value 5 before 6
        insert_before_val(5,6,head);
        cout<< "value 5 inserted before 6 in the liked list :  " <<endl;
        traverse_linked_list(head);

    // DELETION OF AN ELEMENT FROM A LINKED LIST 
        // at head
        delete_head(head);
        cout << "value 100 deleted from head of the linked list : " << endl;
        traverse_linked_list(head);

        // at tail
        delete_tail(head);
        cout << "value 200 deleted from tail of the linked list : " << endl;
        traverse_linked_list(head);

        // from at position k
        delete_at_position_k(1,head);
        cout <<"value 1 delete from 1st position of the linked list : " << endl;
        traverse_linked_list(head);

        // delete value 5 from the liked list
        delete_val(5,head);
        cout<< "value 5 deleted from the linked list :"<<endl ;
        traverse_linked_list(head);
}

// code written with chatgpt with explanation and better reading
/*
#include<iostream>
#include<vector>

using namespace std;

// Node class for singly linked list
class node{
public:
    int data;
    node* next;

    // Constructor for node with next pointer
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }

    // Constructor for node with no next pointer
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

// Convert an array/vector into a linked list
node* convert_array_to_linkedlist(vector<int> &arr){
    if(arr.empty()) return nullptr; // empty vector returns empty list

    node* head = new node(arr[0]);
    node* mover = head;

    for(size_t i = 1; i < arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
// Explanation:
// Takes a vector of integers and creates a linked list in the same order.
// Returns the head of the linked list. Handles empty vector case safely.


// Traverse and print the linked list
void traverse_linked_list(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Explanation:
// Loops through the linked list starting from head and prints each node's data.
// Stops when it reaches nullptr.


// Insert a node at the head of the list
void insert_at_head(int val, node* &head){
    node* temp = new node(val, head);
    head = temp;
}
// Explanation:
// Creates a new node with given value, points it to the current head, 
// and updates head to this new node. Works even if the list is empty.


// Insert a node at the tail of the list
void insert_at_tail(int val, node* &head){
    if(head == nullptr){
        head = new node(val);
        return;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new node(val);
}
// Explanation:
// Loops to the end of the list and appends a new node.
// If the list is empty, the new node becomes the head.


// Insert a node at position k (1-indexed)
void insert_at_position_k(int k, int val, node* &head){
    if(k <= 1 || head == nullptr){
        insert_at_head(val, head);
        return;
    }

    node* temp = head;
    int count = 1;
    while(count < k-1 && temp->next != nullptr){
        temp = temp->next;
        count++;
    }

    node* curr = new node(val, temp->next);
    temp->next = curr;
}
// Explanation:
// Inserts a new node at the kth position. If k <= 1 or list is empty, inserts at head.
// Otherwise, traverses to (k-1)th node and links the new node after it.


// Insert a new node before a node containing target value
void insert_before_val(int val, int target, node* &head){
    if(head == nullptr) return;

    if(head->data == target){
        insert_at_head(val, head);
        return;
    }

    node* temp = head;
    while(temp->next != nullptr && temp->next->data != target){
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout << "Target value " << target << " not found\n";
        return;
    }

    node* newnode = new node(val, temp->next);
    temp->next = newnode;
}
// Explanation:
// Finds the node before the node containing target value.
// Inserts a new node before it. Handles head insertion and value-not-found safely.


// Delete the head node
void delete_head(node* &head){
    if(head == nullptr) return;

    node* temp = head;
    head = head->next;
    delete temp;
}
// Explanation:
// Deletes the first node of the list and updates head pointer. Safe for empty list.


// Delete the tail node
void delete_tail(node* &head){
    if(head == nullptr) return;

    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }

    node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}
// Explanation:
// Loops to the second-last node and deletes the last node.
// Updates second-last node's next to nullptr. Works even if list has one node.


// Delete node at position k (1-indexed)
void delete_at_position_k(int k, node* &head){
    if(head == nullptr) return;
    if(k <= 1){
        delete_head(head);
        return;
    }

    node* temp = head;
    int count = 1;
    while(count < k-1 && temp->next != nullptr){
        temp = temp->next;
        count++;
    }

    if(temp->next == nullptr) return; // position out of bounds

    node* to_delete = temp->next;
    temp->next = to_delete->next;
    delete to_delete;
}
// Explanation:
// Deletes the node at the kth position. Handles head deletion separately.
// If k > length, nothing happens.


// Delete node containing target value
void delete_val(int target, node* &head){
    if(head == nullptr) return;

    if(head->data == target){
        delete_head(head);
        return;
    }

    node* temp = head;
    while(temp->next != nullptr && temp->next->data != target){
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout << "Target value " << target << " not found\n";
        return;
    }

    node* to_delete = temp->next;
    temp->next = to_delete->next;
    delete to_delete;
}
// Explanation:
// Deletes the first node containing target value. Handles deletion at head safely.
// If target is not found, prints a message.


// MAIN FUNCTION: demo all operations
int main(){
    vector<int> arr = {2,3,4,6};
    node* head = convert_array_to_linkedlist(arr);

*/

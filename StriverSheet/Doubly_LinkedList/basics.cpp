#include<iostream>
#include<vector>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int data1){
        data = data1;
        back = nullptr;
        next = nullptr;
    }
    node(int data1,node* back1,node* next1){
        data = data1;
        back = back1;
        next = next1;
    }
    node(int data1,node* back1){
        data = data1;
        back = back1;
        next = nullptr;
    }
};
// converting arr to linked list
node* convert_arr_to_doubly_linkedlist(vector<int> &arr){
    if(arr.size()==0)return nullptr;
    node* head = new node(arr[0],nullptr,nullptr);
    node* prev = head;

    for(int i = 1; i < arr.size();i++){
        node* temp = new node(arr[i],prev);
        prev->next = temp;  // pointed the previous to temp node
        prev = temp;   // update the previous node 

    }
    return head;
}

// traverse code
void traverse_doubly_linkedlist(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// INSERTION CODES
    // at head

    node* insert_at_head(int val, node* &head){
        if(head == nullptr) {
            node* temp = new node(val);
            head = temp;
            return head;
        }
        node* temp = new node(val);
        temp->next = head;
        head->back = temp;
        head = temp;
        return head;
    }

    // at tail
    node* insert_at_tail(int val, node* &head){
        
        if(head == nullptr) {
            head = new node(val);
            return head;
        }
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        node* newTail = new node(val);
        newTail->back = temp;
        temp->next = newTail;
        return head;
    }

    // insertion a kth position
    node* insert_at_k(int val, int k, node* &head){
        if(k == 1 || head == nullptr){  // at head insert val
            node* temp = new node(val);
            temp->next = head;
            head->back = temp;
            head = temp;
            return head;
        }
        node* temp = head;
        int count = 1;
        while(k > 1  && temp->next != nullptr){
            if(count == k-1) break;
            temp = temp->next;
            count++;
        }
        node* addNode = new node(val);
        if(temp->next == nullptr){  // if to add at tail no front node needed
            temp->next = addNode;
            addNode->back = temp;
            return head;
        }
        else {
            node* front = temp->next;
            addNode->next = front;
            front->back = addNode;
            temp->next = addNode;
            addNode->back = temp;
        }
        return head;

    }
    // insertion before kth value
    node* insert_before(int val, int k, node* &head){
        if(head == nullptr){
            head = new node(val);
            return head;
        }
        if(head->data == k){
            node* temp = new node(val);
            temp->next = head;
            head->back = temp;
            head = temp;
            return head;
        }
        node* temp = head;
        while(temp->data != k && temp ->next != nullptr){
            temp = temp->next;
        }
        if(temp->data != k && temp->next ==nullptr) {
            cout << "no such value" <<endl;
            return head;
        }
        node* prev = temp->back;  //back node    //back --> temp-->front
        // node* front = temp->next; //front node
        node* newnode = new node(val);
        newnode->next = temp;
        temp->back = newnode;
        newnode->back = prev;
        prev->next = newnode;
        return head; 
    }

// DELETION CODE
    // delete head
    node* delete_head(node* head){
        if(head == nullptr ||head->next == nullptr) return nullptr;
        node* temp = head;
        head = temp->next;
        head->back = nullptr;
        temp->next = nullptr;
        delete temp;
        return head;

    }

    // deletion at tail
    node* delete_tail(node* &head){
        if(head == nullptr || head->next == nullptr) return nullptr;
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        node* prev = temp->back;
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;

    }

    // delete kth element
    node* delete_k(int k, node* &head){
        if(head == nullptr || head->next == nullptr)return nullptr; //empty doubly linked list
        if(k == 1 ){//single element in doubly linked list
            node* temp = head;
            head = temp->next;
            head->back = nullptr;
            delete temp;
            return head;
        }
        node* temp = head;
        int count = 1;
        while(temp != nullptr){
            if(count == (k))break;
            temp = temp->next;
            count++;
        }
        if(temp->next == nullptr){
            node* prev = temp->back;
            prev->next = nullptr;
            temp->back = nullptr;
            delete temp;
            return head;
        }
        node* prev = temp->back;
        node* front = temp->next;
        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return head;
    }

    // delete aa value,node
    node* delete_val(int val, node* &head){
        if(head == nullptr) return nullptr;
        if(head->data == val){
            node* temp = head;
            head = temp->next;
            head->back = nullptr;
            delete temp;
            return head;
        }
        node* temp = head;
        while( temp->next != nullptr && temp->data != val ){
            temp = temp->next;
        }
        if(temp->next == nullptr && temp->data == val){
            node* prev = temp->back;
            prev->next = temp->back=nullptr;
            delete temp;
            return head;   
        }
        if(temp ->next == nullptr && temp->data != val){
            cout << "no such node exixst" <<endl;
            return head;
        } 
        node* prev = temp->back;
        node* front = temp ->next;
        prev->next = front;
        front->back = prev;
        temp->next = temp->back = nullptr;
        delete temp;
        return head;

    }
int main(){
    
    vector<int> arr = {2,3,4,5,6};

    node* head = convert_arr_to_doubly_linkedlist(arr);

    // traverse in a linked list
    traverse_doubly_linkedlist(head);

    // INSERTION IN DOUBLY LINKEDLIST
        // at head

        head = insert_at_head(100,head);
        cout << "100 is added at the head : " ;
        traverse_doubly_linkedlist(head);

        // at tail
        head = insert_at_tail(200,head);
        cout<< "value 200 added at tail : ";
        traverse_doubly_linkedlist(head);

        // at position k 
        head = insert_at_k(300,3,head);
        cout <<"300 added to 3 place : ";
        traverse_doubly_linkedlist(head);

        //bfore value k
        head = insert_before(400,5,head);
        cout << "value 400 is added before 5 : ";
        traverse_doubly_linkedlist(head);

        
    //  DELETION IN DOUBLY LINKEDLIST
        // delete head
        head = delete_head(head);
        cout << "DELTED head 100 : ";
        traverse_doubly_linkedlist(head);

        // delete tail
        head = delete_tail(head);
        cout << "deleted tail 200 : ";
        traverse_doubly_linkedlist(head);

        // delete an element at k th position
        head = delete_k(3,head);
        cout << "deleted 300 from 3rd position : ";
        traverse_doubly_linkedlist(head);

        // delete an elemet 
        head = delete_val(400,head);
        cout << "deleted 400 from the doubly linked list : ";
        traverse_doubly_linkedlist(head);
}
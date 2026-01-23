#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* back;

    node(int data1){
        data = data1; next = nullptr; back = nullptr;
    }
    node(int data1, node* next1,node* back1){
        data = data1 ; next = next1; back = back1;
    }
    
};

node* convert_to_DLL(vector<int> &arr){
    if(arr.size()== 0)return nullptr;
    node* head = new node(arr[0]);
    node* mover = head;

    for(int i = 1; i < arr.size();i++){
        node* temp = new node(arr[i]);
        temp->back = mover;
        mover->next = temp;
        mover = temp;        
    }
    return head;
}

void forward_traverse_in_DLL(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void backward_traverse_in_DLL(node* &head){
    if(head == NULL ) return;
    if(head->next == NULL){
        cout << head->data <<endl;
        return;
    }
    node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    
    while(temp!= nullptr){
        cout << temp->data << " ";
        temp = temp->back;
    }
    cout << endl;

}

// reversing usinng stack data structure
node* reverse_dll_using_stack(node* &head){
    if(head == NULL) return nullptr; //empty dll
    if(head->next == nullptr) return head; //single element dll

    else{
        stack <int> st ;
        node* temp = head;
        while(temp != NULL){
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL){
            temp->data = st.top();
            st.pop();
            temp = temp->next;
        }
        return head;
    }
    return nullptr;

}

// reverse a dll
node* reverse_DLL(node* &head){
    if(head ==NULL || head->next == nullptr) return head;
    node* curr = head;
    node* prev = nullptr;
    while(curr != NULL){
        prev = curr->back;
        curr->back = curr->next;
        curr->next = prev;
        curr = curr->back;
    }
    return prev->back;
}

int main(){
    vector <int> arr= {2,3,4,5,6,7,8};

    node* head = convert_to_DLL(arr);

    cout << "forward traverse : " ;
    forward_traverse_in_DLL(head);

    cout << "backward traverse : " ;
    backward_traverse_in_DLL(head);

    // method 1 (use stack)
    head = reverse_dll_using_stack(head);

    cout << "reversed using stack : ";
    forward_traverse_in_DLL(head);
 
    //method 2 (reverse the links between two node)
    head = reverse_DLL(head);
    cout << "reversed by reversing the links : " ;
    forward_traverse_in_DLL(head);
}
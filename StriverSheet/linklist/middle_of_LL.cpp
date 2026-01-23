// Write a code in cpp to find the middle of the linked list also create linkelist wtih give array 
#include <iostream>
#include <vector>

using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data1){
        data = data1;
        next = nullptr;
    }
};

// convert to LL
ListNode* Convert_to_LinkedList(vector <int> arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;
    for(int i = 1; i < arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Traverse in a linked list

void Traverse_LL(ListNode* &head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Middle_of_LL(ListNode* &head){
    ListNode*  fast = head;
    ListNode* slow = head;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}
int main(){
    vector <int> arr = {2,4,5,6,7,8};

    ListNode* head = Convert_to_LinkedList(arr);

    Traverse_LL(head);

    cout << "Middle of the LInked LIst : " ;
    cout << Middle_of_LL(head);
}
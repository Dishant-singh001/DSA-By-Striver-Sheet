#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* contvert_Arr2LL(vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i < arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

string search_in_LL(node* head,int target){
    node* temp = head;
    while(temp){
        if(temp->data == target) return "found";
        else temp = temp->next;
    }
    return "not found";
}

int main(){
    vector <int> arr = {12,15,17,19,21,29};
    node* head = contvert_Arr2LL(arr);
    int target = 15;
    cout<< search_in_LL(head,target);

}
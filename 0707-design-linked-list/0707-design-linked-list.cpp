class MyLinkedList {
public:
  struct Node{
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=NULL;
    }
  };
  Node* head;
    MyLinkedList() {
        head=NULL;
    }
    //get value at index
    int get(int index) {
        Node* temp=head;
        int i=0;
        while(temp!=NULL){
            if(i== index){
                return temp->val;
            }
            temp=temp->next;
            i++;
        }
        return -1;
    }
    //insert at beginning
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    //insert at end
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    //insert at given index
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        Node* temp=head;
        //index-1 position tk traverse
        for(int i=0;i<index-1;i++){
            if(temp==NULL){return;}
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    //delete node at index
    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            if(temp==NULL || temp->next==NULL){
                return;
            }
            temp=temp->next;
        }
        if(temp->next==NULL){
            return;
        }
        Node* deleteNode=temp->next;
        temp->next=deleteNode->next;
        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
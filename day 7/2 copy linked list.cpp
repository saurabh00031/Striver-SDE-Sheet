
class Solution {
public:

    Node* copyRandomList(Node* head) {
        // create new nodes by inserting them in between the original nodes
        if(!head)
            return NULL;
        Node *curr = head;
        Node *temp;
        
        while(curr) {
            // store the next pointer
            temp = curr->next;
            // add new node
            curr->next = new Node(curr->val);
            // make new node point to next node
            curr->next->next = temp;
            curr = temp;
        }
        // copy the random pointers to the new nodes
        // for a node curr, curr->next is the newly created copy node
        curr = head;
        while(curr) {
            // random pointer could be NULL too.
            curr->next->random = curr->random ? curr->random->next : NULL;
            // move to the next original node
            curr = curr->next->next;
        }
        // separate the two lists and restore the links of the original linked list
        Node *original = head;
        Node *copy = head->next;
        Node *result_ptr = copy;
        
        while(original && copy) {
            // make original point to next original node
            original->next = copy->next;
            // make copy point to next copy node
            copy->next = copy->next ? copy->next->next : NULL;
            // move to the next nodes
            original = original->next;
            copy = copy->next;
        }
        return result_ptr;
    }
};
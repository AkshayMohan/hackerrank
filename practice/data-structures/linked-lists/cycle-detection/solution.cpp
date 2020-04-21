bool has_cycle(SinglyLinkedListNode* head) {

    std::unordered_set<SinglyLinkedListNode*> node_set;
    while(head != nullptr) {

        if(node_set.find(head) != node_set.end())
            return true;

        node_set.insert(head);
        head = head->next;
    }
    return false;
}

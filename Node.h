#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* link;
public:
    Node(int data, Node* link);
    int getData(){return this->data;}
    Node* getLink(){return this->link;}
    void setData(int data){this->data = data;}
    void setLink(Node* link){this->link = link;}

};


#endif // NODE_H

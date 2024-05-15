#include "interface.h"
#ifndef LinkedListBST_h
#define LinkedListBST_h

class Node{
    public:
        int info;
        Node *left;
        Node *right;
        Node *parent;

        Node(){
            left = nullptr;
            right = nullptr;
            parent = nullptr;
        }
        ~Node(){}
};

class LinkedListBST : public BST {
    protected:
        Node *root;
    public:
        LinkedListBST(){root = nullptr;}
        ~LinkedListBST(){}
        bool isEmpty();
        void addBST(int data);
        bool removeBST(int data);
        bool searchBST(int data);
};



#endif
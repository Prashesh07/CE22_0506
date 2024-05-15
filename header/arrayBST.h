#include "interface.h"
#ifndef arrayBST_h
#define arrayBST_h


class ArrayNode
{
    int key;
    int value;
    ArrayNode(int key ,int value) : key(key),value(value) {}
};

class ArrayBinarySearchTree : public BST
{   
    public:
    ArrayBinarySearchTree(){};
    ~ArrayBinarySearchTree(){};
     bool isEmpty() ;
     void addBST(int key,int value ) ;
     bool removeBST(int ) ;
     bool searchBST(int ) ;

    private:
     

};


#endif
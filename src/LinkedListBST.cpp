#include "LinkedListBST.h"
#include <iostream>
using namespace std;

bool LinkedListBST :: isEmpty() {
    if(root == NULL){
        return true;
    }
    else
        return false;
}

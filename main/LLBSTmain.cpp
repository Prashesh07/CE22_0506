#include "../header/LinkedListBST.h"
#include <iostream>
int main()
{
    LinkedListBST list;
    if (list.isEmpty())
    {
        std::cout << "The Binary search Tree is empty";
    }
    list.add(1);
    list.add(4);
    list.add(9);
    if (list.search(4))
    {
        std::cout << "\nThe element is found";
    }
    list.remove(9);
    if (!list.search(9))
    {
        std::cout << "\nThe element was deleted";
    }
}
#include "../header/arrayBST.h"
#include <iostream>

int main()
{
    ArrayBST tree;
    if (tree.isEmpty())
    {
        std::cout << "The Binary search Tree is empty" << std::endl;
    }
    tree.add(28);
    if (!tree.isEmpty())
    {
        std::cout << "The Binary search Tree is not empty" << std::endl;
    }

    tree.add(42);
    tree.add(7);
    if (tree.search(7))
    {
        std::cout << "The element is found" << std::endl;
    }
    tree.remove(7);
    if (!tree.search(7))
    {
        std::cout << "The element was deleted" << std::endl;
    }

    return 0;
}
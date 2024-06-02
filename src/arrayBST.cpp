#include "../header/arrayBST.h"
#include <iostream>

ArrayBST::ArrayBST() : size(0)
{
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        nodes[i] = -1; 
    }
}

bool ArrayBST::isEmpty()
{
    return size == 0;
}

void ArrayBST::add(int data)
{
    if (size == MAX_SIZE)
    {
        std::cout << "Tree is full" << std::endl;
        return;
    }

    if (isEmpty())
    {
        nodes[0] = data;
        size++;
        return;
    }

    int index = 0;
    while (index < MAX_SIZE && nodes[index] != -1)
    {
        if (data < nodes[index])
        {
            index = 2 * index + 1;
        }
        else if (data > nodes[index])
        {
            index = 2 * index + 2;
        }
        else
        {
            return; 
        }
    }

    if (index < MAX_SIZE)
    {
        nodes[index] = data;
        size++;
    }
}

bool ArrayBST::search(int data)
{
    int index = 0;
    while (index < MAX_SIZE && nodes[index] != -1)
    {
        if (nodes[index] == data)
        {
            return true;
        }
        if (data < nodes[index])
        {
            index = 2 * index + 1; 
        }
        else
        {
            index = 2 * index + 2; 
        }
    }
    return false;
}

void ArrayBST::remove(int data)
{
    int index = 0;
    while (index < MAX_SIZE && nodes[index] != -1 && nodes[index] != data)
    {
        if (data < nodes[index])
        {
            index = 2 * index + 1; 
        }
        else
        {
            index = 2 * index + 2; 
    }

    if (index >= MAX_SIZE || nodes[index] == -1)
    {
        std::cout << "Node not found" << std::endl;
        return;
    }

    nodes[index] = -1;
    size--;

 
    int leftIndex = 2 * index + 1;
    int rightIndex = 2 * index + 2;

    if (leftIndex < MAX_SIZE && nodes[leftIndex] != -1)
    {
        int value = nodes[leftIndex];
        nodes[leftIndex] = -1;
        size--;
        add(value);
    }

    if (rightIndex < MAX_SIZE && nodes[rightIndex] != -1)
    {
        int value = nodes[rightIndex];
        nodes[rightIndex] = -1;
        size--;
        add(value);
    }
}
}


#include <iostream>
#include <ctime>
#include <cstdlib>

struct Node
{
    int data;
    Node *pNext = NULL;
};
//---------------------------------------------------
struct List
{
    int len = 0;
    Node *pHead = NULL;
};
//---------------------------------------------------
void Print(const List& lst)
{
    std::cout << '\n';
    Node *it = lst.pHead;
    while (it){
        std::cout << it->data << '\t';
        it = it->pNext;
    }
    std::cout << "------------" << std::endl;
}
//---------------------------------------------------
void Add(List& lst, int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->pNext = lst.pHead;
    lst.pHead = new_node;
    ++lst.len;
}
//---------------------------------------------------
int Pop(List &lst)
{
    if (lst.len == 0){
        return -1;
    }
    Node *pop_item = lst.pHead;
    int ret_val = pop_item->data;
    lst.pHead = lst.pHead->pNext;
    delete pop_item;
    --lst.len;
    return ret_val;
}
//---------------------------------------------------
//int Push(List &lst)
//{
//    if (lst.len == 0){
//        return -1;
//    }
//    Node *push_item = lst.pHead;
//    Node *it = lst.pHead;
//
//    while (push_item){
//            it = it->pNext;
//        if (it){
//            push_item = push_item->pNext;
//            std::cout << '*';
//            continue;
//        }
//        else {
//            int ret_val = push_item->data;
//
//            push_item = NULL;
//            delete push_item;
//            --lst.len;
//            return ret_val;
//        }
//    }
//
//
//}

//---------------------------------------------------
void Insert(List &lst, int data, int pos)
{
    if (lst.len < pos){
        return;
    }
    Node *new_node = new Node;
    new_node->data = data;
    Node *it = lst.pHead;
    int Count = 0;
    while (it && Count != pos){
        ++Count;
        it = it->pNext;
    }
    new_node->pNext = it->pNext;
    it->pNext = new_node;
    ++lst.len;
}
//---------------------------------------------------
//void Delete(List &lst, int pos)
//{
//    if (lst.len < pos){
//        return;
//    }
//        Node *new_node = new Node;
//    new_node->data = data;
//    Node *it = lst.pHead;
//    int Count = 0;
//    while (it && Count != pos){
//        ++Count;
//        it = it->pNext;
//    }
//    new_node->pNext = it->pNext;
//    it->pNext = new_node;
//    ++lst.len;
//}
//---------------------------------------------------
void SortData(List &lst)
{
    Node *Sort = lst.pHead;
    Node *item = lst.pHead;

    if (item != NULL){
        while (item->pNext != NULL){
            Sort = item->pNext;
            do {
                if (Sort->data < item->data){
                    int temp = Sort->data;
                    Sort->data = item->data;
                    item->data = temp;
                }
                Sort = Sort->pNext;
            }
            while (Sort != NULL);
            item = item->pNext;
        }
    }
}
//---------------------------------------------------
void SortPtr(List &lst)
{
     Node *prevItem = NULL;
     Node *postItem = NULL;
     Node *midlItem = NULL;
     Node *SNode = NULL;
     Node *temp = NULL;

     while (SNode != lst.pHead->pNext){
        prevItem = lst.pHead;
        postItem = prevItem->pNext;
        midlItem = lst.pHead;

        while (prevItem != SNode) {
            if (prevItem->data > postItem->data){
                if (prevItem == lst.pHead){
                    temp = postItem -> pNext;
                    postItem->pNext = prevItem;
                    prevItem->pNext = temp;
                    lst.pHead = postItem;
                    midlItem = postItem;
                }
                else {
                    temp = postItem->pNext;
                    postItem->pNext = prevItem;
                    prevItem->pNext = temp;
                    midlItem->pNext = postItem;
                    midlItem = postItem;
                }
            }
            else {
                midlItem = prevItem;
                prevItem = prevItem->pNext;
            }
            postItem = prevItem->pNext;

            if(postItem == SNode){
                SNode = prevItem;
            }
        }
    }
}

//---------------------------------------------------

int main()
{
    srand(time(0));
//    int arr[10] = { 70, 3, 25, 1, 0, 8, 0, 5, 9, 44 };
//    int arr2[10] = { 12, 4, 8, 10, 0, 4, 33, 51, 92, 41 };
    List my_list1;
    List my_list2;
    for ( int i = 0; i < 10 ; ++i )
    {
        Add(my_list1, rand()%100);
    }

    for ( int i = 0; i < 10 ; ++i )
    {
        Add(my_list2, rand()%100);
    }

//    Print(my_list1);
//    Pop(my_list1);
//    Push(my_list1);
//    Print(my_list2);
    std::cout << "\nSort from data\n";
    Print(my_list1);
    SortData(my_list1);
    Print(my_list1);
    std::cout << "\nSort from ptr\n";
    Print(my_list2);
    SortPtr(my_list2);
    Print(my_list2);
}

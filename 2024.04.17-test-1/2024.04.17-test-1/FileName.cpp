#include <iostream>

struct SNode
{
    int data;
    SNode* next;
    SNode(int data, SNode* next = nullptr) : data(data), next(next) {}
    SNode(const SNode& node) : data(node.data), next(nullptr) {}
    ~SNode();
    friend std::ostream& operator<<(std::ostream& stream, SNode*& node)
    {
        stream << node->data << " ";
        return stream;
    }
};

class CLinkedList
{
public:
    CLinkedList() : head(nullptr) {}
    CLinkedList(const CLinkedList& list) : head(list.head) {}
    ~CLinkedList();
    int Length();
    bool IsEmpty() { return head == nullptr; }
    int PopHead();
    void PushTail(int data);
    void PushHead(int data);
    int PopTail();
    void Insert(int index, int data);
    int Extract(int index);
    int Data(int index);
    void swap(int ia, int ib);
    void sort();
    friend std::ostream& operator<<(std::ostream& stream, const CLinkedList& list);

private:
    SNode* head;
    SNode* ExtractNode(int index);
    void dispose();
    void InsertNode(int index, SNode* node);
    int PopData(SNode* node);
    bool IndexValid(int index);
};

int main(int argc, char* argv[])
{
    CLinkedList list;
    std::cout << list << std::endl;
    list.PushHead(1);
    std::cout << list << std::endl;
    list.PushTail(3);
    std::cout << list << std::endl;
    list.Insert(1, 2);
    std::cout << list << std::endl;
    list.Insert(3, 4);
    std::cout << list << std::endl
        << std::endl;
    std::cout << list << std::endl;
    std::cout << list.PopHead() << " ";
    std::cout << list.Extract(1) << " ";
    std::cout << list.PopTail() << " ";
    std::cout << list.Extract(0) << std::endl;
    std::cout << list << std::endl
        << std::endl;
    list.PushHead(3);
    list.PushHead(4);
    list.PushHead(1);
    list.PushHead(2);
    list.PushHead(7);
    list.PushHead(5);
    list.PushHead(8);
    list.PushHead(6);
    std::cout << list << std::endl;
    list.sort();
    std::cout << list << std::endl;

    return EXIT_SUCCESS;
}

SNode::~SNode()
{
    data = 0;
    next = nullptr;
}
CLinkedList::~CLinkedList()
{
    dispose();
}
int CLinkedList::Length()
{
    int len = 0;
    SNode* tmp = head;
    while (tmp != nullptr)
    {
        tmp = tmp->next;
        ++len;
    }
    return len;
}


int CLinkedList::PopHead()
{
    return PopData(ExtractNode(0));
}

void CLinkedList::PushTail(int data)
{
    SNode* node = new SNode(data);
    InsertNode(Length(), node);
}

void CLinkedList::PushHead(int data)
{
    SNode* node = new SNode(data);
    InsertNode(0, node);
}

int CLinkedList::PopTail()
{
    return PopData(ExtractNode(Length() - 1));
}

void CLinkedList::Insert(int index, int data)
{
    SNode* node = new SNode(data);
    InsertNode(index, node);
}

int CLinkedList::Extract(int index)
{
    return PopData(ExtractNode(index));
}

int CLinkedList::Data(int index)
{
    if (!IndexValid(index) || (Length() - 1 < index))
    {
        return -1;
    }
    SNode* tmp = head;
    for (int i = 0; i < index; ++i)
    {
        tmp = tmp->next;
    }
    int res = tmp->data;
    return res;
}

void CLinkedList::swap(int ia, int ib)
{
    if (!IndexValid(ia) || !IndexValid(ib) || ia == ib)
    {
        return;
    }
    if (ia > ib)
    {
        int tmp = ib;
        ib = ia;
        ia = tmp;
    }
    SNode* nodeB = ExtractNode(ib);
    SNode* nodeA = ExtractNode(ia);
    if (nodeA == nullptr || nodeB == nullptr)
    {
        return;
    }
    InsertNode(ia, nodeB);
    InsertNode(ib, nodeA);
}

void CLinkedList::sort()
{
    for (int i = 0; i < Length(); i++)
    {
        for (int j = 0; j < Length() - 1; j++)
        {
            if (Data(j) > Data(j + 1))
            {
                swap(j, j + 1);
            }
        }
    }
}

bool CLinkedList::IndexValid(int index)
{
    if (index < 0 || index > Length())
    {
        return false;
    }
    return true;
}

void CLinkedList::dispose()
{
    while (!IsEmpty())
    {
        SNode* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void CLinkedList::InsertNode(int index, SNode* node)
{
    if (!IndexValid(index))
    {
        return;
    }
    if (index == 0)
    {
        node->next = head;
        head = node;
        return;
    }
    if (index == Length())
    {
        SNode* tmp = head;
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = node;
        return;
    }
    if (index < Length())
    {
        SNode* tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        node->next = tmp->next;
        tmp->next = node;
        return;
    }
}

int CLinkedList::PopData(SNode* node)
{
    if (node == nullptr)
    {
        return 0;
    }
    int res = node->data;
    delete node;
    return res;
}

SNode* CLinkedList::ExtractNode(int index)
{
    if (!IndexValid(index))
    {
        return nullptr;
    }
    if (index == 0)
    {
        SNode* tmp = head;
        head = head->next;
        return tmp;
    }
    if (index == Length() - 1)
    {
        SNode* tmp = head;
        while (tmp->next->next != nullptr)
        {
            tmp = tmp->next;
        }
        SNode* res = tmp->next;
        tmp->next = nullptr;
        return res;
    }
    if (index < Length())
    {
        SNode* tmp = head;
        for (int i = 0; i < index - 1; i++)
        {
            tmp = tmp->next;
        }
        SNode* res = tmp->next;
        tmp->next = tmp->next->next;
        return res;
    }
    return nullptr;
}

std::ostream& operator<<(std::ostream& stream, const CLinkedList& list)
{
    SNode* tmp = list.head;
    while (tmp != nullptr)
    {
        stream << tmp << " ";
        tmp = tmp->next;
    }
    return stream;
}
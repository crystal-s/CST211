/**********************
Crysal Stevens
Quiz 1
CST 211
October 13, 2015
************************/

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

template <typename T>
struct list
{
	ListNode * head;
	ListNode * tail;
};

template <typename T>
struct ListNode
{
	T * data;
	ListNode * next; 
	ListNode * prev;

};


void main()
{
	list <int> *first = new list<int>;
	first->create_list();
	first->add_node(5);
	first->add_node(7);
	first->add_node(10);

	cout << first->start_node() << endl;
	cout << first->end_node() << endl;

	first->remove_node();

	cout << first->start_node() << endl;
	cout << first->end_node() << endl;

	first->clear_list();
	cout << first->start_node() << endl;
	cout << first->end_node() << endl;


}

/*********************
Sets all pointers
***********************/
template <typename T>
list<T> create_list()
{
	head = nullptr;
	tail = nullptr;
	head.next = nullptr;
	head.prev = nullptr;
	tail.next = nullptr;
	tail.prev = nullptr;
}


/*******************************
Adds a new node to the end
********************************/
template <typename T>
ListNode<T> add_node(T input)
{
	new sizeof(struct ListNode) = NewNode;
	if (head == nullptr)
	{
		NewNode = head;
		NewNode = tail;
		return *this;
	}

	else if(tail == head)
	{
		head.next = NewNode;
		tail.prev = head;
		tail = NewNode;
		return *this;

	}

	else 
	{
		NewNode.prev = tail;
		tail = NewNode;
		return *this;
	}

	data = input;
}

/***************************
Removes a node from the end
****************************/
template <typename T>
ListNode<T> remove_node()
{
	while (tail !nullptr)
	{
		tail.prev = tail;
		delete tail;
		
	}

}

/****************************
removes all nodes in the list
*****************************/

template <typename T>
ListNode<T> clear_list()
{
	new sizeof(struct ListNode) = NewNode;
	ListNode * DeletedNode = head;

	while (DeletedNode.next != nullptr)
	{
		Node * NewNode = DeletedNode.next;
		delete DeletedNode;
		DeletedNode = NewNode;
	}

	delete DeletedNode;

}


/****************************
returns head node
*****************************/
template <typename T>
list<T> start_node()
{
	return list.head
}



/****************************
returns tail node
******************************/

template <typename T>
list<T> end_node()
{
	return list.tail;
}
#pragma once
class Node
{
	int data;
	Node* next;
	Node* prev;
public:
	Node();

	//data
	int getData();
	void setData(int data);
	//Next
	Node* getNext();
	void setNext(Node* next);
	//prev
	Node* getPrev();
	void setPrev(Node* prev);

	~Node();

};


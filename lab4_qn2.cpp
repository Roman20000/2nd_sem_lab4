#include<iostream>
#include"linkedlist.cpp"





using namespace std;




	class Stack {


	public:

	circle * top;

	linkedlist l1;

	Stack(){
	top=NULL;
	}

	void push(int value){
	l1.insertAt(1,value);
	top=l1.head;
	}

	void pop(){

	l1.delAt(1);
	top=l1.head;
	}

	bool isEmpty(){
	if(top==NULL){return true;}

	else return false;

	}

	int size(){

	return l1.count();

	}

	void display(){
	l1.display();
	}

	};



	class queue {


	public:
	Stack s1;
	Stack s2;

	void enqueue(int value){
	s1.push(value);
	}

	void dequeue() {
	//pushing elements in s1 to s2
	while(s1.top!=NULL){
	s2.push(s1.top->data);
	s1.pop();
	}

	s2.pop();//popping last element of s1

	//pushing elements of s2 back into s1
	while(s2.top!=NULL){
	s1.push(s2.top->data);
	s2.pop();

	}
	}

	void display(){
	s1.display();
	}

	};

		

	int main(){

	queue q1;

	q1.enqueue(2);
	q1.enqueue(5);
	q1.enqueue(8);
	q1.enqueue(6);
	q1.enqueue(9);
	
	q1.display();

	q1.dequeue();
	q1.display();

	}

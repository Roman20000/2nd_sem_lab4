#include<iostream>
#include "linkedlist.cpp"



using namespace std;



class queue {


	public:

	circle * end;
	circle * front;

	linkedlist l1;

	queue(){
	end=NULL;
	front=NULL;
	}

	void enqueue(int value){
	l1.insertAt(1,value);
	end=l1.head;
	}

	void dequeue(){

	l1.del();
	front=l1.tail;
	}

	bool isEmpty(){
	if(end==NULL){return true;}

	else return false;

	}

	int size(){

	return l1.count();

	}

	void display(){
	l1.display();
	}

	};


	int main(){


	queue q1;
	
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);

	q1.display();

	
	q1.dequeue();
	
	

	q1.display();

	int r = q1.size();

	cout<<"There are "<<r<<" elements."<<endl;
	
	cout<<q1.isEmpty()<<endl;


}

#include<iostream>
#include"linkedlist.cpp"





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
	if(end==NULL){
	front=l1.tail;}
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



	class stack{

	public:	
	
	queue q1;
	
	void push(int value){
	q1.enqueue(value);
	}

	void pop(){
	int n1=q1.size();

	int i=1;
	int temp;
	while(i<n1){
	i++;
	temp=q1.front->data;
	q1.dequeue();
	q1.enqueue(temp);
	}
	
	q1.dequeue();
	}	

	void display(){
	q1.display();
	}

	};
	




	int main(){

	stack s1;

	s1.push(1);
	s1.push(5);
	s1.push(3);
	s1.push(7);
	s1.push(8);
	s1.push(6);

	s1.display();

	s1.pop();
	s1.display();
	
}

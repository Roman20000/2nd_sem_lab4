#include<iostream>
#include "linkedlist.cpp"



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


	int main(){


	Stack s1;
	
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	s1.display();

	s1.pop();
	

	s1.display();

	int r = s1.size();

	cout<<"There are "<<r<<" elements."<<endl;
	
	cout<<s1.isEmpty()<<endl;


}

#include<iostream>


using namespace std;






	class queueArr{

	public:

	int arr[100],end=-1, front=0;

	void enqueue(int value){
	if(end>=99){
	cout<<"Queue overflow"<<endl;
	}
	else{
	end++;	
	arr[end]=value;
	}
	}

	void dequeue(){
	if(front>end){
	cout<<"No more elements in queue "<<endl;
	}
	else{
	front++;
	}
	}

	void display(){
	int i=front;
	while(i<=end){
	cout<<arr[i]<<"->";
	i++;
	}
	cout<<endl;
	}
	
	};

	int main(){
	
	queueArr q1;

	q1.enqueue(5);
	q1.enqueue(10);
	q1.enqueue(15);
	q1.enqueue(20);
	q1.enqueue(25);
	q1.enqueue(30);	
	q1.display();

	q1.dequeue();
	q1.display();
	
}

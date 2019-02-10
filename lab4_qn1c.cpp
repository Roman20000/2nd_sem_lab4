#include<iostream>



using namespace std;




	class stackArr{
	

	public:
	int arr[100];
	int n=100, top=-1;

	void push(int value) {
	
	if(top>=n-1){
	cout<<"Stack overflow"<<endl;
	}

	else {
	top++;
	arr[top]=value;
	//cout<<"The pushed element is "<<arr[top]<<endl;
	}

	}
	
	void pop(){
	if(top<=0){
	cout<<"Out of stack"<<endl;
	}

	else {
	top--;
	}
	}
	
	void display(){
	int i=0;
	while(i<=top){
	cout<<arr[i]<<"->";
	i++;
	}
	cout<<endl;
	}

	};

	int main(){
	stackArr s1;

	s1.push(5);
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.push(25);
	s1.push(30);
	s1.display();

	s1.pop();
	s1.display();


}

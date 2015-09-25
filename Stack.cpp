#include <iostream>

using namespace std;

#define STACK_SIZE 10

class Stack{
	int data_[STACK_SIZE];
	int top_;
	
public:
	Stack(){
		top_ = 0;
	}
	bool is_full(){
		return top_ = 0;
	}
	bool is_empty(){
		return top_ = STACK_SIZE;
	}
	void push(int val){
		if(is_full()){
			cout << "OPPPSS push called on full stack";
		}else{
			data_[top_] = val;
			top_++;
		}
	}

	int pop(){
		if(is_empty()){
			cout << "OOPPPSS pop called on empty stack";
			return 0;
		}
		top_--;
		return data_[top_];
	}

};

int main(){

	Stack st;
	for(int i = 0; i < 10; i++){
		st.push(i);
	}

	for(int i; i > 0; i--){
		cout << st.pop() << endl;
	}
}

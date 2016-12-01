//ASIDILLO
#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

	void menu(){
		
		cout<<"What do you like to do? \n";
		cout<<"1: Push \n";
		cout<<"2: Pop \n";
		cout<<"3: Display \n";
		cout<<"4: Exit \n";
		
	}

int main() {
  Stack * s = new Stack(100);
  
  int choice,n;
  menu();
  cout<<endl;
  
 
  	cout<<"Enter choice: ";
  	cin>>choice;
  
   	while(choice!=4){
   		
  	if(choice==1){
  		cout<<"Push: ";
  		cin>>n;
  		s -> push(n);
  		cout<<endl;
	  }
	  
	if(choice==2){
		
  		s -> pop();
  		s -> display();
  	
	  }
	  
	if(choice==3){
  		cout<<"Display: ";
  		s -> display();
  		cout<<endl;
	  }
	  
	  menu();
	  cout<<endl;
	  cout<<"Enter choice: ";
  	  cin>>choice;	
  	}
  	
  	
  
  return 1;
  

}

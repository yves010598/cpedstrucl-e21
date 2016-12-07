#include<iostream>

using namespace std;


int main(){
	
	
	int arr[5] = {1,2,3,4,5};
	int *ptr;
	
	ptr = arr;
	
	cout<<*ptr;
	cout<<*(ptr + 1);
	cout<<*(ptr + 2);
	cout<<*(ptr + 3);
	cout<<*(ptr + 4);
	
	
}

#include <iostream>
using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	bool next = true;
	char action = 'c';
	
	do {
		cout << "Type first number: " << endl;
		cin >> num1;
		cout << "Type second number: " << endl;
		cin >> num2;
		
		cout << "Type + or * for what you want to do" << endl;
		cin >> action;
		
		if(action == '+'){
			cout << "Your sum is " << num1 + num2 << endl;
		}else if(action == '*'){
			cout << "Your product is " << num1 * num2 << endl;
		}
		
		// cout << "Do you want to run again (y/n)?" << endl;
		
		
		// next = false;
	}	while (next);
	
	return 0;
}
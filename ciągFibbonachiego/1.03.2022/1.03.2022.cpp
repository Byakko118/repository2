#include <iostream>
using namespace std;
int Fibbonachi(int repeat){
	int firstNumber = 0;
	int secondNumber = 1;
	for (int i = 0; i  < repeat; i ++){
		if (firstNumber > secondNumber) {
			secondNumber += firstNumber;
			cout << secondNumber;
		} else {
			firstNumber += secondNumber;
			cout << firstNumber;
		}
		cout << endl;
	}
	return 0;
}
int main(){
	cout << "ile chcesz liczb fibbonachiego : ";
	int number;
	cin >> number;
	Fibbonachi(number);
}
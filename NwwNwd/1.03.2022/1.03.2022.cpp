#include <iostream>
using namespace std;
int Nww(int firstNumber, int secondNumber) {
	int number;
	int biggestNumber;
	if (firstNumber > secondNumber) {
		number = firstNumber;
	} else {
		number = secondNumber;
	}
	biggestNumber = number;
	while (true) {
		if (number % firstNumber == 0 && number % secondNumber == 0) {
			return number;
		}
		number += biggestNumber;
	}
	return 0;
}
int Nwd(int firstNumber, int secondNumber) {
	int number;
	if (firstNumber > secondNumber) {
		number = firstNumber;
	}
	else {
		number = secondNumber;
	}
	for (int i = number; i > 0; i--){
		if (firstNumber % i == 0 && secondNumber % i == 0) {
			return i;
		}
	}
	return 0;
}
int Nwn(int firstNumber, int secondNumber) {
	cout << "nww to " << Nww(firstNumber, secondNumber) << endl;
	cout << "nwd to " << Nwd(firstNumber, secondNumber) << endl;
	return 0;
}
int main(){
	int firstNumber = 0;
	int secondNumber = 0;
	cout << "podaj 2 liczby a ja znade nww i nwd \n";
	cin >> firstNumber;
	cin >> secondNumber;
	Nwn(firstNumber, secondNumber);
}
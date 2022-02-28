#include <iostream>
using namespace std;
int simpleNumber(int until) {
	//int number;
	//for (int i = 0; i < until; i++){
	int number = 0;
	int doUntil = 0;
	while(doUntil<until){
		bool write = true;
		for (int j = 2; j <= number / 2; j++) {
			if (number % j == 0) {
				write = false;
				break;
			}
		}
		if (write) {
			doUntil++;
			cout << number << endl;
		}
		number++;
	}
	return 0;
}
int main(){
	int number=0;
	cout << "ile chcesz liczb pierwszych ? \n";
	cin >> number;
	simpleNumber(number);
}

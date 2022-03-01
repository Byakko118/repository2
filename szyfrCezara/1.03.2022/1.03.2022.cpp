#include <iostream>
using namespace std;
string alfabet = "abcdefghijklmnoprstuvwxyz";
//string alfabet = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzżź";
string szyfrCezara(string szyfr) {
	string rozszyfrowane = "";
	string zaszyfrowane = "";
	for (int i = 0; i < szyfr.length(); i++){
		for (int j = 0; j < alfabet.length(); j++){
			if (szyfr[i] == alfabet[j]) {
				if (j - 2 >= 0) {
					zaszyfrowane += alfabet[j - 2];
				}else{
					zaszyfrowane += alfabet[alfabet.length() + (j - 2)];
				}
				if (j + 2 < alfabet.length()) {
					rozszyfrowane += alfabet[j + 2];
				}
				else {
					rozszyfrowane += alfabet[j + 2 - alfabet.length()];
				}
			}
		}
	}
	cout << rozszyfrowane << endl;
	cout << zaszyfrowane << endl;
	return rozszyfrowane;
}
int main(){
	//szyfrCezara("aąbcćdeęfghijklłmnńoóprsśtuvwxyzżź");
	cout << "podaj słowo tylko z małych nie polskich znaków\n";
	string words;
	cin >> words;
	szyfrCezara(words);
}
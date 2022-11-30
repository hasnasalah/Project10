// hasna ben jillali
//11/29/2022
// cis1202
#include<iostream>
using namespace std;

class invalidCharacterExeption{};
class invalidRangeExeption {};
// function prototype

char character(char , int );





int main() {
	cout << character ('a',-1) << endl;
	try
	{
		character('a', -1);
	}
	catch(invalidRangeExeption E) {
		cout << "Error! invalid character exeption" << endl;

	}
	try
	{
		character('?', 5);

	}
	catch (invalidCharacterExeption E) {
		cout << "Error! invalid character exeption";
	}
	try {
		character('A', 32);
	}
	catch (invalidCharacterExeption E)
	{
		cout << "Error! invalid characetr exeption" << endl;
	}
}

char character(char start, int offset) {
	int num;
	if ((start < 65 || start>90) && (start < 97 || start>122)) 
		throw invalidCharacterExeption();

		num = start + offset;

		if( (num < 65 || num>90) && (num < 97 || num>122)) 
		throw invalidCharacterExeption{};
		return char(num);

}
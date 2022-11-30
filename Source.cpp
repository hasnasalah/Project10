// hasna ben jillali
//11/29/2022
// cis1202
#include<iostream>
using namespace std;

class invalidCharacterExeption{};
class invalidRangeExeption {};
class invalidConversionExeption{};
// function prototype

char character(char , int );





int main(){
     cout << character ('a',-1) << endl;
	//cout << character('Z', -1) << endl;
	//cout << character('A', 32) << endl;
	return 0;
}

char character(char start, int offset) {
	int num;
	int ascii = int(start);

	num = ascii + offset;
	try {
		if ((ascii < 65 || ascii>90) && (ascii < 97 || ascii>122))
			throw invalidCharacterExeption();


		else if ((num < 65 || num>90) && (num < 97 || num>122))
			throw invalidRangeExeption{};

		else if ((num >= 65 || num >= 90) && (num <= 97 || num >= 1220))
			throw invalidConversionExeption();
	} 
	catch (invalidCharacterExeption a) {
		cout << " Error!invalid character exeption" << endl;
	}
	catch(invalidRangeExeption b )
	{
		cout << " Error!invalid Range exeption" << endl;
	}
	catch (invalidConversionExeption c)
	{
		cout << " Error!invalid conversion exeption" << endl;
	}



		return static_cast<char>(num);

}
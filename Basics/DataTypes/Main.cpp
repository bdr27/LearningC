#include <iostream>
#include <string>
using namespace std;

void sizeOf();
void typeDef();
void enumTypes();

int main()
{
	string input;
	sizeOf();
	typeDef();
	enumTypes();
	getline(cin, input);
	return 0;
}

void sizeOf()
{
	
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}

void typeDef()
{
	typedef int thisIsAStupidName;
	thisIsAStupidName i = 6;
	cout << "Type def: " << i * 6 << endl;
}

void enumTypes()
{
	enum keys {A = 0, B = 1, C = 2} key;
	key = C;
	cout << "Enum C (2): " << key << endl;
}
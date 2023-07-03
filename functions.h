#ifndef VIGENRE_CIPHER_pangilinan
#define VIGENRE_CIPHER_pangilinan

#include <cstring>
#include <string>
#include <vector>
using namespace std;

//----------Mechanism of your gun---------
	//StringToInt...convert string(a senctence) to integer(a whole number) with a type(this is custom made/not affiliated with coding language :D) and return a pairs of number&type in string  vector of it
	//StringToInt .... take note... all even numbers are not types
vector<string> StringToInt(string thisString);


	//VectorPairsToChar...convert the equivalent number with it type to its character
char VectorPairsToChar(string number, string typeChar);



//----------Below is your Gun....----------

	//Encrypt
string Vigenre_Encrypt(string message, string myKey);

	//Decrypt
string Vigenre_Decrypt(string message, string myKey);

#endif

#include "functions.h"
#include <algorithm>
vector<string> StringToInt(string thisString){
//thisString -->  thisChars[] --> returnStringsAndTypes[][] -->vector
//type: low, cap, others, white_space

	int amountOfChars = thisString.length();
	char thisChars[amountOfChars];
	strcpy(thisChars, thisString.c_str());

	string returnStringsAndTypes[amountOfChars][2];
	for(int i = 0; i < amountOfChars; i++){
		switch(thisChars[i]){
			case 'a':
				returnStringsAndTypes[i][0] = "1";
				returnStringsAndTypes[i][1] = "low";
				break;
			case 'b':
				returnStringsAndTypes[i][0] = "2";
				returnStringsAndTypes[i][1] = "low";
				break;
			case 'c':
                                returnStringsAndTypes[i][0] = "3";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'd':
                                returnStringsAndTypes[i][0] = "4";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'e':
                                returnStringsAndTypes[i][0] = "5";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'f':
                                returnStringsAndTypes[i][0] = "6";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'g':
                                returnStringsAndTypes[i][0] = "7";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'h':
                                returnStringsAndTypes[i][0] = "8";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'i':
                                returnStringsAndTypes[i][0] = "9";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'j':
                                returnStringsAndTypes[i][0] = "10";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'k':
                                returnStringsAndTypes[i][0] = "11";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'l':
                                returnStringsAndTypes[i][0] = "12";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'm':
                                returnStringsAndTypes[i][0] = "13";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'n':
                                returnStringsAndTypes[i][0] = "14";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'o':
                                returnStringsAndTypes[i][0] = "15";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'p':
                                returnStringsAndTypes[i][0] = "16";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'q':
                                returnStringsAndTypes[i][0] = "17";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'r':
                                returnStringsAndTypes[i][0] = "18";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 's':
                                returnStringsAndTypes[i][0] = "19";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 't':
                                returnStringsAndTypes[i][0] = "20";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'u':
                                returnStringsAndTypes[i][0] = "21";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'v':
                                returnStringsAndTypes[i][0] = "22";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'w':
                                returnStringsAndTypes[i][0] = "23";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'x':
                                returnStringsAndTypes[i][0] = "24";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'y':
                                returnStringsAndTypes[i][0] = "25";
                                returnStringsAndTypes[i][1] = "low";
				break;
			case 'z':
                                returnStringsAndTypes[i][0] = "26";
                                returnStringsAndTypes[i][1] = "low";
				break;
			
//=================================================================

			case 'A':
                                returnStringsAndTypes[i][0] = "1";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'B':
                                returnStringsAndTypes[i][0] = "2";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'C':
                                returnStringsAndTypes[i][0] = "3";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'D':
                                returnStringsAndTypes[i][0] = "4";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'E':
                                returnStringsAndTypes[i][0] = "5";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'F':
                                returnStringsAndTypes[i][0] = "6";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'G':
                                returnStringsAndTypes[i][0] = "7";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'H':
                                returnStringsAndTypes[i][0] = "8";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'I':
                                returnStringsAndTypes[i][0] = "9";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'J':
                                returnStringsAndTypes[i][0] = "10";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'K':
                                returnStringsAndTypes[i][0] = "11";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'L':
                                returnStringsAndTypes[i][0] = "12";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'M':
                                returnStringsAndTypes[i][0] = "13";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'N':
                                returnStringsAndTypes[i][0] = "14";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'O':
                                returnStringsAndTypes[i][0] = "15";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'P':
                                returnStringsAndTypes[i][0] = "16";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'Q':
                                returnStringsAndTypes[i][0] = "17";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'R':
                                returnStringsAndTypes[i][0] = "18";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'S':
                                returnStringsAndTypes[i][0] = "19";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'T':
                                returnStringsAndTypes[i][0] = "20";
                                returnStringsAndTypes[i][1] = "cap";
				break;
			case 'U':
                                returnStringsAndTypes[i][0] = "21";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'V':
                                returnStringsAndTypes[i][0] = "22";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'W':
                                returnStringsAndTypes[i][0] = "23";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'X':
                                returnStringsAndTypes[i][0] = "24";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'Y':
                                returnStringsAndTypes[i][0] = "25";
                                returnStringsAndTypes[i][1] = "cap";
				break;
                        case 'Z':
                                returnStringsAndTypes[i][0] = "26";
                                returnStringsAndTypes[i][1] = "cap";
				break;


//=======================================================================

			case '~':
                                returnStringsAndTypes[i][0] = "1";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '`':
                                returnStringsAndTypes[i][0] = "2";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '!':
                                returnStringsAndTypes[i][0] = "3";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '@':
                                returnStringsAndTypes[i][0] = "4";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '#':
                                returnStringsAndTypes[i][0] = "5";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '$':
                                returnStringsAndTypes[i][0] = "6";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '%':
                                returnStringsAndTypes[i][0] = "7";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '^':
                                returnStringsAndTypes[i][0] = "8";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '&':
                                returnStringsAndTypes[i][0] = "9";
                                returnStringsAndTypes[i][1] = "others";
				break;
                        case '*':
                                returnStringsAndTypes[i][0] = "10";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '(':
                                returnStringsAndTypes[i][0] = "11";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case ')':
                                returnStringsAndTypes[i][0] = "12";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '_':
                                returnStringsAndTypes[i][0] = "13";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '-':
                                returnStringsAndTypes[i][0] = "14";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '+':
                                returnStringsAndTypes[i][0] = "15";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '=':
                                returnStringsAndTypes[i][0] = "16";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '{':
                                returnStringsAndTypes[i][0] = "17";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '}':
                                returnStringsAndTypes[i][0] = "18";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '[':
                                returnStringsAndTypes[i][0] = "19";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case ']':
                                returnStringsAndTypes[i][0] = "20";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '\\':
                                returnStringsAndTypes[i][0] = "21";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '|':
                                returnStringsAndTypes[i][0] = "22";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case ':':
                                returnStringsAndTypes[i][0] = "23";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case ';':
                                returnStringsAndTypes[i][0] = "24";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '"':
                                returnStringsAndTypes[i][0] = "25";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '\'':
                                returnStringsAndTypes[i][0] = "26";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '<':
                                returnStringsAndTypes[i][0] = "27";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '>':
                                returnStringsAndTypes[i][0] = "28";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case ',':
                                returnStringsAndTypes[i][0] = "29";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '.':
                                returnStringsAndTypes[i][0] = "30";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '?':
                                returnStringsAndTypes[i][0] = "31";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '/':
                                returnStringsAndTypes[i][0] = "32";
                                returnStringsAndTypes[i][1] = "others";
                                break;
                        case '1':
                                returnStringsAndTypes[i][0] = "33";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '2':
                                returnStringsAndTypes[i][0] = "34";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '3':
                                returnStringsAndTypes[i][0] = "35";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '4':
                                returnStringsAndTypes[i][0] = "36";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '5':
                                returnStringsAndTypes[i][0] = "37";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '6':
                                returnStringsAndTypes[i][0] = "38";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '7':
                                returnStringsAndTypes[i][0] = "39";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '8':
                                returnStringsAndTypes[i][0] = "40";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '9':
                                returnStringsAndTypes[i][0] = "41";
                                returnStringsAndTypes[i][1] = "others";
                                break;
			case '0':
                                returnStringsAndTypes[i][0] = "42";
                                returnStringsAndTypes[i][1] = "others";
                                break;

//=================================================================

			case ' ':
                                returnStringsAndTypes[i][0] = "1";
                                returnStringsAndTypes[i][1] = "white_space";
                                break;
	//default: throw exception........
		}
	}

	vector<string> stringToInt;
	for(int i = 0; i < amountOfChars; i++){
		stringToInt.push_back(returnStringsAndTypes[i][0]);
		stringToInt.push_back(returnStringsAndTypes[i][1]);
	}
	return stringToInt;
}
/*======================================================================
 return the vector equivalent to that array
	its vector would be expected as...
		A,cap,B,cap,a,low,c,low, ,white_space,   etc....
		0,  1,2,  3,4,  5...

		all even numbers are not types, noted for the use of
		 loop next time.
= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
*/

char VectorPairsToChar(string number, string typeChar){
	char outputChar;
	char al_typeChar; //alias_typeChar
	int al_number = stoi(number);
//======================================================================================================================================================
										//I got to convert the string typeChar into each equivalent chars because
										// switch case only works with int, chars...etc... and not strings!
/*
	o //others
	c //cap
	l //low
	w //white_space
*/
//======================================================================================================================================================
	if(typeChar == "others"){
		al_typeChar = 'o';
	}else if(typeChar == "cap"){
		al_typeChar = 'c';
	}else if(typeChar == "low"){
		al_typeChar = 'l';
	}else{
		al_typeChar = 'w';
	}
	if(al_typeChar == 'l'){
		switch(al_number){
                        case 1:
                                outputChar = 'a';
                                break;
                        case 2:
                                outputChar = 'b';
                                break;
                        case 3:
                                outputChar = 'c';
                                break;
                        case 4:
                                outputChar = 'd';
                                break;
                        case 5:
                                outputChar = 'e';
                                break;
                        case 6:
                                outputChar = 'f';
                                break;
                        case 7:
                                outputChar = 'g';
                                break;
                        case 8:
                                outputChar = 'h';
                                break;
                        case 9:
                                outputChar = 'i';
                                break;
                        case 10:
                                outputChar = 'j';
                                break;
                        case 11:
                                outputChar = 'k';
                                break;
                        case 12:
                                outputChar = 'l';
                                break;
                        case 13:
                                outputChar = 'm';
                                break;
                        case 14:
                                outputChar = 'n';
                                break;
                        case 15:
                                outputChar = 'o';
                                break;
                        case 16:
                                outputChar = 'p';
                                break;
                        case 17:
                                outputChar = 'q';
                                break;
                        case 18:
                                outputChar = 'r';
                                break;
                        case 19:
                                outputChar = 's';
                                break;
                        case 20:
                                outputChar = 't';
                                break;
                        case 21:
                                outputChar = 'u';
                                break;
                        case 22:
                                outputChar = 'v';
                                break;
                        case 23:
                                outputChar = 'w';
                                break;
                        case 24:
                                outputChar = 'x';
                                break;
                        case 25:
                                outputChar = 'y';
                                break;
                        case 26:
                                outputChar = 'z';
                                break;
		}
	}else if(al_typeChar == 'c'){
		switch(al_number){
			case 1:
                                outputChar = 'A';
                                break;
                        case 2:
                                outputChar = 'B';
                                break;
                        case 3:
                                outputChar = 'C';
                                break;
                        case 4:
                                outputChar = 'D';
                                break;
                        case 5:
                                outputChar = 'E';
                                break;
                        case 6:
                                outputChar = 'F';
                                break;
                        case 7:
                                outputChar = 'G';
                                break;
                        case 8:
                                outputChar = 'H';
                                break;
                        case 9:
                                outputChar = 'I';
                                break;
                        case 10:
                                outputChar = 'J';
                                break;
                        case 11:
                                outputChar = 'K';
                                break;
                        case 12:
                                outputChar = 'L';
                                break;
                        case 13:
                                outputChar = 'M';
                                break;
                        case 14:
                                outputChar = 'N';
                                break;
                        case 15:
                                outputChar = 'O';
                                break;
                        case 16:
                                outputChar = 'P';
                                break;
                        case 17:
                                outputChar = 'Q';
                                break;
                        case 18:
                                outputChar = 'R';
                                break;
                        case 19:
                                outputChar = 'S';
                                break;
                        case 20:
                                outputChar = 'T';
                                break;
                        case 21:
                                outputChar = 'U';
                                break;
                        case 22:
                                outputChar = 'V';
                                break;
                        case 23:
                                outputChar = 'W';
                                break;
                        case 24:
                                outputChar = 'X';
                                break;
                        case 25:
                                outputChar = 'Y';
                                break;
                        case 26:
                                outputChar = 'Z';
                                break;

		}
	}else if(al_typeChar == 'o'){
		switch(al_number){
			case 1:
                                outputChar = '~';
                                break;
                        case 2:
                                outputChar = '`';
                                break;
                        case 3:
                                outputChar = '!';
                                break;
                        case 4:
                                outputChar = '@';
                                break;
                        case 5:
                                outputChar = '#';
                                break;
                        case 6:
                                outputChar = '$';
                                break;
                        case 7:
                                outputChar = '%';
                                break;
                        case 8:
                                outputChar = '^';
                                break;
                        case 9:
                                outputChar = '&';
                                break;
                        case 10:
                                outputChar = '*';
                                break;
                        case 11:
                                outputChar = '(';
                                break;
                        case 12:
                                outputChar = ')';
                                break;
                        case 13:
                                outputChar = '_';
                                break;
                        case 14:
                                outputChar = '-';
                                break;
                        case 15:
                                outputChar = '+';
                                break;
                        case 16:
                                outputChar = '=';
                                break;
                        case 17:
                                outputChar = '{';
                                break;
                        case 18:
                                outputChar = '}';
                                break;
                        case 19:
                                outputChar = '[';
                                break;
                        case 20:
                                outputChar = ']';
                                break;
                        case 21:
                                outputChar = '\\';
                                break;
                        case 22:
                                outputChar = '|';
                                break;
                        case 23:
                                outputChar = ':';
                                break;
                        case 24:
                                outputChar = ';';
                                break;
                        case 25:
                                outputChar = '"';
                                break;
                        case 26:
                                outputChar = '\'';
                                break;
                        case 27:
                                outputChar = '<';
                                break;
                        case 28:
                                outputChar = '>';
                                break;
                        case 29:
                                outputChar = ',';
                                break;
                        case 30:
                                outputChar = '.';
                                break;
                        case 31:
                                outputChar = '?';
                                break;
                        case 32:
                                outputChar = '/';
                                break;
                        case 33:
                                outputChar = '1';
                                break;
                        case 34:
                                outputChar = '2';
                                break;
                        case 35:
                                outputChar = '3';
                                break;
                        case 36:
                                outputChar = '4';
                                break;
                        case 37:
                                outputChar = '5';
                                break;
                        case 38:
                                outputChar = '6';
                                break;
                        case 39:
                                outputChar = '7';
                                break;
                        case 40:
                                outputChar = '8';
                                break;
                        case 41:
                                outputChar = '9';
                                break;
                        case 42:
                                outputChar = '0';
                                break;
		}
	}else{
		outputChar = ' ';
	}
	return outputChar;
}



//= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
string Vigenre_Encrypt(string message, string myKey){
	vector<string> aMsg = StringToInt(message);
	vector<string> aKey = StringToInt(myKey);
	vector<string> aVector;
	string output_EncryptedString;

	int i_alpha = 0;
	int i_cases = 0;


	if(aKey.empty()){
		return "Key is empty.";
	}
	if(aMsg.empty()){
		aKey.clear();
		return "Message is empty.";
	}
		bool dntKill_Key_others = find(aKey.begin(),aKey.end(),"others") != aKey.end();

		bool dntKill_Key_low = find(aKey.begin(),aKey.end(),"low") != aKey.end();
		bool dntKill_Key_cap = find(aKey.begin(),aKey.end(),"cap") != aKey.end();
		bool dntKill_Key = dntKill_Key_low || dntKill_Key_cap;

		bool dntKill_Msg_low = find(aMsg.begin(),aMsg.end(),"low") != aMsg.end();
		bool dntKill_Msg_cap = find(aMsg.begin(),aMsg.end(),"cap") != aMsg.end();
		bool dntKill_Msg = dntKill_Key_low || dntKill_Key_cap;

		bool dntKill_alpha = dntKill_Key && dntKill_Msg;

	for(int i = 0; i < aMsg.size(); i += 2){
		int sum = 0;
		string val_msg = aMsg[i];
		string typ_msg = aMsg[i+1];

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +
		bool typeMsg = typ_msg == "others";
		if(dntKill_Key_others && typeMsg){
			if(aKey[i_cases + 1] == "others"){
				sum = stoi(val_msg) + stoi(aKey[i_cases]) - 1;
				if(sum > 42){
					sum -= 42;
				}
			}else if(aKey[i_cases + 1] == "white_space"){
				do{
					i_cases += 2;
					if(i_cases > aKey.size() - 1){
						i_cases = 0;
					}
				}while(aKey[i_cases+1] != "others");
				sum = stoi(val_msg) + stoi(aKey[i_cases]) - 1;
				if(sum > 42){
					sum -= 42;
				}
			}else{
				do{
					i_cases += 2;
					if(i_cases > aKey.size() - 1){
						i_cases = 0;
					}
				}while(aKey[i_cases+1] != "others");
				sum = stoi(val_msg) + stoi(aKey[i_cases]) - 1;
				if(sum > 42){
					sum -= 42;
				}
			}
	//- - - - - - - - - - - - -
			i_cases += 2;
			if(i_cases > aKey.size() - 1){
				i_cases = 0;
			}
	//- - - - - - - - - - - - - 
		}else if(typ_msg == "others"){
			sum = stoi(val_msg);
		}
// # # #
		if(typ_msg == "white_space"){
			sum = 1;
		}
//# # #
	bool cap_and_low = typ_msg == "cap" || typ_msg == "low";
		if(cap_and_low && dntKill_alpha){			
			if(aKey[i_alpha + 1] == "others"){
				bool bool_letters = false;
				do{
					i_alpha += 2;
					if(i_alpha > aKey.size() - 1){
						i_alpha = 0;
					}
					if(aKey[i_alpha + 1] == "cap"){
						bool_letters = true;
					}else if(aKey[i_alpha + 1] == "low"){
						bool_letters = true;
					}
				}while(bool_letters != true);
				sum = stoi(val_msg) + stoi(aKey[i_alpha]) - 1;
				if(sum > 26){
					sum -= 26;
				}
			}else if(aKey[i_alpha + 1] == "white_space"){
				bool bool_letters = false;
                                do{ 
                                        i_alpha += 2;
                                        if(i_alpha > aKey.size() - 1){ 
                                                i_alpha = 0;
                                        }
                                        if(aKey[i_alpha + 1] == "cap"){ 
                                                bool_letters = true;
                                        }else if(aKey[i_alpha + 1] == "low"){ 
                                                bool_letters = true;
                                        }
                                }while(bool_letters != true);
                                sum = stoi(val_msg) + stoi(aKey[i_alpha]) - 1;
				if(sum > 26){
					sum -= 26;
				}
			}else{
				sum = stoi(val_msg) +  stoi(aKey[i_alpha]) - 1;
				if(sum > 26){
					sum -= 26;

				}
			}
	//- - - - - - - - - - - - - - - - - 
			i_alpha += 2;
			if(i_alpha > aKey.size() - 1){
				i_alpha = 0;
			}
	//- - - - - - - - - - - - - - - - - 
		}else if(cap_and_low){
			sum = stoi(val_msg);
		}
// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +

		aVector.push_back(to_string(sum));
		aVector.push_back(typ_msg);
	}

	
	for(int i = 0; i < aVector.size() - 1; i++){
		string temp_msg = aVector[i];
		i++;
		string type_msg = aVector[i];
		output_EncryptedString += VectorPairsToChar(temp_msg, type_msg);
	}
	return output_EncryptedString;
}

string Vigenre_Decrypt(string message, string myKey){
	vector<string> aMsg = StringToInt(message);
        vector<string> aKey = StringToInt(myKey);
        vector<string> aVector;
        string output_EncryptedString;  // this is decryptedString.... I just copy pasted it and change some 
					// operators !!!
        int i_alpha = 0;
        int i_cases = 0;


        if(aKey.empty()){				//Continue later on this part
                return "Key is empty.";
        }
        if(aMsg.empty() || message == "Message is empty."){
		aKey.clear();
                return "Message is empty.";
        }
                bool dntKill_Key_others = find(aKey.begin(),aKey.end(),"others") != aKey.end();

                bool dntKill_Key_low = find(aKey.begin(),aKey.end(),"low") != aKey.end();
                bool dntKill_Key_cap = find(aKey.begin(),aKey.end(),"cap") != aKey.end();
                bool dntKill_Key = dntKill_Key_low || dntKill_Key_cap;

                bool dntKill_Msg_low = find(aMsg.begin(),aMsg.end(),"low") != aMsg.end();
                bool dntKill_Msg_cap = find(aMsg.begin(),aMsg.end(),"cap") != aMsg.end();
                bool dntKill_Msg = dntKill_Key_low || dntKill_Key_cap;

                bool dntKill_alpha = dntKill_Key && dntKill_Msg;

        for(int i = 0; i < aMsg.size(); i += 2){
                int sum = 0;
                string val_msg = aMsg[i];
                string typ_msg = aMsg[i+1];

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +
                bool typeMsg = typ_msg == "others";
                if(dntKill_Key_others && typeMsg){
                        if(aKey[i_cases + 1] == "others"){
                                sum = stoi(val_msg) - stoi(aKey[i_cases]) + 1;
                                if(sum <= 0){
                                        sum += 42;
                                }
                        }else if(aKey[i_cases + 1] == "white_space"){
                                do{
                                        i_cases += 2;
                                        if(i_cases > aKey.size() - 1){
                                                i_cases = 0;
                                        }
                                }while(aKey[i_cases+1] != "others");
                                sum = stoi(val_msg) - stoi(aKey[i_cases]) + 1;
                                if(sum <= 0){
                                        sum += 42;
                                }
                        }else{
                                do{
                                        i_cases += 2;
                                        if(i_cases > aKey.size() - 1){
                                                i_cases = 0;
                                        }
                                }while(aKey[i_cases+1] != "others");
                                sum = stoi(val_msg) - stoi(aKey[i_cases]) + 1;
                                if(sum <= 0){
                                        sum += 42;
                                }
                        }
        //- - - - - - - - - - - - -
                        i_cases += 2;
                        if(i_cases > aKey.size() - 1){
                                i_cases = 0;
                        }
        //- - - - - - - - - - - - - 
                }else if(typ_msg == "others"){
                        sum = stoi(val_msg);
                }
// # # #
                if(typ_msg == "white_space"){
                        sum = 1;
                }
//# # #
        bool cap_and_low = typ_msg == "cap" || typ_msg == "low";
                if(cap_and_low && dntKill_alpha){
                        if(aKey[i_alpha + 1] == "others"){
                                bool bool_letters = false;
                                do{
                                        i_alpha += 2;
                                        if(i_alpha > aKey.size() - 1){
                                                i_alpha = 0;
                                        }
                                        if(aKey[i_alpha + 1] == "cap"){
                                                bool_letters = true;
                                        }else if(aKey[i_alpha + 1] == "low"){
                                                bool_letters = true;
                                        }
                                }while(bool_letters != true);
                                sum = stoi(val_msg) - stoi(aKey[i_alpha]) + 1;
                                if(sum <= 0){
                                        sum += 26;
                                }
                        }else if(aKey[i_alpha + 1] == "white_space"){
                                bool bool_letters = false;
                                do{ 
                                        i_alpha += 2;
                                        if(i_alpha > aKey.size() - 1){ 
                                                i_alpha = 0;
                                        }
                                        if(aKey[i_alpha + 1] == "cap"){ 
                                                bool_letters = true;
                                        }else if(aKey[i_alpha + 1] == "low"){ 
                                                bool_letters = true;
                                        }
                                }while(bool_letters != true);
                                sum = stoi(val_msg) - stoi(aKey[i_alpha]) + 1;
                                if(sum <= 0){
                                        sum += 26;
                                }
                        }else{
                                sum = stoi(val_msg) -  stoi(aKey[i_alpha]) + 1;
                                if(sum <= 0){
                                        sum += 26;

                                }
                        }
        //- - - - - - - - - - - - - - - - - 
                        i_alpha += 2;
                        if(i_alpha > aKey.size() - 1){
                                i_alpha = 0;
                        }
        //- - - - - - - - - - - - - - - - - 
                }else if(cap_and_low){
                        sum = stoi(val_msg);
                }
// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +

                aVector.push_back(to_string(sum));
                aVector.push_back(typ_msg);
        }


        for(int i = 0; i < aVector.size() - 1; i++){
                string temp_msg = aVector[i];
                i++;
                string type_msg = aVector[i];
                output_EncryptedString += VectorPairsToChar(temp_msg, type_msg);
        }
        return output_EncryptedString;
}

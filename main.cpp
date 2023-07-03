#include "functions.h"
#include <iostream>
#include <fstream>
#include <typeinfo>

int main() {
	cout << "\n" << endl;
	string file_path = "/run/media/anon/LinuxOnly/2023-rellocation/user/LearnGit/Confidential Projects/VigenreCipher/vigenereCipherInterface.txt";
//   ! - - - - - - - - - - - -
	file_not_found:
//   ! - - - - - - - - - - - - 
	fstream interface;
	interface.open(file_path,ios::in);
	string output_interface;
	if(interface.is_open()){
		getline(interface, output_interface);
		while(interface){
			cout << output_interface << endl;
			getline(interface, output_interface);
		}
		interface.close();
	}else{
		cout << "\n\t\"The vigenere cipher interface is empty\" \ntextFIle is not found.\nyou might be using different o.s. \n enter the textfile locations manualy >>" << endl;
		getline(cin,file_path);
//   ! - - - - - - - - - - - - -
		goto file_not_found;
//   ! - - - - - - - - - - - - -
	}
Line28to58:
	int options_list;
	bool run_list = false;
	bool ask_again = false;
	string yes_no = "n";
	do{
		string msg = "";
		string key = "";
		string output = "";
		cout << "Enter an option with respect to its number >> " << endl;
//  Continue here !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// get input string instead and evaluate it to int
	// I will try and use stoi() function but i want to use the try and get {} error 
//	instead of throwing error, I could catch that error instead and rerun the loop.

// - - - - - - - -- -  - - - - - - -- - - - - - - - - -- - - 

		cin >> options_list;
		cin.ignore();
		switch(options_list){
			case 1://encrypt a message	
				cout << "\n\tEncrypt a message: \nEnter a message >>" << endl;
				getline(cin,msg);
				cout << "Enter a key" << endl;
				getline(cin,key);
				cout << "\nEncrypted message output >>" << endl;
				output = Vigenre_Encrypt(msg,key);
				cout << "\t" << output << endl;
				break;
			case 2://decrypt a message
				cout << "\n\tDecrypt a message: \nEnter a message >>" << endl;
                                getline(cin,msg);
                                cout << "Enter a key" << endl;
                                getline(cin,key);
                                cout << "\nDecrypted message output >>" << endl;
                                output = Vigenre_Decrypt(msg,key);
                                cout << "\t" << output << endl;
				break;
			case 3://encrypt and then decrypt message
				cout << "\n\tEncrypt a message: \nEnter a message >>" << endl;
                                getline(cin,msg);
                                cout << "Enter a key" << endl;
                                getline(cin,key);
                                cout << "\nEncrypted message output >>" << endl;
                                output = Vigenre_Encrypt(msg,key);
                                cout << "\t" << output << endl;
				cout << "\n\tDecrypting the output >> " << output << endl;
				cout << "\nDecrypted message output >>" << endl;
				output = Vigenre_Decrypt(output,key);
				cout << "\t" <<output << endl;
				break;
			default:
				cout << "\ninvalid input..." << endl;
				goto Line28to58;
				break;
		}
		do{
			cout << "\n\tRun more options?\n\tEnter\n(y)yes\t(n)no >> " << endl;
			cin >> yes_no;
			if(yes_no == "y" || yes_no == "n"){
				if(yes_no == "y"){
					run_list = true;
				}else{
					run_list = false;
				}
				ask_again = false;
			}else{
				cout << "that is an invalid input... \n" << endl;
				ask_again = true;
			}
		}while(ask_again);
	}while(run_list);
	cout << "\t\tProcess ended..." << endl;

	return 0;
}


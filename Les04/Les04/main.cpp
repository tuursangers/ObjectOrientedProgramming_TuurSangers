#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	ifstream in_stream;
	in_stream.open("jabberwocky.txt");

	ofstream outfile ("jabberwocky_output.txt");

	if (!in_stream) {
		cout << "probleem openen file\n";
		exit(1);  ///0 - was geen probleem | 1 - foutmelding 
	}


	int streamLenght = 0;
	string data;

	while (!in_stream.eof()) {
		char ch;
		in_stream.get(ch);
		streamLenght += 1;
		
	}
	in_stream.clear();
	in_stream.seekg(0);

	for (int a = streamLenght-2; a != 0; a = a - 1) {
		char ch;
		in_stream.seekg(a);
		in_stream.get(ch);
		/*
		if (ch == '\n') {
			data += "!";
		}
		else {
			data += ch;
		}
		*/
		data += ch;
	}


	cout << data << endl;
	outfile << data << endl;


	cout << endl << "------------------------------------                Part 2                ------------------------------------" << endl;

	//opening reversed file
	ifstream in_stream_rev;
	in_stream.close();
	in_stream.open("jabberwocky.txt");
	in_stream_rev.open("jabberwocky_output.txt");
	ofstream outfile_flipflop("jabberwocky_flipflop.txt");

	bool flipflop = false;

	data = "";

	for (int a = (streamLenght*2); a != 0; a = a - 1) {
		char ch = 0;


		if (flipflop == true){
			in_stream.get(ch);
		}
		else {
			in_stream_rev.get(ch);
		}

		data += ch;

		if (ch == '\n') {
			if (flipflop == true) {
				flipflop = false;
			}
			else {
				flipflop = true;
			}
		}


	}

	cout << data << endl;
	outfile_flipflop << data << endl;


	//end of code
	cout << endl;
	system("pause");
	return 0;
}

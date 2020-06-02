#include <iostream>
#include <conio.h>
#include <windows.h>
#include "container.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Begin" << endl;
	container c;
	init(c);
	in(c, ifst);
	cout << "Read. " << endl;
	out(c, ofst, type::COMPLEX);
	cout << "Printed. " << endl;
	clear(c);
	system("pause");
	return 0;
}
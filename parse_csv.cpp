#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int readFile(string filename)
{
	int numlines = 0;
	string line;
	ifstream inx(filename);
	if( !inx.is_open() ) return(0);
	
	while (getline (inx, line)) {
		numlines++;
		stringstream sstr(line);
		while(sstr.good())
		{
			string substr;
			getline(sstr, substr, ',');
			cout << "[" << substr << "]";
		}
		cout << endl;
	}
	return(numlines);
}

int main()
{
	readFile("test.csv");
	return 0;
}

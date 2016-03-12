#include <iostream>
#include <cstring>

using namespace std;
  
int main(int argc, const char * argv[])
{
	char cola[94];
	cola[39] = ';';
	cola[40] = 'n';
	cola[41] = 'n';
	cola[42] = 'n';
	cola[43] = 'n';
	cola[44] = 'M';
	cola[45] = '0';
	cola[46] = ',';
	cola[47] = '.';
	cola[48] = '9';
	cola[49] = '`';
	cola[50] = '1';
	cola[51] = '2';
	cola[52] = '3';
	cola[53] = '4';
	cola[54] = '5';
	cola[55] = '6';
	cola[56] = '7';
	cola[57] = '8';
	cola[58] = 'n';
	cola[59] = 'L';
	cola[60] = 'n';
	cola[61] = '-';
	cola[62] = 'n';
	cola[63] = 'n';
	cola[64] = 'n';
	cola[65] = '\\';
	cola[66] = 'V';
	cola[67] = 'X';
	cola[68] = 'S';
	cola[69] = 'W';
	cola[70] = 'D';
	cola[71] = 'F';
	cola[72] = 'G';
	cola[73] = 'U';
	cola[74] = 'H';
	cola[75] = 'J';
	cola[76] = 'K';
	cola[77] = 'N';
	cola[78] = 'B';
	cola[79] = 'I';
	cola[80] = 'O';
	cola[81] = '=';
	cola[82] = 'E';
	cola[83] = 'A';
	cola[84] = 'R';
	cola[85] = 'Y';
	cola[86] = 'C';
	cola[87] = 'Q';
	cola[88] = 'Z';
	cola[89] = 'T';
	cola[90] = '\'';
	cola[91] = 'P';
	cola[92] = ']';
	cola[93] = '[';

	string line;
	int i;
	while(getline(cin, line)){
		for(i = 0; i < line.length(); i++){
			if((int) line[i] >= 39 && (int) line[i] <= 93 && cola[(int) line[i]] != 'n')
				line[i] = cola[(int) line[i]];
		}

		cout << line << endl;
   	}
   
   return 0;
}
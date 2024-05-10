#include <iostream> //" iostream" stands for input output stream.

using namespace std;

int main() {
	
	cout << "Starting Program...." << endl ;
	cout << "{hi there}" << endl ;
	cout << "{Do you read manga?}" << endl ;
	cout << "{If you don't, you should cos it's really great}\n\n" << endl ;
	
	
	
	/* Flush is a line of code that terminates the memory of the computer and hence when used no new line is used ,
	 Basically C++ programs are usually written line to line 
	but when the flush statement is used the next line of text is not use it prints out on the current line */
	
	//SEE THE CODE BELOW
	
	
	cout << "Starting Program..." << flush ;
	cout << "{hi there}" << endl ;
	cout << "{Do you read manga?}" << endl ;
	cout << "{If you don't, you should cos it's really great}\n\n" << endl ;




	// " << " means chevron
	
	
	//In order to print multiple lines of texts with one "cout" follow the formats below:
	


	cout << "1.)Apples\n" << "2.)Oranges\n" << "3.)pineapples\n" << "4.)Apricots\n" << "The fruits listed above are my favourites.\n" << endl;
	
	cout << "Apples," << " " <<"Oranges," << " " << "pineapples," << " " << "and Apricots" << " " << "The fruits listed are my favourites." << endl;  //OR
	
	cout << "Apples, " << "Oranges, " << "pineapples, " << "and Apricots " << "The fruits listed are my favourites." << endl<< "\n" ;
	
	return 0;
	
	
}


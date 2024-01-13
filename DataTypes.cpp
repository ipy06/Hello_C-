#include <iostream>

//A program to find the size of data types

using namespace std;

int main(){
	
	cout << "\n\n Find the size of Fundamental Data Types : \n" ;
	cout << "---------------------------------------------- \n" ;
	cout << "The size of (int) is :     " << sizeof (int) << " bytes \n" ;
	cout << "The size of (char) is :     " << sizeof (char) << " bytes \n" ;
	cout << "The size of (float) is :     " << sizeof (float) << " bytes \n" ;
	cout << "The size of (double) is :     " << sizeof (double) << " bytes \n" ;
	cout << "The size of (bool) is :     " << sizeof (bool) << " bytes \n" ;
	cout << "The size of (long) is :     " << sizeof (long) << " bytes \n" ;
	cout << "The size of (long long) is :     " << sizeof (long long) << " bytes \n" ;
	cout << "The size of (short) is :     " << sizeof (short) << " bytes \n" ;
	cout << "The size of (long double) is :     " << sizeof (long double) << " bytes \n" ;
	system ("pause");
	return 0;
}

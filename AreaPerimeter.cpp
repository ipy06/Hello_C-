#include <iostream>

//A Program to calculate Area and Perimeter of a Rectangle

using namespace std;

int main() {
    int Length, Width, Area, Perimeter;
	
    cout << "Enter the Length of the Rectangle:\n" ;
    cin >> Length ;

    cout << "Enter the Width of the Rectangle\n" ;
    cin >> Width ;

    Area = Length * Width ;
    cout << "The Area of the Rectangle is " << Area << ".\n" << endl ;
    Perimeter = 2 * (Length + Width) ;
    cout << "The Perimeter of the Rectangle is " << Perimeter << ".\n" << endl ;

    system ("pause");
    return 0;
    
}

#include<iostream>
#include <string>

using namespace std;

int main (){
	
	string Text1 = "Ipy is" ;
	string Text2 = " me" ;
	cout << Text1 << Text2 << endl ;
	string Text3 = " and me is Ipy" ;
	string Text = Text1 + Text2 + Text3 ; //Concatenation of Strings
	cout << Text << endl ;
	
	
	
	//INPUT strings
	string hdyft ; //How Do You Feel Today
	cout << "How do you feel today\n"  ;
	cin >> hdyft  ;
	cout <<" After hearing your reply (" << hdyft <<"),\n I think you are set."; 
}

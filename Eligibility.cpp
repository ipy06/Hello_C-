#include<iostream>
using namespace std;

int main (){
	
	string province, city, city_lived;
	int age;
	cout << "Welcome to the Eligibility checking program for the post of Mayor of Ottawa.\n " << endl ;
	cout << "Were you born in Ontario, Canada?\n"; 
	getline(cin, province); 
	
	
	
	if (province == "yes" || province == "YES" || province == "Yes") {
		cout << "Are you from Ottawa?\n";
		getline(cin, city);
		
		if (city == "yes" || city == "YES" || city == "Yes"){
			cout << "Have you lived in Ottawa for  more than 8 years? \n" ;
			getline(cin, city_lived);
			
			if (city_lived == "yes" || city_lived == "YES" || city_lived == "Yes") {
				cout << "How old are you?\n" ;
				cin >> age ;
			
				if (age >= 40) {
					cout << "Congratulations!! You are Eligible for the post of Mayor of Ottawa, Ontario.\n ";
				}
				
				else {
					cout << "Sorry but you are not eligible for the post.\n";
				}
			}
			
			else {
				cout << "Sorry but you are not eligible for the post.\n";
			}
		}
	
		else {
			cout << "Sorry but you are not eligible for the post.\n";
		} 
	}
	
	else {
		cout << "Sorry but you are not eligible for the post.\n";
	}
	
	//system("\npause");
	return 0;
	
}

#include<iostream>
#include<string>

using namespace std;
int main()
{
	//char first_name[16],middle_name[16],last_name[21] ; // alternate declaration 
	string course_name, first_name, middle_name, last_name;
	double  ans, credit, credits_attained = 0 ,GPA, total_mark;
	int count = 0, scale, total_credits, num_of_courses, course_numcode, student_number;


	cout << "\n Welcome to grade calcuating program\n\n";
	cout << "Do you want to start the program? <Yes(1)/No(0)> : ";
	cin >> ans;
	
	if (ans == 1) {

		cout << "Enter your <Student Number>: ";
		cin >> student_number;

		cout << "\nEnter your <first name>: ";
		cin >> first_name;

		cout << "\nEnter your <last name>: ";
		cin >> last_name;

		cout << "\nEnter your <middle name>: ";
		cin >> middle_name;

		cout << "\nHow many courses did you take<1-10>: " ;
		cin >> num_of_courses;

		string courses[num_of_courses];

		cout << "\nWhat is the total credits you took this semester: ";
		cin >> total_credits;

		cout << "What is the GPA scale your schoole uses <4,5,10>: ";
		cin >> scale;
		
		system ("clear");
		cout << "Now you will enter the courses and your scores in them\n" ;


		while (count < num_of_courses) {

			cout << "\nEnter course Letter code: " ;
			cin >> course_name;

			cout << "Enter course Numerical code:";
			cin >> course_numcode;

			courses[count] = course_name + " " + to_string(course_numcode);

			system ("clear");

			cout << "The course you entered is " << courses[count] << "\n";
			cout<<"How many units does "<< courses[count] << " have <1-6> : ";
			cin >> credit;

			cout << "\nEnter total mark you got in " << courses[count] << " from <1-100>: ";
			cin >> total_mark;


			string tot_mark = to_string(total_mark); 
			
			courses[count] += " " + tot_mark; 

			credits_attained = ((total_mark/100) * credit) + credits_attained;
			GPA = (credits_attained / total_credits) * scale ;


			count = count + 1;
			
			cin;
			cout << "Please press any key to continue.\n";
			system("clear");
		}
	
	}
	system ("clear");
	cout << "Your full name is " << first_name <<" "<< middle_name <<" "<< last_name << "\n"  ;
	cout << "Your Student Number is " << student_number << "\n" ;
	cout << "Your GPA on a " << to_string(scale) << " scale is " << GPA  << "\n";
	if (GPA > (scale / 2 )){
		cout << "Congratulations, You Passed!!!\n" ;
	}
	else if (GPA <= (scale / 2)){
		cout << "Sorry, You failed!!!\n";
	}
        else if ((ans == 0) || (ans >= 2)) {
		cout << "wrong input\n" ;
    	}
	cin;
	return 0;
}
#include<iostream>
using namespace std;
//Task 1 :
int main(){
	int v;
	int u=3;
	int *pu, *pv; //pointer to an integer//
	pu= &u; //assigns the address of u to pu//
	v= *pu; //assigns the value of u to v//
	pv= &v; //assigns the address of v to p//
	
	cout<<endl<< "u = "<< u << "\n&u = "<< &u << "\npu = "<< pu << "\n*pu = "<<*pu;
	cout<<"\nv = "<< v << "\n&v = "<< &v << "\npv = "<< pv << "\n*pv = "<< *pv;
	
	return 0;
}

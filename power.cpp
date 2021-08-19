#include<iostream>
using namespace std;

int power(int base, int powNum){
	if(powNum != 0){
		return base * power(base, powNum-1);
	} else {
		return 1;
	}
}

int main(){
	int base, powNum;
	cout<<"Enter base number: ";
	cin>>base;
	
	cout<<"Enter power number(positive integer): ";
	cin>>powNum;
	
	cout<<base<<" ^ "<<powNum<<"= "<<power(base, powNum);
	
	return 0;
}

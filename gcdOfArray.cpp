#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(a == 0){
		return b;
	} else if(b == 0){
		return a;
	} else if(a == b){
		return a;
	}
	
	return gcd(b, a%b);
}

int compare(int arr[], int n){
	int small = arr[0];
	for(int i = 0; i < n; i++){
		return gcd(arr[i], small);
	}
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int *arr = new int[n];
	
	cout<<"Enter the "<<n<<" Numbers to find GCD: ";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	cout<<"GCD of "<<n<<" Number is: "<<compare(arr, n);
	
	return 0;
}

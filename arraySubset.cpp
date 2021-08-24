#include<iostream>
#include<limits.h>
#include<string.h>
using namespace std;

void findSubset(int arr1[], int arr2[], int hFn, int size){	
	string result;
	int slotTraversed = 0;
	
	while(slotTraversed != size){
		//check for element at pos
		int pos = arr2[slotTraversed]%hFn;
		if(arr1[pos] == arr2[pos]){
			result = "Array2 is a subset of array 1";
			break;
		}else if(arr1[pos] != INT_MIN){
			pos = (pos + 1)%hFn;
		}
		slotTraversed++;
	}
	
	if(slotTraversed == size){
		result = "Array2 is not a subset of array 1";
	}
	cout<<result<<endl;
}

int main(){
	int size1, size2;
	cout<<"Enter the size of array 1: ";
	cin>>size1;
	
	int arr1[size1]; 
	int arr2[size2];
	
	for(int i = 0; i < size1; i++)
		arr1[i] = INT_MIN;
	
	cout<<"Inset the element of array 1: "<<endl;
	for(int i = 0; i< size1; i++){
		cin>>arr1[i];
	} 
	
	cout<<"Enter the size of array 2: ";
	cin>>size2;
	
	cout<<"Inset the element of array 2: "<<endl;
	for(int i = 0; i< size2; i++){
		cin>>arr2[i];
	}  
	
	int choice;
	do{
		cout<<"1. To find the subset of array 1 and array 2\n0: Exit: "<<endl;
		cout<<"Enter selection: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				findSubset(arr1, arr2, size1, size1);
			case 0:
				break;
			default:
				cout<<"invalid selection try again!"<<endl;
		}
	}while(choice != 0);
	
	return 0;
}

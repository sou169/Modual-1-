#include<iostream>
using namespace std;
int main()
{
	int temp,i,j,arr[5];
	cout<<"Enter 5 val in array: ";
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	for(i=0;i<2;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]<arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"\nSECOND HIGHEST ELEMENT : "<<arr[1];
	return 0;
}

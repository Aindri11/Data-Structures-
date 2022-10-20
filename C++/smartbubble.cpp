#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void bubblesort(int a[], int n);
void swap(int &x, int &y);
int main(){
	int n;
	cout<<"Enter no of elements: "; cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\nThe array is: ";
	displayarray(a,n);
	bubblesort(a,n);
	cout<<"\n\nThe  Sorted array is: ";
	displayarray(a,n);	
}
void fillarray(int a[],int n){
	cout<<"\nEnter element: ";
	for(int i=0;i<=n-1;i++)
	cin>>a[i];
}
void displayarray(int a[],int n){
	for(int i=0;i<=n-1;i++)
	cout<<a[i]<<" ";	
}
void bubblesort(int a[], int n){
	int p,c;
	for(p=0;p<=n-2;p++){
		int flag=0;
		for(c=0;c<=n-p-2;c++)
		{
			if(a[c]>a[c+1])
				{swap(a[c],a[c+1]); 
				flag=1;}
				
				
		}
		if(flag==0) break;	
	}
	cout<<"\nValue of p is: "<<p;
}
void swap(int &x, int &y){
	int t=x;
	x=y;
	y=t;
}

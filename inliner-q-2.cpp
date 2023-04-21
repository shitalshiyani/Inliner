#include<iostream>
using namespace std;

main()
{
	int a[100],n;
	int& p=a;
	
	cout<<"Enter Value of N=";
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	cout<<"Elements in Array are=";
	for (int i=0;i<n;i++)
	{
		cout<<(p+i);
	}
	
	cout<<"Reverse Array Elements are=";
	int& rev;
	rev= &a[n-1];
	for (int i=0;i<n;i++)
	{
		cout<<"rev--";
	}
	
	
	
	
	
	
	return 0;
}

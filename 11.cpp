/*
11. Nested Control Structures
o Write a program that prints a right-angled triangle using stars (*) with a nested loop.
o Objective: Learn nested control structures.*/

#include<iostream>
using namespace std;
int main(){
	int row,i,j;
	cout<<"Enter the Row= ";
	cin>>row;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}

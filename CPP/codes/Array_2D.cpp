#include<iostream>
//read 2d array and print
using namespace std;
int main()
{
	int m[10][10],rows,columns,r,c;
	cout<<"Enter size of Matrix\n";
	cin>>rows>>columns;//x-axis then y-axis
	for(r=0;r<rows;r++)
	 {
	 	for(c=0;c<columns;c++)
	 	{
	 		cout<<"\nEnter element at ["<<r<<"] ["<<c<<"]:";
	 		cin>>m[r][c];
		 }
	 }
	 cout<<"\nMatrix is\n";
	
	for(r=0;r<rows;r++)
	 {
	 	for(c=0;c<columns;c++)//all columns in a row
	 	{
	 		cout<< m[r][c]<<"\t";		 
		}
		cout<<"\n";//endl
	 }
	
	return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r1,r2,c1,c2;
	cout<<"for multiplication no of columns in first matrix would be equal to no of rows in second "<<endl;
	
	cout<<"enter no of rows of first matrix : ";
	cin>>r1;
	cout<<"enter no of column of first matrix : ";
	cin>>c1;
	cout<<"enter no of rows of second matrix : ";
	cin>>r2;
	cout<<"enter no of column of second matrix : ";
	cin>>c2;
	int matrix1[r1][c1],matrix2[r2][c2],matrix3[r1][c2];
	if (r1!=c2)
	{
		cout<<"invalid values";
	}
	else
	//MATRIX NO 1
	cout<<"\t\t\t enter value in first matrix "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"enter value of r"<<i+1<<" && c"<<j+1<<" :";
			cin>>matrix1[i][j];
		}
	}
		//MATRIX NO 2
	cout<<"\t\t\t enter values in second matrix "<<endl;
		for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<"enter value of r"<<i+1<<" && c"<<j+1<<" :";
			cin>>matrix2[i][j];
		}
	}
	
	//cout<<endl<<"\n\n\n sum of matrix is : "<<endl;
	
	//	for(int i=0;i<5;i++)
	//{
	//	for(int j=0;j<5;j++)
	//	{
	//	
	//		matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
	//		cout<<matrix3[i][j]<<"\t";
	//	}
	//	cout<<endl;
	//}
	int matrix4[r1][c2];
	cout<<"\t\t MULTIPLICATION OF MATRIX IS "<<endl;
	
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				matrix4[i][j]=0;
				for(int k=0;k<r2;k++)
				{
					matrix4[i][j] +=matrix1[i][k]*matrix2[k][j];
				}
			}
		}
	
	
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<matrix4[i][j]<<"\t\t";
		}
		cout<<endl<<endl;
	}
	
	
	
}

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
class Matrix{
//	private:
		
	public:
		int Rows,Cols;
		int Mat[Rows][Cols];
		void GetRows(void)
		{
			cout<<"\n\tEnter No. of Rows: ";cin>>Rows;
		}
		void GetCols(void)
		{
			cout<<"\n\tEnter No. of Columns: ";cin>>Cols;
		}
		void SetElemenst(int i, int j, int e)
		{
			Mat[i][j] = e;
		}
		void AddMatrices(int r1, int r2, int c1, int c2, int m1, int m2)
		{
			int r,c,m[r1][c1];
			for(r=0;r<r1;r++)
			{
				for(c=0;c<c1;c++)
				{
					m[r][c] = m1[r][c]+m2[r][c];
				}
			}
		}
		
};
int main()
{
	int r,c,e;
	Matrix M1,M2;
	M1.GetRows();
	M1.GetCols();
	M2.GetRows();
	M2.GetCols();
	for(r=0;r<M1.Rows;r++)
	{
		for(c=0;c<M1.Cols;c++)
		{
			cout<<"\nEnter M1["<<r<<"]["<<c<<"] Element = "; cin>>e;
			M1.SetElemenst(r,c,e);
		}
	}
	for(r=0;r<M2.Rows;r++)
	{
		for(c=0;c<M2.Cols;c++)
		{
			cout<<"\nEnter M2["<<r<<"]["<<c<<"] Element = "; cin>>e;
			M2.SetElemenst(r,c,e);
		}
	}
	M1.AddMatrices(M1.Rows,M1.Cols,M2.Rows,M2.Cols,M1.Mat,M2.Mat);
	return(0);
}

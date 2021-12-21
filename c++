#include<iostream>
using namespace std;
#define M 4
#define N 5
int main()
{
	int mult[10][10];
	int** A= new int*[M];

	for(int i=0;i<M;i++)
	{
		A[i]=new int[N];
	}
	cout<<"enter the elements of array "<<endl;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>A[i][j];
		}
	}
		for(int i=0;i<M;i++)
		{
			for(int j=0;j<N;j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
		for(int i = 0; i < M; ++i)
				        for(int j = 0; j < N; ++j)
				        {
				            mult[i][j]=0;
				        }


				    for(int i = 0; i < M; ++i)
				        for(int j = 0; j < N; ++j)
				            for(int k = 0; k < M; ++k)
				            {
				                mult[i][j] += M[i][k] * N[k][j];
				            }

}

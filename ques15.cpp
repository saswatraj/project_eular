#include<iostream>
#define CC 20

using namespace std;


int main()
{
	long long grid[21][21];
	for(int i=0;i<20;i++)
	{
		grid[20][i]=1;
		grid[i][20]=1;
	}
	long paths = 1;
	for(int i=19;i>=0;i--)
	{
		for(int j=19;j>=0;j--)
			grid[i][j] = grid[i+1][j] + grid[i][j+1];
	}
	cout << grid[0][0] ;
	return 0;
}

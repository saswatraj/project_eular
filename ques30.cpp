#include<iostream>
#include<cmath>
using namespace std;
int digs[10];
int sum_pow(int n)
{
	int sum = 0;
	while(n>0)
	{
		sum += digs[n%10];
		n = n/10;
	}
	return sum;
}
int main()
{
	for(int i=0;i<10;i++)
		digs[i] = pow(i,5);
	int sum = 0;
	for(int i=10;i<355000;i++)
		if(sum_pow(i)==i)
			sum += i;
	cout << sum;
	return 0;
}

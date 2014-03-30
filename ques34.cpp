#include<iostream>
using namespace std;

int fact[10] = {1};

int sum_fact_digits(int n)
{
	int sum = 0;
	while(n>0)
	{
		sum += fact[n%10];
		n = n/10;
	}
	return sum;
}

int main()
{
	for(int i=1;i<=9;i++)
		fact[i] = fact[i-1]*i;
	int sum = 0;
	for(int i=10;i<2540161;i++)
		if(sum_fact_digits(i) == i)
			sum += i;
	cout << sum ;
	return 0;
}

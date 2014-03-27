#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int countDivisors(int n)
{
	int count = 0;
	int limit = sqrt(n);
	for(int i=1;i<limit;i++)
		if(n%i==0)
			count+=2;
	if(limit*limit == n)
		count++;
	return count;
}


int main()
{
	int num=0;
	for(int i=0;;i++)
	{
		num+=i;
		if(countDivisors(num)>500)
		{
			cout << num;
			break;
		}
	}
	return 0;
}

#include<iostream>

using namespace std;

int main()
{
		const int limit = 1001;
		unsigned long long sum =1;
		for(int i=3;i<=1001;i=i+2)
		{
				int sq = i * i;
				sum += sq;
				sum += sq - i + 1;
				sum += sq - 2*(i-1);
				sum += sq - 3*(i-1);
		}
		cout << sum ;
		return 0;
}

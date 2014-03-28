#include<iostream>

using namespace std;

int main()
{
	const int number = 1000000;
	int sl = 0;
	int snum = 0;
	long seq;

	int table[number+1] = {0};
	
	table[1]=1;

	for(int i=2;i<=number;i++)
	{
		seq = i;
		int k = 0;
		while(seq!=1 && seq>=i){
			k++;
			if((seq%2)==0)
				seq = seq/2;
			else
				seq = 3*seq + 1;
		}

		table[i] = k + table[seq];

		if(table[i]>sl){
			sl = table[i];
			snum = i;
		}
	}

	cout << snum;
	return 0;
}

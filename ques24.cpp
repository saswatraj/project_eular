//solved by hand though wrote this later
//for calculating first 8 digits for logic
#include<iostream>
#include<cmath>

using namespace std;

int getSeq(bool num[10],int pos)
{
	int p = 0,k=0;
	while(k!=pos)
	{
		if(num[p])
		k++;
		p++;
	}
	return p-1;
}


int main()
{
	int pos = 9;
	int fact = 362880; // 9 fact
	int limit = 1000000;
	bool nums[10];
	for(int i=0;i<10;i++)
		nums[i] = true;
	while(limit!=0)
	{
		int seq = ceil((double)limit /(double) fact);
		int fl_s = floor(limit/fact);
		int i = getSeq(nums,seq);
		cout << i ;
		nums[i] = false;
		//cout << endl << fl_s << " " << fact << endl ;
		limit -= fl_s * fact;
		//cout << endl << "----" << limit << endl;
		fact = fact / pos;
		pos--;
	}
	return 0;
}

		

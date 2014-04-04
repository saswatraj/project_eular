#include<iostream>
#include<cmath>
using namespace std;

bool arr[1000000];

int main()
{
		const int limit = 1000000;
		for(int i=0;i<limit;i++)
				arr[i] = true;
		arr[0] = false;
		arr[1] = false;
		for(int i=2;i<sqrt(limit);i++)
				if(arr[i])
				for(int j=i*i;j<limit;j+=i)
						arr[j] = false;
		cout << "Finished Euler" << endl;
		unsigned long long ans = 0;
		for(int i=11;i<limit;i++)
		{
				if(arr[i] )
				{		
						int copy = i;
						int nod = 0;
						bool disregard = false;
						while(copy!=0)
						{
								//cout << copy << ":" <<arr[copy] << endl;
								if(arr[copy]==false)
								{
										disregard = true;
										break;
								}
								nod++;
								copy = copy /10;
						}
						if(disregard)
								continue;
						//else
								//cout << "rtl :" << i << endl;
						copy = i;
						int mul = pow(10,nod);
						while(mul != 1)
						{
								copy = copy % mul;
								//cout << copy << ":" << arr[copy] << endl;
								if(arr[copy] == false)
								{
										disregard = true;
										break;
								}
								mul = mul/10;
						}
						if(disregard)
								continue;
						else {
								ans+=i;
								//cout << i << endl;
						}
				}
		}
		cout<< ans << endl;
		return 0;
}

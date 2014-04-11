#include<iostream>
using namespace std;

int main()
{
		const int limit = 1000;
		int arr[1000]={0};
		int maxi=0;
		for(int i=1;i<1000;i++)
			for(int j=i+1;j<1000;j++)
			{

				if(i+j>1000)
					break;
				for(int k=j+1;k<1000;k++)
				{
					if(i+j+k>1000)
						break;
					else
						if(i*i+j*j==k*k){
							arr[i+j+k]++;
							if(arr[i+j+k]>arr[maxi])
								maxi = i+j+k;
						}
				}
			}
		cout << maxi << endl;
		return 0;
}

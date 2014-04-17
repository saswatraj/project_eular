#include<vector>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cstdio>
using namespace std;
vector<string> perms;
int arr[7] = { 2,3,5,7,11,13,17 };

bool chkProperty(string s)
{
		bool flag = true;
		int num ;
		for(int i=1;i<=7;i++)
		{
				num = atoi(s.substr(i,3).c_str());
				if(num%arr[i-1] != 0)
				{
						flag = false;
						break;
				}
		}
		return flag;
}

void swap(char *x,char *y)
{
		char temp;
		temp = *x;
		*x = *y;
		*y = temp;
}

void permute(char *a,int i,int n)
{
		int j;
		if(i==n){
				string s(a);
				if(chkProperty(s))
				perms.push_back(s);
		}else{
				for(j=i;j<=n;j++)
				{
						swap((a+i),(a+j));
						permute(a,i+1,n);
						swap((a+i),(a+j));
				}
		}
}

				

int main()
{
		char str[] = "0123456789";
		permute(str,0,9);
		for(int i=0;i<perms.size();i++)
				cout << perms.at(i) << endl;
		return 0;
}

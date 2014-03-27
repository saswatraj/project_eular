#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
	ifstream infile("input.txt");
	int matrix[20][20];
	if(infile.is_open())
	{
		string line;
		int i=0;
		while(getline(infile,line)){
			const char *tmp = line.c_str();
			char *temp =(char *) malloc(sizeof(char)*strlen(tmp));
			strcpy(temp,tmp);
			char *p = strtok(temp," ");
			int j=0;
			while(p){
				matrix[i][j]=atoi(p);
				j+=1;
				p = strtok(NULL," ");
			}
			i+=1;
		}
		infile.close();
		long product = 1788696;
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<20;j++)
			{
				long p1;
				if(i+3<20){
					p1 = matrix[i][j] * matrix[i+1][j] * matrix[i+2][j] * matrix[i+3][j];
					if(product<p1)
						product = p1;
				}
				if(j+3<20){
					p1 = matrix[i][j] * matrix[i][j+1] * matrix[i][j+2] * matrix[i][j+3];
					if(product<p1)
						product = p1;
				}
				if((i+3<20)&&(j+3<20)){
					p1 = matrix[i][j] * matrix[i+1][j+1] * matrix[i+2][j+2] * matrix[i+3][j+3];
					if(product<p1)
						product = p1;
				}
				if((i+3<20)&&(j-3>0)){
					p1 = matrix[i][j] * matrix[i+1][j-1] * matrix[i+2][j-2] * matrix[i+3][j-3];
					if(product<p1)
						product = p1;
				}
			}
		}
		cout << product <<endl;
	}
	return 0;
}

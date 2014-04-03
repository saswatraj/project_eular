#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
		ofstream myfile;
		myfile.open("names1.txt");
		ifstream infile("names.txt");
		if(infile.is_open())
		{
				string line;
				while(getline(infile,line))
				{
						char *temp = (char *)malloc(sizeof(char)*line.size());
						strcpy(temp,line.c_str());
						char *p = strtok(temp,",");
						while(p){
								int len = strlen(p);
								p = p+1;
								p[len-2] = '\0';
								printf("%s\n",p);
								myfile << p <<"\n" ;
								p = strtok(NULL,",");
						}
				}
				infile.close();
				myfile.close();
		}
		return 0;
}


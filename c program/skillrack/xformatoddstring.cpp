#include<iostream>
using namespace std;

void printPattern(string str)
{
    int x,i,j;
	int len = str.length();

	for (i=0,j=len-1;i<=len,j>=0; i++,j--)
	{
		if (i<j)
		{
			for (x=0; x<i; x++)
				cout << " ";

			cout << str[i];

			for (x=0; x<j-i-1; x++)
				cout << " ";

			cout << str[j] << endl;
		}
		if (i==j)
		{
			for (x=0; x<i; x++)
				cout << " ";

			cout << str[i] << endl;
		}
		else if (i>j)
		{
			for (x = j-1; x>=0; x--)
				cout << " ";

			cout << str[j];

			for (x=0; x<i-j-1; x++)
				cout << " ";

			cout << str[i] << endl;
		}
	}
}

int main()
{
	string str;
	cin>>str;
	printPattern(str);
	return 0;
}

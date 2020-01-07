#include<iostream>
#include<string>
using namespace std;

string mixText(string a,string b)
{
	int x = a.size();
	int l = b.size();
	
	if (a.size()==b.size())
	{
		int i=0;
		while (i<x)
		{
			cout << a[i] << b[i];
			i++;
		}
	}
	else
	{
		cout << "E";
	}
	
	return "";
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

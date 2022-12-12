#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
const int ArSize = 10;

//function prototype
void strcount(const char* str);

int main(char argc, char** argv)
{
	using namespace std;
	char input[ArSize];
	char next;
	cout << "enter a line: ";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next!='\n')
		{
			cin.get(next);
		}
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "bye\n";
	return 0;
}
void strcount(const char* str)
{
	using namespace std;         
	static int total = 0;//static local variable
	int count = 0;
	cout << "\"" << str << "\"contains";
	while (*str++)
	{
		count++;
	}
	total += count;
	cout << count << "characters\n";
	cout << total << "characters total\n";
}
#include<iostream>
#include<string>

using namespace std;

string XOR(string data, char key[])
{
	string xorstring = data;
	for (int i = 0; i < xorstring.size(); i++)
	{
		xorstring[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];
	}
	return xorstring;
}

int main()
{
	char key[15] = {'Y','o','u','r',' ','S','e','c','r','e','t',' ','K','e','y'};
	cout << XOR("Your Encrypted Text Here", key);
	getchar();
	return 0;
}

/*
 * Creator: baka@senpai
 *
 * You can find me here: https://github.com/baka-senpai-lts
 *
 */

#include <iostream>
#include <vector>

// Pls, don't beat me :3
using namespace std;

// This function separates passwords with \n

string generate(vector <string> data)
{

	string result;

	return result;

}

int main(int argc, char* argv[])
{

	vector <string> data;

	string buf;

	do
	{

		getline(cin, buf);

		data.push_back(buf);

	}
	while (buf != "");

	cout << generate(data) << endl;

	return 0;

}

// C++ program to find XOR of ASCII
// value of characters in string

#include <bits/stdc++.h>
using namespace std;

// Function to find the XOR of ASCII
// value of characters in string
int XorAscii(string str, int len)
{

	// store value of first character
	int ans = int(str[0]);

	for (int i = 1; i < len; i++) {

		// Traverse string to find the XOR
		ans = (ans ^ (int(str[i])));
	}

	// Return the XOR
	return ans;
}

// Driver code
int main()
{

	string str = "geeksforgeeks";
	int len = str.length();
	cout << XorAscii(str, len) << endl;

	str = "GfG";
	len = str.length();
	cout << XorAscii(str, len);

	return 0;
}

// Serena Gibbons
// BCS230

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string, int, int);

int main() {

	string str;
	string looptest = "y";
	cout << "Palindrome Checker\n\n";

	do {
		cout << "Enter a string to check whether it is a palindrome: ";
		cin >> str;

		int pos = 0;						// position
		int end = str.length() - 1;			// end position of string array

		for (int i = 0; i <= end; i++)		// if string contains uppercase letters, convert to lowercase
			str[i] = tolower(str[i]);		// isPalindrome will not recognize uppercase and lowercase as the same char

		if (isPalindrome(str, pos, end) == 1)
			cout << "The string \"" << str << "\" is a palindrome.\n";
		else
			cout << "The string \"" << str << "\" is not a palindrome.\n";

		// ask if user would like to check another string
		cout << "Check another string? (y)es or (n)o: ";
		cin >> looptest;
		cout << endl;

	} while (looptest != "n");

	cout << "Exiting program.\n";

	system("pause");
	return 0;
}

bool isPalindrome(string s, int p, int e) {
	if (p > e)						// base case
		return false;
	else if (s[p] == s[e]) {		// check if the first element is the same as the last
		isPalindrome(s, p+1, e-1);
		return true;
	}
	return false;
}

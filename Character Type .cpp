/* Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format
Character (ch)

Constraints
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
Explanation
Anyone can Do it using Ascii codes. I dare you - "Try to not use ascii codes." ;) */

#include<iostream>
using namespace std;
#include<cctype>
	char str(char ch){
		if(islower(ch))
		return 'L';
		else if(isupper(ch))
		return'U';
		else
		return 'I';
	}
int main(){
	char ch;
	cin>>ch;
	cout<<str(ch);
	return 0;
}
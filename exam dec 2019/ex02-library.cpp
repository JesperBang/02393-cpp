#include "ex02-library.h"
#include <iostream>

//Exercise 2 (a) Implement this function
string reverse(string s, int n){
    if(s.size()-n != 0)
    {
        swap(s[s.size()-n],s[n]);
		reverse(s,n-1);
    } 
	return s;
}

//Exercise 2 (b) Implement this function
bool isPalindrome(string s, int n1, int n2){
	return true;
	//put your code here
}

//Exercise 2 (c) Implement this function
int distancePalindrome(string s, int n1, int n2){
	//put your code here
	return 0;
}
#include "ex03-library.h"
#include <iostream>

//Do not modify
WordsList::WordsList(){
	allWords.push_back("121");
	wordsToPalindromeDistance["121"]=0;
	allWords.push_back("122");
	wordsToPalindromeDistance["122"]=1;
}

//Exercise 3 (a) implement this method
void WordsList::print(){
	cout << allWords.size() << " words:";
	for (size_t i = 0; i != allWords.size(); ++i) {
		cout << " " << allWords[i] << " (" << wordsToPalindromeDistance[allWords[i]] << ")";
	}
	cout << endl;
}

//Exercise 3 (b) implement this method
int WordsList::distancePalindrome(string s){
	int len = s.length();
	int n=len-1;
	int count = 0;

	for(int i=0;i<(len/2);i++){
		if(s[i] != s[n])
			count++;
		swap(s[i],s[n]);
		n = n-1;
	}

	return count;
}

//Exercise 3 (c) implement this method
void WordsList::addWord(string word){
	allWords.push_back(word);
	wordsToPalindromeDistance[word] = distancePalindrome(word);
}

//Exercise 3 (d) implement this method
int WordsList::palindromeWords(){
	int count = 0;
	for ( const auto &p : wordsToPalindromeDistance )
	{
		if(p.second == 0)
			count++;
	} 
	return count;
}
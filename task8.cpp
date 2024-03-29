#include <iostream>
using namespace std;

int anagram(string s1,string s2){
	int array1[26]={0},array2[26]={0};
	if(s1.length()!=s2.length())
		return 0;
	for(int i=0;s1[i]!='\0';i++){
		array1[s1[i]-'a']++;
	}

	for(int i=0;s2[i]!='\0';i++){
		array2[s2[i]-'a']++;
	}

	for(int i=0;i<26;i++){
		if(array1[i]!=array2[i])
			return 0;
	}

	return 1;
}
int main()
{
	int n;
	string s1,s2;
	cout<<"Enter string 1:"<<endl;
	cin>>s1;
	cout<<"Enter string 2:"<<endl;
	cin>>s2;

	if(anagram(s1,s2))
		cout<<"the strings '"<< s1 <<"' and '"<< s2 <<"' are anagrams of each other."<<endl;
	else
		cout<<"the strings '"<< s1 <<"' and '"<< s2 <<"' are not in anagrams of each other."<<endl;

	return 0;
}

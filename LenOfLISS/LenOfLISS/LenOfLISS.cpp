// LengthOfLISS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"LenOfLISS.h"
using namespace std;

int main()
{
	int len;
	cin >> len;
	vector<int> Vec(len);
	for (int i = 0; i < len; i++)
		cin >> Vec[i];
	LengthOfLISS S1;
	cout << S1.GetLength(Vec) << '\n';
	return 0;
}


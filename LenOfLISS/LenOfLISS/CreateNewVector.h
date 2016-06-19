#pragma once
#include<iostream>
#include<vector>
using namespace std;
class NewArray {
	int len;
	vector<int> NewVector;
	NewArray() {}
	NewArray() {
		cin >> len;
		NewVector.resize(len);
		for (int i = 0; i < len; i++)
			cin >> NewVector[i];
	}
	NewArray(vector<int> &arr) {
		NewVector = arr;
	}
};
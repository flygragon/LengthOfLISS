#pragma once
#include<iostream>
#include<vector>
using namespace std;

class LengthOfLISS {
private:
	int BiSearch(vector<int> &LISS, int target) {
		int low = 0, high = LISS.size() - 1, mid;
		while (low <= high) {
			mid = low + (high - low) / 2;
			if (LISS[mid] == target)
				return mid;
			else if (LISS[mid] <target)
				low = mid + 1;
			else high = mid - 1;
		}
		return low;
	}
public:
	int GetLength(vector<int>& nums) {
		int len = nums.size();
		if (len <= 1) return len;
		vector<int> LISS;
		LISS.push_back(nums[0]);
		for (int i = 1; i <len; i++)
			if (nums[i] >LISS.back())
				LISS.push_back(nums[i]);
			else LISS[BiSearch(LISS, nums[i])] = nums[i];
			return LISS.size();
	}
};
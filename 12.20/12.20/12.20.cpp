// 12.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void shuffle(vector<T>&v) {
	srand(time(0));
		for (int i = 0; i < v.size(); i++) {
	T random = (rand() % v.size());
	T tracker = v.at(random);
	cout << tracker << endl;

		}

}

	

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
		v.push_back(9);
		v.push_back(10);

		shuffle(v);

    return 0;
}


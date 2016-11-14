/*Frequent Pattern Æµ·±Ä£Ê½*
*Author: ºØæçÎä 2015000203001:100:*/

#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdio>
#include <string>
#define NumOfProperty 22
using namespace std;

struct DataNode {
	string Ans[NumOfProperty];
	DataNode* next;

	DataNode() {
		for (int i = 0; i < NumOfProperty; i++) {
			Ans[i] = "#";
		}
		next = NULL;
	}

	void InsertAfter(DataNode* x) {
		x->next = next;
		next = x;
	}
};
DataNode* HeadOfData;

void ReadInput(string InputFile) {
	ifstream In(InputFile, ios::in);
	if (!In.is_open()) {
		exit(1);
	}

}

int main() {
	return 0;
}
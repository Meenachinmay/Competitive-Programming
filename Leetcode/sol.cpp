#include <bits/stdc++.h>
using namespace std;

unsigned int setbit0(unsigned int num, int pos){
	return num & (1 << pos);
}

bool checkSetOrUnset(unsigned int num, int pos){
	return ((num >> pos) & 1) == 1;
}

unsigned int setbit1(unsigned int num, int pos){
	return num | (1 << pos);
}

unsigned int countSetbits(unsigned int num){
	unsigned int cnt = 0;
	while (num){
		cnt = cnt + (num&1);
		num = num >> 1;
	}
	return cnt;
}        
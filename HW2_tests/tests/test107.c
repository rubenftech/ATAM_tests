#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('|', 337043536540761190);
	printf("Test 107 output: %hi\n",res);
	assert(res == 5);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('^', -14);
	printf("Test 262 output: %hi\n",res);
	assert(res == 58);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('{', -64);
	printf("Test 62 output: %hi\n",res);
	assert(res == 8);
	return 0;
}
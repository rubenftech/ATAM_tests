#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('}', -68);
	printf("Test 239 output: %hi\n",res);
	assert(res == 136);
	return 0;
}
#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('$', 31);
	printf("Test 44 output: %hi\n",res);
	assert(res == 1);
	return 0;
}
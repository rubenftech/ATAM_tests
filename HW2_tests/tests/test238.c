#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('@', -100);
	printf("Test 238 output: %hi\n",res);
	assert(res == 629);
	return 0;
}
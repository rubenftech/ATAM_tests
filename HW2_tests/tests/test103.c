#include<stdio.h>
#include<assert.h>

unsigned short count_above(char separator,long limit);

int main() {
	short res = count_above('#', 664982293042290710);
	printf("Test 103 output: %hi\n",res);
	assert(res == 1);
	return 0;
}
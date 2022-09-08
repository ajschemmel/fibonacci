#include <stdio.h>

int main(){
	int i, n = 10;
	int j = 0;
	int k = 1;
	int l = 0;
	for (i = 0; i <= n; ++i ){
		printf("%d ",j);
		l = j;
		j = j + k;
		k = l;


	}
	return 0;

}

#include <stdio.h>

int recurse(char* rusak, int current, int target){
	if(rusak[current]) return 0;

	if(current > target) return 0;
	if(current == target) return 1;

	int result = recurse(rusak, current + 1, target) + recurse(rusak, current + 2, target);
	printf("%d %d %d\n", current, target, result);
	return result;
}

int main(){
	int n;
	scanf("%d", &n);

	int r;
	scanf("%d", &r);

	char R[n];
	for(int i = 0; i < n; ++i)
		R[i] = 0;

	for(int i = 0; i < r; ++i){
		int t;
		scanf("%d", &t);
		R[t] = 1;
	}

	printf("%d %d\n", n, r);
	for(int i = 0; i < n; ++i)
		printf("%d ", R[i]);
	printf("\n");

	int result = recurse(R, 0, n);
	printf("%d\n", result);
}

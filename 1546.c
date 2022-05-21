#include <stdio.h>
double sum;
double  n, max, a[1001];
double  average;
int main() {
	scanf("%lf", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		sum = sum + a[i] / max * 100;
	}
	average = sum/n;
	printf("%lf", average);
}

#include <stdio.h>
int main() {
	char a[101];
	int minus = -1;
	scanf("%s", a);
	for(int i = 97; i < 123 ; i++){
		int count = 0;
		for(int j = 0; a[j] != '\0'; j++){
			if(i == a[j]){
				printf("%d ", j);
				count++;
				break;
			}
		}
		if(count != 1){
		printf("%d ", minus);
		}
	}
    return 0;
}
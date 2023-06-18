#include <stdio.h> 

void quickSort(int *number, int first, int last) {
    int i, j, pivot;
    int temp;
    if (first<last) {
        pivot = first;
        i = first;
        j = last;
        while (i<j) {
            while (number[i] <= number[pivot] && i<last)
                i++;
            while (number[j]>number[pivot])
                j--;
            if (i<j) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quickSort(number, first, j - 1);
        quickSort(number, j + 1, last);
    }
}

int main() {
	int n, m;
	while(scanf("%d%d",&n,&m)) {
		if(!n&&!m) break;
		int a[101];
		for(int i = 0; i < n; i++) {
			scanf("%d",a + i);
		}
		a[n] = m;
		quickSort(a,0,n);
		for (int i = 0; i < n+1; ++i) {
		    printf("%d%c", a[i], (i < n  ? ' ' : '\n'));
		}

	}
}
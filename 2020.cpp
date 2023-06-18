#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int cmp(const int *a,const int *b) {
	return abs(*a) - abs(*b);
}

void BubbleSort(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	//共进行sz-1趟
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//每一趟进来都假设有序
        // 每一趟
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (abs(arr[j]) < abs(arr[j + 1]))
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
        //若falg还是1，说明没有交换->已经有序了break退出
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
    int n, i, x[101];
    
    while (scanf("%d", &n), n)
    {
        for (i = 0 ; i < n ; i++)
            scanf("%d", x + i);
        // qsort(x, n, sizeof(int), cmp);
        BubbleSort(x,n);
        for (i = 0 ; i < n ; i++)
            printf("%d%c", x[i], (i != n - 1 ? ' ' : '\n'));
    }

    return 0;
}

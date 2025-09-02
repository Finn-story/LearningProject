# 算法基础课

## 第一讲 基础算法

### 快速排序(模板题)

**[785. 快速排序 - AcWing题库](https://www.acwing.com/problem/content/787/)**

```c++
# include <iostream>
# include <fstream> 
using namespace std;
const int N = 1e5 + 10;
int n;
int q[N];
void quick_sort(int q[], int l, int r)
{
	if(l >= r) return;
	int i = l - 1, j = r + 1;
	int x = q[l + r >> 1];
	while(i < j){
		do i++; while(q[i] < x);
		do j--; while(q[j] > x);
		if(i < j) swap(q[i], q[j]); 
	}
	// q[l] 
	quick_sort(q, l, j); quick_sort(q, j + 1, r);
	// q[r] or q[(l+r+1)/2] ceiling
	/*quick_sort(q, l, i -1); quick_sort(q, i, r);*/
	// test in:2 / 1 2
	
}
int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
		scanf("%d", &q[i]);
	quick_sort(q, 0, n-1);
	for(int i= 0; i <n ;i ++)
		printf("%d ", q[i]);
	return 0;
}
```

```note
快排属于分治算法，分治算法都有三步：
1. 分成子问题
2. 递归处理子问题
3. 子问题合并
```

---

**[786. 第k个数 - AcWing题库](https://www.acwing.com/problem/content/788/)**

```c++
# include <iostream>
using namespace std;
int n, k;
const int N = 1e5+ 10;
int q[N];
void quick_sort(int q[], int l, int r)
{
    if(l >= r) return;
    int x = q[l + r >>1], i = l -1, j = r + 1;
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i <j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j); quick_sort(q, j+ 1, r);   
}
int main(){
    cin >> n >> k;
    for(int i=0;i < n; i++)
    {
        scanf("%d", &q[i]);
    }
    quick_sort(q, 0, n -1);
    cout << q[k-1];
}
```

---

### 归并排序(模板题)

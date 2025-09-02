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


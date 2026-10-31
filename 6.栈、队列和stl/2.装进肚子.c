#include <stdio.h>
long long max = 0, sum = 0, j = 0, i = 0;
int cmp(const void *a, const void *b){
    int e1 = ((int*)a)[0] - ((int*)a)[1];
    int e2 = ((int*)b)[0] - ((int*)b)[1];
   return e2 - e1;
}
int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    int sub[100000][2];
    for(int i = 0; i < n; i++) scanf("%d", &sub[i][0]);
    for(int i = 0; i < n; i++) scanf("%d", &sub[i][1]);
    qsort(sub, n, sizeof(sub[0]), cmp);
    for(; i < k; i++) sum += sub[i][0];
    for(i; i < n; i++) sum += sub[i][1];
    printf("%lld", sum);
    return 0;
}
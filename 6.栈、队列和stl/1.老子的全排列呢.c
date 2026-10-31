#include <stdio.h>

int n = 8;
int arr[10];
int used[10];

void dfs(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            printf("%d", arr[i]);
            if (i < n) printf(" ");
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (used[i] == 0) {
            arr[x] = i;
            used[i] = 1;
            dfs(x + 1);
            used[i] = 0;
        }
    }
}

int main() {
    for (int i = 0; i <= n; i++) {
        used[i] = 0;
    }
    
    dfs(1);
    
    return 0;
}

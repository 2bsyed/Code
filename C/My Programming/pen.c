#include <stdio.h>
#include <stdlib.h>

#define MAXN 100005

int T, n, q, a[MAXN];
int parent[MAXN], size[MAXN], score[MAXN], idx[MAXN];

int getParent(int p) {
    if (parent[p] == p) {
        return p;
    } else {
        parent[p] = getParent(parent[p]);
        return parent[p];
    }
}

void unionn(int p, int q) {
    int rootP = getParent(p), rootQ = getParent(q);
    if (rootP == rootQ) {
        return;
    }
    if (size[rootP] < size[rootQ]) {
        parent[rootP] = rootQ;
        size[rootQ] += size[rootP];
        score[rootQ] += score[rootP];
        idx[rootP] = rootQ;
    } else {
        parent[rootQ] = rootP;
        size[rootP] += size[rootQ];
        score[rootP] += score[rootQ];
        idx[rootQ] = rootP;
    }
}

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            parent[i] = i;
            size[i] = 1;
            score[i] = a[i];
            idx[i] = i;
        }
        scanf("%d", &q);
        while (q--) {
            int x, y;
            scanf("%d%d", &x, &y);
            if (x == 1) {
                if (score[getParent(y)] != 0 && score[getParent(idx[y])] != 0) {
                    unionn(y, idx[y]);
                }
            } else if (x == 2) {
                printf("%d\n", size[getParent(y)]);
            } else if (x == 3) {
                int ans = 0;
                for (int i = 1; i <= n; i++) {
                    if (getParent(i) == getParent(y)) {
                        ans = i;
                        break;
                    }
                }
                printf("%d\n", ans);
            }
        }
    }
    return 0;
}

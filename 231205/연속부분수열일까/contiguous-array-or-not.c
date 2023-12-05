#include <stdio.h>
int input(FILE *fp, int *p, int k) {
    int i;
    for(i=0; i<k; i++)
    fscanf(fp, "%d", &p[i]);
}
int fun(int *x, int *y, int n, int m) {
    int i,j;
    int flag=0;

    for(i=0; i<n; i++) {
        if(x[i]==y[0]) {
            flag=1;
            for(j=1; j<m; j++) {
                if(i+j>=n) {flag=0; break;}
                if(x[i+j]!y[j]) {flag=0; break;}
            }
            if(j==m) break;
        }
    }
    return flag;
}

int main() {
    int n,m;
    int i,j;
    int *p1, *p2;
    int sw;
    FILE *fp, *op;
    fp=fopen("input.txt","r");
    op=fopen("output.txt","w");
    scanf("%d %d",&n,&m);
    p1=(int *)malloc(sizeof(int)*n);
    p2=(int *)malloc(sizeof(int)*m);
    input(fp,p1,n);
    input(fp,p2,m);
    sw=fun(p1,p2,n,m);
    if(sw==1)
    fprintf(op,"Yes\n");
    else
    fprintf(op,"No\n");
    free(p1);
    free(p2);
    fclose(fp);
    fclose(op);
    return 0;
}
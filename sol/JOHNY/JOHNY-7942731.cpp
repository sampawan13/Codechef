#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int cmp(const void *a, const void *b) {
 return (*(int*)a - *(int*)b);}

int main() {
 int t, k, n, a[105], ans;
 scanf("%d", &t);
 while(t--) {
  scanf("%d", &k);
  for(int i=0; i<k; i++) scanf("%d", &a[i]);
  scanf("%d", &n); 
  ans=a[n-1];
  qsort(a, k, sizeof(int), cmp);
  for(int i=0; i<k; i++) if(ans==a[i]) printf("%d\n", i+1);
 }
 return 0;
}
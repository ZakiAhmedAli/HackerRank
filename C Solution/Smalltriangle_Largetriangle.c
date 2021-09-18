#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle t) {
  double p = (t.a + t.b + t.c) / 2.0;
  return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

void swap(triangle *t1, triangle *t2) {
  triangle temp = *t1;
  *t1 = *t2;
  *t2 = temp;
}

void sort_by_area(triangle *tr, int n) {
  int i, j;
  for(i = 0; i < n - 1; i++)
  {
    for(j = 0; j < n - 1 - i; j++)
	{
      if(area(tr[j]) > area(tr[j + 1]))
	  {
          swap(&tr[j], &tr[j + 1]);
      }
    }
  }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int pa, pb, ta, tb, anos;

    printf("Pais A (pop/taxa): "); scanf("%d %d", &pa, &ta);
    printf("Pais B (pop/taxa): "); scanf("%d %d", &pb, &tb);

    float x = (float)pa / pb;
    float y = (float) (100 + tb) / (100 + ta);
    anos = ceil(log(x) / log(y));

    printf("%d\n", anos);
}
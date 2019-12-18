#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 10

typedef struct {
    float x;
    float y;
} Punto;

void print_point(Punto point)
{
    printf("\t(%.0f,%.0f)", point.x, point.y);
}

float distance(Punto p, Punto q)
{
    return sqrt(powf(p.x-q.x, 2)+powf(p.y-q.y, 2));
}

void print_points(Punto points[], int n)
{
    Punto o = {0,0};
    for(int i=0;i<n;i++) {
        print_point(points[i]);
        printf("\td(P,O) = %.2f\n", distance(points[i], o));
    }
    printf("\n");
}

void sort(Punto points[], int n)
{
    Punto o = {0,0}, tmp;
    for (int i = 0; i < n-1; i++) {
        for (int j = n-1; j > i; j--) {
            if(distance(points[j-1], o) > distance(points[j], o)) {
                tmp = points[j-1];
                points[j-1] = points[j];
                points[j] = tmp;
            }
        }
    }
}

int main(void)
{
    Punto points[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        points[i].x = rand() % 2000 - 1000;
        points[i].y = rand() % 2000 - 1000;
    }
    print_points(points, SIZE);
    sort(points, SIZE);
    print_points(points, SIZE);
    return 0;
}
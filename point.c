#include <stdio.h>
#include <math.h>
#include "point.h"

Point input_point() {
    Point z;
    printf("name(x, y): ");
    scanf(" %c(%lf, %lf)", &z.name, &z.x, &z.y);
    return z;
}

void print_point(Point z) {
    printf("%c(%lf, %lf)\n", z.name, z.x, z.y);
}

double distanceToOrigin(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

int save_file(char* fname, Point p, double res) {
    FILE* out;

    if ((out = fopen(fname, "a")) == NULL) {
        return 0;
    }

    fprintf(out, "%c(%lf, %lf)\n%lf\n", p.name, p.x, p.y, res);

    if (fclose(out) != NULL) {
        return 0;
    }
    return 1;
}

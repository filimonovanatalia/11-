#ifndef POINT_H
#define POINT_H

typedef struct point {
    double x;
    double y;
    char name;
} Point;

Point input_point();
void print_point(Point z);
double distanceToOrigin(Point p);
int save_file(char* fname, Point p, double res);

#endif

#include <stdio.h>
#include "point.h"

int main() {
    Point a = input_point();
    print_point(a);

    double res = distanceToOrigin(a);
    printf("%lf\n", res);

    save_file("result.txt", a, res);

    return 0;
}

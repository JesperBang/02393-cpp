#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b) {
    x = a;
    y = b;
}

v2d::v2d(const v2d & v) {
    x = v.x;
    y = v.y;
}

v2d::~v2d() {
    // Nothing to do here
}

v2d & v2d::operator=(const v2d &v) {
    x = v.x;
    y = v.y;
    return *this;
}

v2d & v2d::operator+(const v2d &v) {
    x += v.x;
    y += v.y;
    return *this;
}

double v2d::operator*(const v2d &v) {
    return (x * v.x) + (y * v.y);
}

v2d & v2d::operator*(double k) {
    x *= k;
    y *= k;
    return *this;
}

double v2d::length() {
    return std::sqrt((*this)*(*this));
}

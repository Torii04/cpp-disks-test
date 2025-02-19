#include "disk.h"
#include <cmath>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Disk::move(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

double Disk::distance(Disk& other){

    double dx = x - other.x;
    double dy = y - other.y;

    double d = sqrt(pow(dx,2) + pow(dy,2));

    return d;

}
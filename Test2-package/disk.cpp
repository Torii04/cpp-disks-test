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
    double dx = x - other.y;
    double dy = y - other.y;
    
    double distance = std::sqrt(std::pow(dx,2) + std::pow(dy,2));
    return distance;
}
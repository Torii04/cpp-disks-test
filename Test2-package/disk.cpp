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

double Disk::distance(Disk& disk){
    double dx = x - disk.y;
    double dy = y - disk.y;
    
    double distance = std::sqrt(std::pow(dx,2) + std::pow(dy,2));
    return distance
}
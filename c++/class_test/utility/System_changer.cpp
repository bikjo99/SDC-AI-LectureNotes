//
// Created by eddi on 23. 12. 1.
//

#include <cmath>
#include <iostream>
#include "System_changer.h"

System_changer::System_changer() {
    std::cout << "바꿔버려~!" << std::endl;
}

System_changer::~System_changer() {
    std::cout << "메타몽진화~!" << std::endl;
}

Spherical System_changer::getSphericalFromOrthogonal(Orthogonal & _orthogonal_to_change) {
    float x = _orthogonal_to_change.getX();
    float y = _orthogonal_to_change.getY();
    float z = _orthogonal_to_change.getZ();
    auto tmp_r = (float)sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    auto tmp_theta = (float)acos((double) z/tmp_r);
    auto tmp_phi = (float)atan((double) y/x);

    auto *spherical = new Spherical(tmp_r, tmp_theta, tmp_phi);

    return *spherical;
}

Orthogonal System_changer::getOrthogonalFromSpherical(Spherical & _spherical_to_change) {
    float r = _spherical_to_change.getR();
    float theta = _spherical_to_change.getTheta();
    float phi = _spherical_to_change.getPhi();

    float _x = r * sin(theta) * cos(phi);
    float _y = r * sin(theta) * sin(phi);
    float _z = r * cos(theta);
    auto *orthogonal = new Orthogonal(_x, _y, _z);
    return *orthogonal;
}

Vector System_changer::getVectorFromOrthogonal(Orthogonal & _orthogonal_to_change) {
    float x = _orthogonal_to_change.getX();
    float y = _orthogonal_to_change.getY();
    float z = _orthogonal_to_change.getZ();

    auto *vector = new Vector(x,y,z);

    return *vector;
}


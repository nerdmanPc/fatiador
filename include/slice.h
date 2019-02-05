#ifndef SLICE_H
#define SLICE_H

#include "../include/kernel.h"
#include "../include/mesh.h"
#include <vector>

class SliceIntersection{
  std::vector<PlaneIntersection_3> intersections;
public:
  SliceIntersection();
  SliceIntersection(Real zCoord, Mesh& mesh);

};

#endif
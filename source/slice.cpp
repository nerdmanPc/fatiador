#include "../include/slice.h"

SliceIntersection::SliceIntersection(){}

SliceIntersection::SliceIntersection(Real zCoord, Mesh& mesh){

  Mesh::FacetIterator iterator = mesh.facetsBegin();
  Mesh::FacetIterator iteratorEnd = mesh.facetsEnd();

  while (iterator != iteratorEnd){
    PlaneIntersection_3 intersection(zCoord, *iterator);
    if (intersection.nVertices >= 2){
      intersections.push_back(intersection);
    }
    ++iterator;
  }
}
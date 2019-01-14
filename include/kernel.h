#ifndef KERNEL_H
#define KERNEL_H

typedef double Real;

struct Real_3{
  Real x, y, z;
};

struct Real_2{
  Real x, y;
};

struct Vertex_3{
  Real_3 position;
  Vertex_3();
  Vertex_3(Real zCoord, const Vertex_3& segmentStart, const Vertex_3& segmentEnd);
};

struct Triangle_I{
  unsigned long a, b, c;
};

struct Triangle_3{
  Vertex_3 a, b, c;
};

struct PlaneIntersection_3{
  char nVertices;
  Vertex_3 vertices[3];
  PlaneIntersection_3(Real zCoord, const Triangle_3& triangle);
};

#endif

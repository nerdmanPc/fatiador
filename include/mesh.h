#ifndef MESH_H
#define MESH_H

#include <vector>
#include <fstream>
#include "kernel.h"

class Mesh{
  std::vector<Vertex_3> vertices;
  std::vector<Triangle_I> facets;
public:
  Mesh(const char *filepath);
  void save(const char *filepath);
  ~Mesh();
};

#endif
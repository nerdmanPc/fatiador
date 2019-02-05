#ifndef MESH_H
#define MESH_H

#include <vector>
#include <fstream>
#include "kernel.h"

class Mesh{
  friend class FacetIterator;

private:

  std::vector<Vertex_3> vertices;
  std::vector<Triangle_I> facets;

public:

  class FacetIterator{
    std::vector<Triangle_I>::iterator _value;
    const std::vector<Vertex_3> *_vector;
  public:
    FacetIterator();
    FacetIterator(
      std::vector<Triangle_I>::iterator& value,
      std::vector<Vertex_3>& vector
    );
    Triangle_3 operator*();
    FacetIterator operator++(); //pré-incremento
    bool operator==(FacetIterator& other);
    bool operator!=(FacetIterator& other); 
  };


  Mesh(const char *filepath);
  void save(const char *filepath);
  FacetIterator facetsBegin();
  FacetIterator facetsEnd();
};

#endif
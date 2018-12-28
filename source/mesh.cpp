#include "../include/mesh.h"
#include <iostream>

Mesh::Mesh(const char *filepath){
  std::ifstream meshFile;
  unsigned int nVertices, nFacets;

  meshFile.open(filepath);
  meshFile.ignore(128, '\n');
  meshFile >> nVertices;
  meshFile >> nFacets;
  meshFile.ignore(128, '\n');


  for (unsigned int i=0; i<nVertices; i++){
    Vertex_3 auxVertex;
    meshFile >> auxVertex.position.x;
    meshFile >> auxVertex.position.y;
    meshFile >> auxVertex.position.z;
    vertices.push_back(auxVertex);
  }

  for (unsigned int i=0; i<nFacets; i++){
    Triangle_I auxTriangle;
    unsigned int faceType;

    meshFile >> faceType;
    if (faceType != 3){
      continue;
    }

    meshFile >> auxTriangle.a;
    meshFile >> auxTriangle.b;
    meshFile >> auxTriangle.c;
    facets.push_back(auxTriangle);
  }

  meshFile.close();
}

void Mesh::save(const char *filepath){

  std::ofstream meshFile(filepath);

  unsigned int nVertices = vertices.size();
  unsigned int nFacets = facets.size();

  meshFile << "OFF\n";
  meshFile << nVertices << ' ' << nFacets << ' ' << 0 << std::endl;

  for (unsigned int i=0; i<nVertices; i++){
    Vertex_3 auxVertex = vertices[i];
    meshFile << auxVertex.position.x << ' ';
    meshFile << auxVertex.position.y << ' ';
    meshFile << auxVertex.position.z << '\n';
  }

  for (unsigned int i=0; i<nFacets; i++){
    Triangle_I auxTriangle = facets[i];

    meshFile << "3 ";
    meshFile << auxTriangle.a << ' ';
    meshFile << auxTriangle.b << ' ';
    meshFile << auxTriangle.c << '\n';
  }

  meshFile.close();
}

Mesh::~Mesh(){

}
#include "../include/loader.h"

void loadMesh(const char* filepath, Polyhedron * mesh){
  std::ifstream inFile = std::ifstream(filepath);
  inFile >> (*mesh);
  inFile.close();
}

void buildTree(const Polyhedron& mesh, AABB_tree *tree){
  //tree->insert(mesh.facets_begin(), mesh.facets_end());
  Polyhedron::Face_const_iterator iterator = mesh.facets_begin();
  while(iterator != mesh.facets_end()){
    tree->insert(  );
  }
  tree->build();
    //(*tree) = mesh.facets_begin(), mesh.facets_end());
}
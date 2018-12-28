#include "../include/mesh.h"

int main(int argc, char** argv){

  if (argc < 3){
    return -1;
  }

  Mesh mesh(argv[1]);
  mesh.save(argv[2]);
  
  return 0;
}

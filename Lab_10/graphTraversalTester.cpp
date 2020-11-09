#include <fstream>
#include <iostream>
#include "graphType.h"

using namespace std;

int main() {

  graphType graph(50);

  graph.createGraph();

  //graph.printGraph();

  // todo: output results of depth first search here
  graph.depthFirstTraversal();

  cout << endl;
  
  // todo: output results of breadth first search here
  graph.breadthFirstTraversal();

  cout << endl;

  return 0;
}
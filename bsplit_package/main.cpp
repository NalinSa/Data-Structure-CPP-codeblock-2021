#include <stdexcept>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "map_bst.h"
#include "student.h"
#include <algorithm>
//#pragma once



int main() {
  ///std::vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80};
  std::vector<int> vec;
  //std::reverse(v.begin(),v.end());


  // add value from v to m
  CP::map_bst<int,int> m1,m2;
  int v,xx;
  std::cin>>v;
  for (int i =0;i!=v;i++) {
    std::cin>>xx;
    vec.push_back(xx);
    m1[xx] = -xx;
  }

  int val = 5;
  printf("The \"original\"  tree\n");
  m1.print();
  m2 = m1.split(val);

  //check
  bool ok = true;
  for (auto &x : vec) {
    if (x < val && (m1.find(x) == m1.end() || m2.find(x) != m2.end()) ) {
      ok = false;
      break;
    }
    if (x >= val && (m2.find(x) == m2.end() || m1.find(x) != m1.end() ) ) {
      ok = false;
      break;
    }
  }

  printf("Start checking...\n");
  printf("The \"less than\"  tree\n");
  m1.print();
  printf("The \"equal or more than\" tree\n");
  m2.print();
  if (ok) {
    printf("OK\n");
  } else {
    printf("WRONG\n");
  }

	return 0;
}


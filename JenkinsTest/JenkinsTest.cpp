// JenkinsTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>

int main()
{
  std::ofstream outfile;
  outfile.open("outfile.txt");
  if (outfile.is_open()) {
    outfile << "Finished building" << std::endl;
    outfile.close();
  }
  else
  {
    fprintf(stderr, "Failed to open file for write\n");
  }
  fprintf(stderr, "Finished building\n");
  return 0;
}


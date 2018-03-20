#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
  ifstream inFile;

  inFile.open("Run_50.dat");

  if (inFile) {
    string linebuffer;
    for (int i = 0; i < 1000; ++i) {
      while(getline(inFile, linebuffer)) {
        if (i > 12) {
          getline(inFile, linebuffer);
          cout << linebuffer;
        }
      }
    }

    inFile.close();
  }
  else {
    cerr << "Unable to open file !!";
    exit(1);
  }

  // cout << "Done !!" << endl;

  return 0;
}

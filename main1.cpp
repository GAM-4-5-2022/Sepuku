#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){   
  string sudoku, sudokusol;
  int a;
  ifstream suds("sudokusol.txt");
  ifstream sudl("sudokulist.txt");
  srand(time(0));  // Initialize random number generator.
  a = rand()%6+1;
  for(int i=0;i<a;i++){
    getline(suds,sudokusol);
  }
  for(int i=0;i<a;i++){
    getline(sudl,sudoku);
  }
  cout << sudoku << endl << sudokusol << endl;

  return 0; 
}

// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>
#include <cstdlib>

using namespace std;

// Print all the factors of the given int to stdout
void printFactors(int);

int main(int argc, char** argv) {
  // Ask user for input
  cout << "Which positive integer would you like me to factorize? ";
  // Store user input in initialized int num and check we got correct input
  int num;
  if (!(cin >> num)) {
    cerr << "You didn't enter a number" << endl;
    return EXIT_FAILURE;
  }
  // Print the factors of num
  printFactors(num);
}

void printFactors(int n) {
  // For every number between 1 and n - 1, if it divides n print it
  // n always divide n so do it outside the loop with a newline
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      cout << i << " ";
    }
  }
  cout << n << endl;
}

// Copyright Chun Shen @ 2017
#include <stddef.h>
#include <fstream>

#include "pretty_ostream.h"

using namespace std;

pretty_ostream::pretty_ostream() {}

pretty_ostream::~pretty_ostream() {}


//! This function output information message
void pretty_ostream::info(string message) {
    cout << "[Info] " << message << RESET << endl;
}


//! This function output debug message
void pretty_ostream::debug(string message) {
    cout << CYAN << "[debug] " << message << RESET << endl;
}


//! This function output warning message
void pretty_ostream::warning(string message) {
    cout << BOLD << YELLOW << "[Warning] " << message << RESET << endl;
}


//! This function output error message
void pretty_ostream::error(string message) {
    cout << BOLD << RED << "[Error] " << message << RESET << endl;
}

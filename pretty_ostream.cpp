// Copyright Chun Shen @ 2017
#include <iomanip>
#include <sys/time.h>
#include <sys/resource.h>

#include "pretty_ostream.h"

using namespace std;

pretty_ostream::pretty_ostream() {}

pretty_ostream::~pretty_ostream() {}


//! This function output information message
void pretty_ostream::info(string message) {
    cout << "[Info] " << get_memory_usage() << " " << message << RESET << endl;
}


//! This function output debug message
void pretty_ostream::debug(string message) {
    cout << CYAN << "[debug] " << get_memory_usage() << " "
         << message << RESET << endl;
}


//! This function output warning message
void pretty_ostream::warning(string message) {
    cout << BOLD << YELLOW << "[Warning] " << message << RESET << endl;
}


//! This function output error message
void pretty_ostream::error(string message) {
    cout << BOLD << RED << "[Error] " << message << RESET << endl;
}

//! This function returns a string for the memory usage
//! of the current program in MB
string pretty_ostream::get_memory_usage() {
    struct rusage usage;
    if (getrusage(RUSAGE_SELF, &usage) == 0) {
        ostringstream memory_usage;
        memory_usage << setprecision(4)
                     << usage.ru_maxrss/1024./1024. << " MB";
        return(memory_usage.str());
    } else {
        return(0);
    }
}

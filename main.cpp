#include <iostream>
#include "pretty_ostream.h"

int main() {
    pretty_ostream test;
    test.info("This is an infomation message");
    test << "This is an infomation message";
    test.flush("INFO");
    test.debug("This is a debug message");
    test << "This is a debug message";
    test.flush("DEBUG");
    test.warning("This is a warning message");
    test << "This is a " << "warning message";
    test.flush("warning");
    test.error("This is an error message");
    test << "This is an error message";
    test.flush("ERROR");
    return(0);
}

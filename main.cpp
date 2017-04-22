#include <iostream>
#include "pretty_ostream.h"

int main() {
    pretty_ostream test;
    test.info("This is an infomation message");
    test.debug("This is a debug message");
    test.warning("This is a warning message");
    test.error("This is an error message");
    return(0);
}

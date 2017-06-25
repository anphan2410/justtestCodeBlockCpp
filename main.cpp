#include <stdio.h>
#include <iostream>
#include "anlogger.h"
#include <algorithm>


void abcTest(std::string &abc) {
    abc += "ahjhj";
    std::cout << abc << std::endl;
}


int main(int argc, char *argv[])
{


    anAck("Success !");
    anInfo("It is running !");
    anDbg("it should be shown if condition is true", true);
    anWarning("too disappointed !");
    anError("oh no it failed !");


    std::cout << "END PROGRAM !" << std::endl;

    return 0;
}

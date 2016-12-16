#include "hello.h"
#include "output.h"
//#include "searcher.h"

int main () {
    Greeter greeter;
    Outputter outputter;
//    Searcher searcher;
    outputter.console("Hello from console.");
//    searcher.searcher();
    greeter.hello();
    return 0;
}

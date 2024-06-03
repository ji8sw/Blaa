#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int RandomInt(int Minimum, int Maximum) 
{
    return Minimum + rand() % (( Maximum + 1 ) - Minimum);
}

std::vector<std::string> Dictionary = 
{
        "lorem", "ipsum", "dolor", "sit", "amet",
        "consectetur", "adipiscing", "elit", "sed", "do",
        "eiusmod", "tempor", "incididunt", "ut", "labore",
        "et", "dolore", "magna", "aliqua", "ut", "enim",
        "ad", "minim", "veniam", "quis", "nostrud",
        "exercitation", "ullamco", "laboris", "nisi",
        "ut", "aliquip", "ex", "ea", "commodo", "consequat",
        "videlicet", "pro", "ergo", "scilicet", "quondam",
        "syllabatim", "solus"
};

void Sleep(int Count)
{
    for (int Fart = 0; Fart < Count; Fart++)
         long double* Poop = new long double;
}
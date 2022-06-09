#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <list>
#include <algorithm>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2) // my shit literally segfaults if you don't enter a number lmao
    {
        std::cout << "Usage: " << argv[0] << " <number of items to sort>\n";
    }

    srand (time(NULL)); 
    int listLen = atoi(argv[1]); // list length is passed in 
    int sortList[listLen];

    for (int i = 0; i < listLen; i++) 
    {
        int num = rand() % 1000 + 1; 
        sortList[i] = num; 
    }

    while(std::is_sorted(sortList, sortList + listLen))
    {
        std::random_shuffle(std::begin(sortList), std::end(sortList)); // need to provide start/end pointers
    }
    std::cout << "Sorted! \n";
}

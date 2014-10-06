#include "func.h"
#include <sstream>
#include <iostream>


using namespace std;
void decToBinary_helper(string &str, int dec);

std::string decimalToBinary(const std::string &src)
{
    /*
    decimalToBinary: returns binary representation of number in src, or Error.
     */
    istringstream myistream(src);
    int decRepr = 0;
    if(!(myistream >> decRepr))
        return string("Error!");

    string str;
    decToBinary_helper(str, decRepr);
    return str;
}

void decToBinary_helper(string  &str, int dec)
{
    /*
     decToBinary_heloper
     input: ostringstream to write numbers in; current decimal representation 'dec'
     output: os will contain reversed number in bin format
     */
    if (dec == 1)
        str.insert(str.begin(), '1');
    else
    {
        if (dec % 2 == 0)
            str.insert(str.begin(), '0');
        else
            str.insert(str.begin(), '1');

        decToBinary_helper(str,dec/2);
    }

}


void numbersToBinary(string &src)
{
    for (string::iterator iter = src.begin(); iter != src.end(); iter++)
    {
        if (isdigit(*iter))
        {
            string::iterator numberStart = iter++; //numberStart = iter;
            while ((iter != src.end()) && (isdigit(*iter)))
            {
                iter++;
            }
            string ins = decimalToBinary(string(numberStart, iter));
            src.replace(numberStart, iter, ins);
        }
    }

}
#include <iostream>

using namespace std;

int main()
{ 
    bool opening_double_quotes = false;
    bool is_within_double_quotes = false;

    char byte; 
    while (cin >> noskipws >> byte)
    {
        if ( byte == '\"' && opening_double_quotes == false)  // quotation mark
        {
            opening_double_quotes = true;
            is_within_double_quotes = false;
            cout << "F";
        } else if ( byte == '\"' && opening_double_quotes == true )
        {
            is_within_double_quotes = true;
            opening_double_quotes = false;
            cout << "S";
        }
        else if (is_within_double_quotes == false)
        {
            if ( byte == '.' || // period
                 byte == ',' || // comma
                 byte == '?' || // question mark
                 byte == '-' || // dash
                 byte == '\''   // single quote 
               )
            {
                byte = ' ';
            } 

        } 
        
        cout << byte;
        cin.get
    }
}

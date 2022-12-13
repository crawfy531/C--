using namespace std;

#include <iostream>
#include <vector>
#include <string>

namespace UserCommunication{
        class Interface
        {
            // this will show the user a message given the string
            public:
            void OutputMessage(string message){
                cout << message;
            }
            // this will get input from the user and return it as a string
            string InputResponse(){
                string input;
                cout << endl;
                cin >> input;
                return input;
            }
    };

    
}
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
class InputHandler {
	public:
		InputHandler();
		~InputHandler();
		int promptOptionInt(string promptMsg, string optionName, int numOptions);
		bool isMalformedInt(string input);
		string promptPath(string promptMsg);
		int promptInt(string promptMsg);
		double promptDouble(string promptMsg);
		bool isMalformedFloat(string input);
};

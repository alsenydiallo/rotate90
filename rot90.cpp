#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> lines;

	string line;
	while (getline(cin, line)) {
  		lines.push_back(line);
  	}

	// find the length of the largest word
	int largestLength = lines.at(0).length();
	for(int i = 1; i < (int)lines.size(); i++){
		int x = lines.at(i).length();	
		if(x > largestLength)
			largestLength = x;
	}
	
	// print lines rotated 90 degree.
	for(int i=0; i < largestLength; i++){
		for(int j = (int)(lines.size()-1); j >= 0; j--){
			int lineLength = lines.at(j).length();
			if(lineLength > i)
				cout << lines[j][i];
			else
				cout << " ";
		}
		cout << endl;
	}
  	return 0;
}

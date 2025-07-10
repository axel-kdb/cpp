#include <iostream>
#include <list>
using namespace std;

class Channel {
public:
	string Name;
	string Owner;
	int Subs;
	list<string> VideoTitles;

	Channel(string name, string owner) {
		Name = name;
		Owner = owner;
		Subs = 0;
	}

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "Owner: " << Owner << endl;
		cout << "Subs: " << Subs << endl;
		cout << "Videos: " << endl;
		for (string VideoTitle : VideoTitles) {
			cout << VideoTitle <<endl;
		}
	}
};

int main() {	

	Channel ytChannel("Asd45", "Asd");
	ytChannel.VideoTitles.push_back("Asd Test");
	Channel ytChannel2("Dsa25", "Dsa");

	ytChannel.GetInfo();
	ytChannel2.GetInfo();

	return 0;	
}


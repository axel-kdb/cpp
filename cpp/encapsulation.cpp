#include <iostream>
#include <list>
using namespace std;

class Channel {
private:
	string Name;
	string Owner;
	int Subs;
	list<string> VideoTitles;
public:
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
	void Subscribe() {
		Subs++;
	}
	void Unsubscribe() {
		Subs--;
	}
};

int main() {	

	Channel ytChannel("Asd45", "Asd");
	ytChannel.Subscribe();
	ytChannel.GetInfo();

	return 0;	
}


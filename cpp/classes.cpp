#include <iostream>
#include <list>
using namespace std;

class Channel {
public:
	string Name;
	string Owner;
	int Subs;
	list<string> VideoTitles;
};

int main() {
	
	Channel ytChannel;
	ytChannel.Name = "CodeBeauty";
	ytChannel.Owner = "Saldina";
	ytChannel.Subs = 1800;
	ytChannel.VideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

	cout << "Name: " << ytChannel.Name << endl;
	cout << "OwnerName: " << ytChannel.Owner << endl;
	cout << "SubscribersCount: " << ytChannel.Subs << endl;
	cout << "Videos:" << endl;
	
	for (string VideoTitle : ytChannel.VideoTitles) {
		cout << VideoTitle << endl;
	}

	return 0;	
}


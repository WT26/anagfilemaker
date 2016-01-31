#include "txtfilemaker.hh"
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void FileReader(string name_of_the_file) {
	cout << "Counting the words and making the files...\n";
	ifstream the_file(name_of_the_file);
	string line;
	vector < vector<string> > all_words;
	vector<string> count1;
	vector<string> count2;
	vector<string> count3;
	vector<string> count4;
	vector<string> count5;
	vector<string> count6;
	vector<string> count7;
	vector<string> count8;
	vector<string> count9;
	vector<string> count10;
	vector<string> count11;
	vector<string> count12;
	vector<string> count13;
	vector<string> count14;
	vector<string> count15;
	vector<string> count26;
	vector<string> count16;
	vector<string> count17;
	vector<string> count18;
	vector<string> count19;
	vector<string> count20;
	vector<string> count21;
	vector<string> count22;
	vector<string> count23;
	vector<string> count24;
	vector<string> count25;

	while (!the_file.eof()) {
		the_file >> line;

		if (line.length() == 1) {
			count1.push_back(line);
		}
		else if (line.length() == 2) {
			count2.push_back(line);
		}
		else if (line.length() == 3) {
			count3.push_back(line);
		}
		else if (line.length() == 4) {
			count4.push_back(line);
		}
		else if (line.length() == 5) {
			count5.push_back(line);
		}
		else if (line.length() == 6) {
			count6.push_back(line);
		}
		else if (line.length() == 7) {
			count7.push_back(line);
		}
		else if (line.length() == 8) {
			count8.push_back(line);
		}
		else if (line.length() == 9) {
			count9.push_back(line);
		}
		else if (line.length() == 10) {
			count10.push_back(line);
		}
		else if (line.length() == 11) {
			count11.push_back(line);
		}
		else if (line.length() == 12) {
			count12.push_back(line);
		}
		else if (line.length() == 13) {
			count13.push_back(line);
		}
		else if (line.length() == 14) {
			count14.push_back(line);
		}
		else if (line.length() == 15) {
			count15.push_back(line);
		}
		else if (line.length() == 15) {
			count15.push_back(line);
		}
		else if (line.length() == 16) {
			count16.push_back(line);
		}
		else if (line.length() == 17) {
			count17.push_back(line);
		}
		else if (line.length() == 18) {
			count18.push_back(line);
		}
		else if (line.length() == 19) {
			count19.push_back(line);
		}
		else if (line.length() == 20) {
			count20.push_back(line);
		}
		else if (line.length() == 21) {
			count21.push_back(line);
		}
		else if (line.length() == 22) {
			count22.push_back(line);
		}
		else if (line.length() == 23) {
			count23.push_back(line);
		}
		else if (line.length() == 24) {
			count24.push_back(line);
		}
		else if (line.length() == 25) {
			count25.push_back(line);
		}
		else if (line.length() == 26) {
			count26.push_back(line);
		}
	}
	all_words.push_back(count1);
	all_words.push_back(count2);
	all_words.push_back(count3);
	all_words.push_back(count4);
	all_words.push_back(count5);
	all_words.push_back(count6);
	all_words.push_back(count7);
	all_words.push_back(count8);
	all_words.push_back(count9);
	all_words.push_back(count10);
	all_words.push_back(count11);
	all_words.push_back(count12);
	all_words.push_back(count13);
	all_words.push_back(count14);
	all_words.push_back(count15);
	all_words.push_back(count16);
	all_words.push_back(count17);
	all_words.push_back(count18);
	all_words.push_back(count19);
	all_words.push_back(count20);
	all_words.push_back(count21);
	all_words.push_back(count22);
	all_words.push_back(count23);
	all_words.push_back(count24);
	all_words.push_back(count25);
	all_words.push_back(count26);

	int number{1};
	for (auto vec : all_words) {
		string save_file_name{ "words_" };
		save_file_name += to_string(number) + ".txt";
		ofstream a_file(save_file_name);

		for (auto str : vec) {
			a_file << str << "\n";
		}
		number++;
	}
	cout << "DONE !\n\n\n";

	cout << "Press enter to exit\n";
	getline(cin, line);
}
#include "txtfilemaker.hh"
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void FileReader(string name_of_the_file) {
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

	while (!the_file.eof()) {
		the_file >> line;

		if (line.length == 1) {
			count1.push_back(line);
		}
		else if (line.length == 2) {
			count2.push_back(line);
		}
		else if (line.length == 3) {
			count3.push_back(line);
		}
		else if (line.length == 4) {
			count4.push_back(line);
		}
		else if (line.length == 5) {
			count5.push_back(line);
		}
		else if (line.length == 6) {
			count6.push_back(line);
		}
		else if (line.length == 7) {
			count7.push_back(line);
		}
		else if (line.length == 8) {
			count8.push_back(line);
		}
		else if (line.length == 9) {
			count9.push_back(line);
		}
		else if (line.length == 10) {
			count10.push_back(line);
		}
		else if (line.length == 11) {
			count11.push_back(line);
		}
		else if (line.length == 12) {
			count12.push_back(line);
		}
		else if (line.length == 13) {
			count13.push_back(line);
		}
		else if (line.length == 14) {
			count14.push_back(line);
		}
		else if (line.length == 15) {
			count15.push_back(line);
		}

		/*
		map<char, int>::iterator iter_randomword = lettercount.begin();
		map<char, int>::iterator iter_theword = lettercount_word.begin();

		bool same{ true };

		while (iter_randomword != lettercount.end()) {
			if (iter_randomword->second != iter_theword->second) {
				same = false;
			}
			iter_randomword++;
			iter_theword++;
		}
		if (same) {
			matching_words.push_back(line);
		}
		*/

	}
	//search_done(matching_words);
}
/*
void search_phase(string line) {
	if (line == "crawls") {
		cout << "25% of search done\n";
	}

	else if (line == "labyrinth") {
		cout << "50% of search done\n";
	}

	else if (line == "seceding") {
		cout << "75% of search done\n";
	}
}

*/

map<char, int> lettercount_for_the_word(vector<char> letters, string line) {
	map<char, int> lettercount;
	for (char c : letters) {
		int temp = count(line.begin(), line.end(), c);
		lettercount[c] = temp;
	}
	return lettercount;
}

void search_done(vector<string> matching_words) {
	string line;
	cout << "\nSearch done!\nMatching words are:\n\n";
	for (auto word : matching_words) {
		cout << "1. " << word << "\n";
	}

	cout << "\nPress enter to exit." << endl;

	getline(cin, line);
}
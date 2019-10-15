/*
   files.cpp
   By:Jared Maltos
   Created: 10/13/2019
   CS 202: Homework 02
   Purpose: .cpp for file
   Details: Put files.hpp, files.cpp, and filetest.cpp into a project to work
   Note: include all the .dat files into the same directory as project and files
*/

#include "files.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ios;
using std::ifstream;
using std::ofstream;

#include <vector>
using std::vector;

/*
Exercise A: this function opens a file with a name which contains up to 1000 unique user names
			and ID numbers in a text base format

this function getIdFromFile takes 3 parameters (string, istream, ostream) and returns an int
*/
int getIdFromFile(string filename, istream &in, ostream &out) {

	ifstream fin(filename.c_str());

	//keeps reading usernames till none are left and returns 0
	//it repeatedly reads a username from the istream parameter
	//then it looks up the corresponding ID number in the file
	if (fin.is_open()) {
		string str, temp;
		int tempId, id;

		while (in >> str) {
			fin.clear();
			fin.seekg(0, ios::beg);
			id = -1;

			while (fin >> temp >> tempId) {
				if (temp == str) {
					id = tempId;
					break;
				}
			}

			//no username prints error on a line by itself
			if (id == -1) {
				out << "error" << endl;
			}

			//prints id number to ostream on a line by itself
			else {
				out << id << endl;
			}

		}

		return 0;
	}

	//being unable to open file will return -1
	else {
		return -1;
	}

}

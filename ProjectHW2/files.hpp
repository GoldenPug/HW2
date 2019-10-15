/*
   files.hpp
   By: Jared Maltos
   Created: 10/13/2019
   CS 202: Homework 02
   Purpose: .hpp for file
   Details: Put files.hpp, files.cpp, and filetest.cpp into a project to work
*/

#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <string>
using std::string;

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

//function for exercise a
int getIdFromFile(string filename, istream &in, ostream &out);

//function for exercise b
void numberChase(string files, ostream& out);

#endif
//end of file

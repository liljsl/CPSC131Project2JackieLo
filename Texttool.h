#pragma once

#include <string>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <list>

using namespace std;

class TextTool 
{
public:
	// default constructor
	TextTool() 
	{
		wordlist = new list<string>[arr];

	}

	// destructor
	~TextTool() 
	{
		delete[] wordlist;	//the destructor

		cout << "The object is being deleted." << endl;	//object is being removed

	}

	// Load information from a text file with the given filename.
	void loadListFromTextfile(string filename) 
	{
		ifstream ifs;
		ifs.open(filename);

		if (ifs.is_open()) 
		{
			string aword;
			while (ifs >> aword) 
			{
				addEntryBack(aword);
			}
			ifs.close();
		}
		else
			throw invalid_argument("Could not open file " + filename);
	}

	// return the number of words in the linked list
	int totalWords() 
	{
		return totalW;	//returning the number of words

	}

	// add entry at the back of the linked list
	void addEntryBack(const string& aword) 
	{
		
		list<string>::const_iterator Wlist;
		for (auto Wlist = aword.begin(); Wlist != aword.end(); Wlist++)
		{
			

		}
	}

	// print all words stored in the linked list, separated by a space
	const string listToString() 
	{
		return allWords;
	}

	// print duplicated words in the linked list
	string printDuplicates() 
	{
		int count = 0;
		int previous = 0;

		for (int i = 0; i < NumofW; i++)
		{
			for (int j = 0; j < NumofW; j++)
			{
				if (wordlist[i].begin() == wordlist[j].begin())
				{
					count++;
				}
			}
			if (count > previous)
			{
				DuplicateW = wordlist[i].begin();
				previous = count;
				count = 0;
			}
		}
		return DuplicateW;
	}

	// remove duplicated words in the linked
	void removeDuplicates() 
	{
		// TO BE COMPLETED

	}

	// determine the total number of duplicated words in the list
	int totalDuplicates() 
	{
		// TO BE COMPLETED
		return totalDup;
	}

	// check if the list is empty
	bool isEmpty() 
	{
		return (totalW == 0);
	}

	// Empty the list
	void makeEmpty() 
	{
		list<string>::const_iterator beginIter = wordlist->begin();
		list<string>::const_iterator endIter = wordlist->end();
		wordlist->erase(beginIter, endIter);
	}

private:

	list<string> *wordlist;

	string DuplicateW;
	string allWords;

	string arr = 2000;

	int totalW = 0;
	int NumofW = 0;
	int totalDup = 0;


};

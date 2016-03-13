//
//  Folder.h
//  Folders
//
//  Created by Ivan Turianitsa on 3/13/16.
//  Copyright © 2016 Ivan Turianytsia. All rights reserved.
//

#ifndef Folder_h
#define Folder_h

#include <iostream>
#include <vector>
using namespace std;

class Folder {
private:
    vector<Folder *> children; // Folders that this folder contains
    string name; // Folder name
    void iterate(int level); // Helper function for void show();
public:
    Folder(); // Root folder constructor
    Folder(string n, Folder &p); // Normal folder constructor (name, parent folder);
    void show(); // Display folder tree, all contained folders
};

#endif /* Folder_h */

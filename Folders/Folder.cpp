//
//  Folder.cpp
//  Folders
//
//  Created by Ivan Turianitsa on 3/14/16.
//  Copyright © 2016 Ivan Turianytsia. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Folder.h"

using namespace std;

void Folder::iterate(int level) { // int level - for displaying the indent level
    cout << "> " << this->name;
    if(this->children.size() > 0) { // Displaying folder size
        cout << "(" << this->children.size() << ")";
    }
    cout << "\n";
    
    for(int i = 0; i < this->children.size(); i++) { // Displaying indents
        for(int j = 0; j < level; j++) {
            cout << ". . . ";
        }
        this->children.at(i)->iterate(level + 1); 
    }
}
Folder::Folder(string n, Folder &p) {
    this->name = n;
    p.children.push_back(this);
}
Folder::Folder() {
    this->name = "All";
}
void Folder::show() {
    this->iterate(1);
}


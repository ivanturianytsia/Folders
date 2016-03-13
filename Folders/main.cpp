//
//  main.cpp
//  Folders
//
//  Created by Ivan Turianitsa on 3/13/16.
//  Copyright © 2016 Ivan Turianytsia. All rights reserved.
//


#include "Folder.h"
using namespace std;

int main() {
    Folder all;
    Folder one("one",all);
    Folder two("two",all);
    Folder three("three",one);
    Folder four("four",all);
    Folder five("five",four);
    Folder six("six",five);
    
    all.show();
    return 0;
}

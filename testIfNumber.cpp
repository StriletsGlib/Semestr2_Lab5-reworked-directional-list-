//
//  testIfNumber.cpp
//  Reworked Directional List
//
//  Created by Gleb Strelets on 4/22/20.
//  Copyright © 2020 Glib Strilets. All rights reserved.
//

#include "testIfNumber.hpp"
bool testForInt(std::string t){
    bool r = true;
    for (int i = 0; i<t.length(); i++){
        if (((t[i]>'9') or (t[i] <'0')) and t[i]!='.') r = false;
    }
    return r;
}

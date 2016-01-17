//
//  Command.hpp
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 12/24/15.
//  Copyright © 2015 Donald Pinckney. All rights reserved.
//

#ifndef Command_hpp
#define Command_hpp

#include <stdio.h>
#include <string>
#include <vector>

#include "LemonScriptState.h"

class Command {

protected:
    Command(int l, const LemonScriptState &s) : lineNumber(l) { };
    
public:
    int lineNumber;
    std::vector<void *> dependentVariables; // Subclasses are responsible for initializing this variable!
    
    virtual bool Update() = 0;

};

#endif /* Command_hpp */

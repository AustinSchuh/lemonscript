//
//  WhileAlsoCommand.hpp
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 12/30/15.
//  Copyright © 2015 Donald Pinckney. All rights reserved.
//

#ifndef WhileAlsoCommand_hpp
#define WhileAlsoCommand_hpp

#include <stdio.h>

#include "SimultaneousCommand.h"
#include "SequentialCommand.h"

#include "lemonscript.h"

class lemonscript::WhileAlsoCommand : public Command {
    
    SequentialCommand *whileCondition = NULL;
    
    SimultaneousCommand *alsoCommands = NULL;
    
    
public:
    WhileAlsoCommand(int l, const LemonScriptState &s, const std::string &commandString);
    
    bool Update();
    
};


#endif /* WhileAlsoCommand_hpp */

//
//  CompleteAllCommand.hpp
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 1/16/16.
//  Copyright © 2016 Donald Pinckney. All rights reserved.
//

#ifndef CompleteAllCommand_hpp
#define CompleteAllCommand_hpp

#include <stdio.h>

#include "SimultaneousCommand.h"

#include "lemonscript.h"

class lemonscript::CompleteAllCommand : public Command {
    
    SimultaneousCommand *allCommands = NULL;
    
    
public:
    CompleteAllCommand(int l, const LemonScriptState &s, const std::string &commandString);
    
    bool Update();
    
};

#endif /* CompleteAllCommand_hpp */

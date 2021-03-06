//
//  SimultaneousCommand.hpp
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 1/16/16.
//  Copyright © 2016 Donald Pinckney. All rights reserved.
//

#ifndef SimultaneousCommand_hpp
#define SimultaneousCommand_hpp

#include <stdio.h>

#include "Command.h"

#include "lemonscript.h"

typedef enum : unsigned int {
    NoneComplete,
    AnyComplete,
    AllComplete,
} SimultaneousCommmandState;

class lemonscript::SimultaneousCommand : Command {
    
    SimultaneousCommmandState state = SimultaneousCommmandState::NoneComplete;
    
    std::vector<Command *> commands;
    std::vector<bool> doneCommands;
    
public:
    
    SimultaneousCommand(int l, const LemonScriptState &s, const std::string &sequenceString);
    
    bool Update();
    bool Update(bool hard);
    
    SimultaneousCommmandState getState() const {
        return state;
    }
    
    
};

#endif /* SimultaneousCommand_hpp */

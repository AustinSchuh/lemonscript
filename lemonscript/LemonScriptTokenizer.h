//
//  LemonScriptParser.hpp
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 12/30/15.
//  Copyright © 2015 Donald Pinckney. All rights reserved.
//

#ifndef LemonScriptTokenizer_h
#define LemonScriptTokenizer_h

#include <stdio.h>
#include <string>
#include <sstream>

#include "lemonscript.h"

typedef enum {
    CppToken,
    LetToken,
    NotToken,
    WhileAlsoToken,
    CompleteAnyToken,
    CompleteAllToken,
    IfElseIfElseToken,
    NOT_A_TOKEN
} TokenType;

class lemonscript::LemonScriptTokenizer {
    
    std::istream *input;
    int currentLine = 0;
    
public:
  
    LemonScriptTokenizer(const std::string &toParse) {
        input = new std::istringstream(toParse);
    }
    LemonScriptTokenizer(std::istream *toParse) {
        input = toParse;
    }

    std::tuple<std::string, TokenType, int> nextToken();
    
};

#endif /* LemonScriptTokenizer_hpp */

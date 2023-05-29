
// Generated from .\Arithmetic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ArithmeticParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ArithmeticParser.
 */
class  ArithmeticVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ArithmeticParser.
   */
    virtual std::any visitProg(ArithmeticParser::ProgContext *context) = 0;

    virtual std::any visitStatement(ArithmeticParser::StatementContext *context) = 0;

    virtual std::any visitAssignment(ArithmeticParser::AssignmentContext *context) = 0;

    virtual std::any visitNumber(ArithmeticParser::NumberContext *context) = 0;

    virtual std::any visitParens(ArithmeticParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(ArithmeticParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(ArithmeticParser::AddSubContext *context) = 0;

    virtual std::any visitVar(ArithmeticParser::VarContext *context) = 0;

    virtual std::any visitNum(ArithmeticParser::NumContext *context) = 0;


};


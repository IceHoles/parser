
// Generated from Arithmetic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "ArithmeticVisitor.h"


/**
 * This class provides an empty implementation of ArithmeticVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ArithmeticBaseVisitor : public ArithmeticVisitor {
public:

  virtual std::any visitProg(ArithmeticParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ArithmeticParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ArithmeticParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(ArithmeticParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(ArithmeticParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(ArithmeticParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(ArithmeticParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar(ArithmeticParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNum(ArithmeticParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }


};


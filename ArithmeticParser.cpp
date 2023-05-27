
// Generated from Arithmetic.g4 by ANTLR 4.13.0


#include "ArithmeticVisitor.h"

#include "ArithmeticParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ArithmeticParserStaticData final {
  ArithmeticParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ArithmeticParserStaticData(const ArithmeticParserStaticData&) = delete;
  ArithmeticParserStaticData(ArithmeticParserStaticData&&) = delete;
  ArithmeticParserStaticData& operator=(const ArithmeticParserStaticData&) = delete;
  ArithmeticParserStaticData& operator=(ArithmeticParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag arithmeticParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ArithmeticParserStaticData *arithmeticParserStaticData = nullptr;

void arithmeticParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (arithmeticParserStaticData != nullptr) {
    return;
  }
#else
  assert(arithmeticParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ArithmeticParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "assignment", "number", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "", "", "';'", "", "", "'*'", "'/'", "'+'", 
      "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "INT", "DOUBLE", "SEP", "NEWLINE", "WS", "MUL", "DIV", 
      "ADD", "SUB", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,51,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,5,0,14,
  	8,0,10,0,12,0,17,9,0,1,0,1,0,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,38,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,
  	46,8,4,10,4,12,4,49,9,4,1,4,0,1,8,5,0,2,4,6,8,0,3,1,0,4,5,1,0,9,10,1,
  	0,11,12,51,0,15,1,0,0,0,2,22,1,0,0,0,4,24,1,0,0,0,6,28,1,0,0,0,8,37,1,
  	0,0,0,10,11,3,2,1,0,11,12,5,6,0,0,12,14,1,0,0,0,13,10,1,0,0,0,14,17,1,
  	0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,18,1,0,0,0,17,15,1,0,0,0,18,19,3,
  	2,1,0,19,1,1,0,0,0,20,23,3,4,2,0,21,23,3,8,4,0,22,20,1,0,0,0,22,21,1,
  	0,0,0,23,3,1,0,0,0,24,25,5,13,0,0,25,26,5,1,0,0,26,27,3,8,4,0,27,5,1,
  	0,0,0,28,29,7,0,0,0,29,7,1,0,0,0,30,31,6,4,-1,0,31,38,5,13,0,0,32,38,
  	3,6,3,0,33,34,5,2,0,0,34,35,3,8,4,0,35,36,5,3,0,0,36,38,1,0,0,0,37,30,
  	1,0,0,0,37,32,1,0,0,0,37,33,1,0,0,0,38,47,1,0,0,0,39,40,10,5,0,0,40,41,
  	7,1,0,0,41,46,3,8,4,6,42,43,10,4,0,0,43,44,7,2,0,0,44,46,3,8,4,5,45,39,
  	1,0,0,0,45,42,1,0,0,0,46,49,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,9,
  	1,0,0,0,49,47,1,0,0,0,5,15,22,37,45,47
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  arithmeticParserStaticData = staticData.release();
}

}

ArithmeticParser::ArithmeticParser(TokenStream *input) : ArithmeticParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ArithmeticParser::ArithmeticParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ArithmeticParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *arithmeticParserStaticData->atn, arithmeticParserStaticData->decisionToDFA, arithmeticParserStaticData->sharedContextCache, options);
}

ArithmeticParser::~ArithmeticParser() {
  delete _interpreter;
}

const atn::ATN& ArithmeticParser::getATN() const {
  return *arithmeticParserStaticData->atn;
}

std::string ArithmeticParser::getGrammarFileName() const {
  return "Arithmetic.g4";
}

const std::vector<std::string>& ArithmeticParser::getRuleNames() const {
  return arithmeticParserStaticData->ruleNames;
}

const dfa::Vocabulary& ArithmeticParser::getVocabulary() const {
  return arithmeticParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ArithmeticParser::getSerializedATN() const {
  return arithmeticParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ArithmeticParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArithmeticParser::StatementContext *> ArithmeticParser::ProgContext::statement() {
  return getRuleContexts<ArithmeticParser::StatementContext>();
}

ArithmeticParser::StatementContext* ArithmeticParser::ProgContext::statement(size_t i) {
  return getRuleContext<ArithmeticParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> ArithmeticParser::ProgContext::SEP() {
  return getTokens(ArithmeticParser::SEP);
}

tree::TerminalNode* ArithmeticParser::ProgContext::SEP(size_t i) {
  return getToken(ArithmeticParser::SEP, i);
}


size_t ArithmeticParser::ProgContext::getRuleIndex() const {
  return ArithmeticParser::RuleProg;
}


std::any ArithmeticParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ArithmeticParser::ProgContext* ArithmeticParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ArithmeticParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(10);
        statement();
        setState(11);
        match(ArithmeticParser::SEP); 
      }
      setState(17);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(18);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ArithmeticParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArithmeticParser::AssignmentContext* ArithmeticParser::StatementContext::assignment() {
  return getRuleContext<ArithmeticParser::AssignmentContext>(0);
}

ArithmeticParser::ExprContext* ArithmeticParser::StatementContext::expr() {
  return getRuleContext<ArithmeticParser::ExprContext>(0);
}


size_t ArithmeticParser::StatementContext::getRuleIndex() const {
  return ArithmeticParser::RuleStatement;
}


std::any ArithmeticParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ArithmeticParser::StatementContext* ArithmeticParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ArithmeticParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(20);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(21);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ArithmeticParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArithmeticParser::AssignmentContext::ID() {
  return getToken(ArithmeticParser::ID, 0);
}

ArithmeticParser::ExprContext* ArithmeticParser::AssignmentContext::expr() {
  return getRuleContext<ArithmeticParser::ExprContext>(0);
}


size_t ArithmeticParser::AssignmentContext::getRuleIndex() const {
  return ArithmeticParser::RuleAssignment;
}


std::any ArithmeticParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ArithmeticParser::AssignmentContext* ArithmeticParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, ArithmeticParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(ArithmeticParser::ID);
    setState(25);
    match(ArithmeticParser::T__0);
    setState(26);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

ArithmeticParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArithmeticParser::NumberContext::INT() {
  return getToken(ArithmeticParser::INT, 0);
}

tree::TerminalNode* ArithmeticParser::NumberContext::DOUBLE() {
  return getToken(ArithmeticParser::DOUBLE, 0);
}


size_t ArithmeticParser::NumberContext::getRuleIndex() const {
  return ArithmeticParser::RuleNumber;
}


std::any ArithmeticParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ArithmeticParser::NumberContext* ArithmeticParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 6, ArithmeticParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    _la = _input->LA(1);
    if (!(_la == ArithmeticParser::INT

    || _la == ArithmeticParser::DOUBLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ArithmeticParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ArithmeticParser::ExprContext::getRuleIndex() const {
  return ArithmeticParser::RuleExpr;
}

void ArithmeticParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

ArithmeticParser::ExprContext* ArithmeticParser::ParensContext::expr() {
  return getRuleContext<ArithmeticParser::ExprContext>(0);
}

ArithmeticParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ArithmeticParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<ArithmeticParser::ExprContext *> ArithmeticParser::MulDivContext::expr() {
  return getRuleContexts<ArithmeticParser::ExprContext>();
}

ArithmeticParser::ExprContext* ArithmeticParser::MulDivContext::expr(size_t i) {
  return getRuleContext<ArithmeticParser::ExprContext>(i);
}

tree::TerminalNode* ArithmeticParser::MulDivContext::MUL() {
  return getToken(ArithmeticParser::MUL, 0);
}

tree::TerminalNode* ArithmeticParser::MulDivContext::DIV() {
  return getToken(ArithmeticParser::DIV, 0);
}

ArithmeticParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ArithmeticParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<ArithmeticParser::ExprContext *> ArithmeticParser::AddSubContext::expr() {
  return getRuleContexts<ArithmeticParser::ExprContext>();
}

ArithmeticParser::ExprContext* ArithmeticParser::AddSubContext::expr(size_t i) {
  return getRuleContext<ArithmeticParser::ExprContext>(i);
}

tree::TerminalNode* ArithmeticParser::AddSubContext::ADD() {
  return getToken(ArithmeticParser::ADD, 0);
}

tree::TerminalNode* ArithmeticParser::AddSubContext::SUB() {
  return getToken(ArithmeticParser::SUB, 0);
}

ArithmeticParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ArithmeticParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* ArithmeticParser::VarContext::ID() {
  return getToken(ArithmeticParser::ID, 0);
}

ArithmeticParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ArithmeticParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumContext ------------------------------------------------------------------

ArithmeticParser::NumberContext* ArithmeticParser::NumContext::number() {
  return getRuleContext<ArithmeticParser::NumberContext>(0);
}

ArithmeticParser::NumContext::NumContext(ExprContext *ctx) { copyFrom(ctx); }


std::any ArithmeticParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArithmeticVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

ArithmeticParser::ExprContext* ArithmeticParser::expr() {
   return expr(0);
}

ArithmeticParser::ExprContext* ArithmeticParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ArithmeticParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ArithmeticParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, ArithmeticParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ArithmeticParser::ID: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(31);
        match(ArithmeticParser::ID);
        break;
      }

      case ArithmeticParser::INT:
      case ArithmeticParser::DOUBLE: {
        _localctx = _tracker.createInstance<NumContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(32);
        number();
        break;
      }

      case ArithmeticParser::T__1: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(33);
        match(ArithmeticParser::T__1);
        setState(34);
        expr(0);
        setState(35);
        match(ArithmeticParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(47);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(45);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(39);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(40);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ArithmeticParser::MUL

          || _la == ArithmeticParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(41);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(42);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(43);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ArithmeticParser::ADD

          || _la == ArithmeticParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(44);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(49);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ArithmeticParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ArithmeticParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void ArithmeticParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  arithmeticParserInitialize();
#else
  ::antlr4::internal::call_once(arithmeticParserOnceFlag, arithmeticParserInitialize);
#endif
}

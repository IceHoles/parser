
// Generated from .\Arithmetic.g4 by ANTLR 4.13.0


#include "ArithmeticLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ArithmeticLexerStaticData final {
  ArithmeticLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ArithmeticLexerStaticData(const ArithmeticLexerStaticData&) = delete;
  ArithmeticLexerStaticData(ArithmeticLexerStaticData&&) = delete;
  ArithmeticLexerStaticData& operator=(const ArithmeticLexerStaticData&) = delete;
  ArithmeticLexerStaticData& operator=(ArithmeticLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag arithmeticlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ArithmeticLexerStaticData *arithmeticlexerLexerStaticData = nullptr;

void arithmeticlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (arithmeticlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(arithmeticlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ArithmeticLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "INT", "DOUBLE", "SEP", "NEWLINE", "WS", "MUL", 
      "DIV", "ADD", "SUB", "ID"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,13,78,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,4,3,35,8,3,11,3,12,3,36,1,4,4,4,40,8,4,11,4,12,4,41,1,4,
  	1,4,4,4,46,8,4,11,4,12,4,47,1,5,1,5,1,6,3,6,53,8,6,1,6,1,6,1,6,1,6,1,
  	7,4,7,60,8,7,11,7,12,7,61,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,
  	1,12,4,12,75,8,12,11,12,12,12,76,0,0,13,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	15,8,17,9,19,10,21,11,23,12,25,13,1,0,3,1,0,48,57,2,0,9,9,32,32,2,0,65,
  	90,97,122,83,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,1,27,1,0,0,0,3,29,1,0,0,0,5,31,
  	1,0,0,0,7,34,1,0,0,0,9,39,1,0,0,0,11,49,1,0,0,0,13,52,1,0,0,0,15,59,1,
  	0,0,0,17,65,1,0,0,0,19,67,1,0,0,0,21,69,1,0,0,0,23,71,1,0,0,0,25,74,1,
  	0,0,0,27,28,5,61,0,0,28,2,1,0,0,0,29,30,5,40,0,0,30,4,1,0,0,0,31,32,5,
  	41,0,0,32,6,1,0,0,0,33,35,7,0,0,0,34,33,1,0,0,0,35,36,1,0,0,0,36,34,1,
  	0,0,0,36,37,1,0,0,0,37,8,1,0,0,0,38,40,7,0,0,0,39,38,1,0,0,0,40,41,1,
  	0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,43,1,0,0,0,43,45,5,46,0,0,44,46,
  	7,0,0,0,45,44,1,0,0,0,46,47,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,10,
  	1,0,0,0,49,50,5,59,0,0,50,12,1,0,0,0,51,53,5,13,0,0,52,51,1,0,0,0,52,
  	53,1,0,0,0,53,54,1,0,0,0,54,55,5,10,0,0,55,56,1,0,0,0,56,57,6,6,0,0,57,
  	14,1,0,0,0,58,60,7,1,0,0,59,58,1,0,0,0,60,61,1,0,0,0,61,59,1,0,0,0,61,
  	62,1,0,0,0,62,63,1,0,0,0,63,64,6,7,0,0,64,16,1,0,0,0,65,66,5,42,0,0,66,
  	18,1,0,0,0,67,68,5,47,0,0,68,20,1,0,0,0,69,70,5,43,0,0,70,22,1,0,0,0,
  	71,72,5,45,0,0,72,24,1,0,0,0,73,75,7,2,0,0,74,73,1,0,0,0,75,76,1,0,0,
  	0,76,74,1,0,0,0,76,77,1,0,0,0,77,26,1,0,0,0,7,0,36,41,47,52,61,76,1,6,
  	0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  arithmeticlexerLexerStaticData = staticData.release();
}

}

ArithmeticLexer::ArithmeticLexer(CharStream *input) : Lexer(input) {
  ArithmeticLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *arithmeticlexerLexerStaticData->atn, arithmeticlexerLexerStaticData->decisionToDFA, arithmeticlexerLexerStaticData->sharedContextCache);
}

ArithmeticLexer::~ArithmeticLexer() {
  delete _interpreter;
}

std::string ArithmeticLexer::getGrammarFileName() const {
  return "Arithmetic.g4";
}

const std::vector<std::string>& ArithmeticLexer::getRuleNames() const {
  return arithmeticlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ArithmeticLexer::getChannelNames() const {
  return arithmeticlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ArithmeticLexer::getModeNames() const {
  return arithmeticlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ArithmeticLexer::getVocabulary() const {
  return arithmeticlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ArithmeticLexer::getSerializedATN() const {
  return arithmeticlexerLexerStaticData->serializedATN;
}

const atn::ATN& ArithmeticLexer::getATN() const {
  return *arithmeticlexerLexerStaticData->atn;
}




void ArithmeticLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  arithmeticlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(arithmeticlexerLexerOnceFlag, arithmeticlexerLexerInitialize);
#endif
}

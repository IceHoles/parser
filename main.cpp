# include <iostream>

# include "antlr4-runtime.h"
# include "ArithmeticUserVisitor.h"
# include "ArithmeticParser.h"
# include "ArithmeticLexer.h"
# include <string>
# include <sstream>

	
int main() {
	antlr4::ANTLRInputStream input("x = 2 * (3 + 4);");
    ArithmeticLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    ArithmeticParser parser(&tokens);

    ArithmeticParser::ProgContext* tree = parser.prog();
    ArithmeticUserVisitor visitor;
    visitor.visit(tree);
	
	return 0;
}
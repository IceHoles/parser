#include "ArithmeticBaseVisitor.h"

#include <iostream>
#include <vector>

class ArithmeticUserVisitor : public ArithmeticBaseVisitor {
private:
    std::unordered_map<std::string, double> variables;
public:

    virtual std::any visitAssignment(ArithmeticParser::AssignmentContext* ctx) override {
        std::string variable = ctx->ID()->getText();
        double value = std::any_cast<double>(visit(ctx->expr()));
        variables[variable] = value;
        std::cout << "Assignment: " << variable << " = " << value << std::endl;
        return antlrcpp::Any();
    }

    virtual std::any visitMulDiv(ArithmeticParser::MulDivContext* ctx) override {
        double left = std::any_cast<double>(visit(ctx->expr(0)));
        double right = std::any_cast<double>(visit(ctx->expr(1)));
        double result;
        if (ctx->op->getText() == "*") {
            result = left * right;
        }
        else {
            result = left / right;
        }
        std::cout << "MulDiv: " << left << " " << ctx->op->getText() << " " << right << " = " << result << std::endl;
        return result;
    }

    virtual std::any visitAddSub(ArithmeticParser::AddSubContext* ctx) override {
        double left = std::any_cast<double>(visit(ctx->expr(0)));
        double right = std::any_cast<double>(visit(ctx->expr(1)));
        double result;
        if (ctx->op->getText() == "+") {
            result = left + right;
        }
        else {
            result = left - right;
        }
        std::cout << "AddSub: " << left << " " << ctx->op->getText() << " " << right << " = " << result << std::endl;
        return result;
    }

    virtual std::any visitVar(ArithmeticParser::VarContext* ctx) override {
        std::string variable = ctx->ID()->getText();
        if (variables.count(variable) > 0) {
            return variables[variable];
        }
        else {
            throw std::runtime_error("Variable '" + variable + "' is not defined.");
        }
        std::cout << "Variable: " << variable << std::endl;
        return antlrcpp::Any();
    }

    virtual std::any visitNum(ArithmeticParser::NumContext* ctx) override {
        double value = std::stod(ctx->getText());
        std::cout << "Number: " << value << std::endl;
        return value;
    }

    virtual std::any visitParens(ArithmeticParser::ParensContext* ctx) override {
        std::cout << "Parens" << std::endl;
        return visit(ctx->expr());
    }
};
#pragma once

#include <string>

#include "astnode.hpp"

class Number : public ASTNode {
  public:
    Number(int val)
        : ASTNode(std::to_string(val))
        , val_(val) {}

    int value() const { return val_; }

  private:
    int val_;
};


class Variable : public ASTNode {
public:
    Variable(std::string val)
        : ASTNode(val)
        , val_(val) {}

    std::string value() { return val_; }

private:
    std::string val_;
};


class Add : public ASTNode {
  public:
    Add(ASTNode* lhs, ASTNode* rhs)
        : ASTNode("+", lhs, rhs) {}
};



class Sub : public ASTNode {
public:
    Sub(ASTNode* lhs, ASTNode* rhs)
        : ASTNode("-", lhs, rhs) {}
};



class Mul : public ASTNode {
public:
    Mul(ASTNode* lhs, ASTNode* rhs)
        : ASTNode("*", lhs, rhs) {}
};



class Div : public ASTNode {
public:
    Div(ASTNode* lhs, ASTNode* rhs)
        : ASTNode("/", lhs, rhs) {}
};
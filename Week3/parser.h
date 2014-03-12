/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */
#ifndef __PARSER_H__
#define __PARSER_H__
#include "token.h"

extern void scan(void);
extern void eat(TokenType tokenType);

extern void compileProgram(void);
extern void compileBlock(void);
extern void compileBlock2(void);
extern void compileBlock3(void);
extern void compileBlock4(void);
extern void compileBlock5(void);
extern void compileConstDecls(void);
extern void compileConstDecl(void);
extern void compileTypeDecls(void);
extern void compileTypeDecl(void);
extern void compileVarDecls(void);
extern void compileVarDecl(void);
extern void compileSubDecls(void);
extern void compileFuncDecl(void);
extern void compileProcDecl(void);
extern void compileUnsignedConstant(void);
extern void compileConstant(void);
extern void compileConstant2(void);
extern void compileType(void);
extern void compileBasicType(void);
extern void compileParams(void);
extern void compileParams2(void);
extern void compileParam(void);
extern void compileStatements(void);
extern void compileStatements2(void);
extern void compileStatement(void);
extern void compileAssignSt(void);
extern void compileCallSt(void);
extern void compileGroupSt(void);
extern void compileIfSt(void);
extern void compileElseSt(void);
extern void compileWhileSt(void);
extern void compileForSt(void);
extern void compileArguments(void);
extern void compileArguments2(void);
extern void compileCondition(void);
extern void compileCondition2(void);
extern void compileExpression(void);
extern void compileExpression2(void);
extern void compileExpression3(void);
extern void compileTerm(void);
extern void compileTerm2(void);
extern void compileFactor(void);
extern void compileIndexes(void);

extern int compile(char *fileName);

#endif

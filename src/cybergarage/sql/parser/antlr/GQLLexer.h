/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : GQL.g
 *     -                            On : 2011-11-29 02:42:40
 *     -                 for the lexer : GQLLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
GQLLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pGQLLexer, which is returned from a call to GQLLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pGQLLexer are  as follows:
 *
 *  - 
 void
      pGQLLexer->NUMBER(pGQLLexer)
 *  - 
 void
      pGQLLexer->COMMENT(pGQLLexer)
 *  - 
 void
      pGQLLexer->WS(pGQLLexer)
 *  - 
 void
      pGQLLexer->STRING(pGQLLexer)
 *  - 
 void
      pGQLLexer->EscapeSequence(pGQLLexer)
 *  - 
 void
      pGQLLexer->DIGIT(pGQLLexer)
 *  - 
 void
      pGQLLexer->ASTERISK(pGQLLexer)
 *  - 
 void
      pGQLLexer->EQ(pGQLLexer)
 *  - 
 void
      pGQLLexer->OP_LT(pGQLLexer)
 *  - 
 void
      pGQLLexer->LE(pGQLLexer)
 *  - 
 void
      pGQLLexer->GT(pGQLLexer)
 *  - 
 void
      pGQLLexer->GE(pGQLLexer)
 *  - 
 void
      pGQLLexer->NOTEQ(pGQLLexer)
 *  - 
 void
      pGQLLexer->COMMA(pGQLLexer)
 *  - 
 void
      pGQLLexer->A(pGQLLexer)
 *  - 
 void
      pGQLLexer->B(pGQLLexer)
 *  - 
 void
      pGQLLexer->C(pGQLLexer)
 *  - 
 void
      pGQLLexer->D(pGQLLexer)
 *  - 
 void
      pGQLLexer->E(pGQLLexer)
 *  - 
 void
      pGQLLexer->F(pGQLLexer)
 *  - 
 void
      pGQLLexer->G(pGQLLexer)
 *  - 
 void
      pGQLLexer->H(pGQLLexer)
 *  - 
 void
      pGQLLexer->I(pGQLLexer)
 *  - 
 void
      pGQLLexer->J(pGQLLexer)
 *  - 
 void
      pGQLLexer->K(pGQLLexer)
 *  - 
 void
      pGQLLexer->L(pGQLLexer)
 *  - 
 void
      pGQLLexer->M(pGQLLexer)
 *  - 
 void
      pGQLLexer->N(pGQLLexer)
 *  - 
 void
      pGQLLexer->O(pGQLLexer)
 *  - 
 void
      pGQLLexer->P(pGQLLexer)
 *  - 
 void
      pGQLLexer->Q(pGQLLexer)
 *  - 
 void
      pGQLLexer->R(pGQLLexer)
 *  - 
 void
      pGQLLexer->S(pGQLLexer)
 *  - 
 void
      pGQLLexer->T(pGQLLexer)
 *  - 
 void
      pGQLLexer->U(pGQLLexer)
 *  - 
 void
      pGQLLexer->V(pGQLLexer)
 *  - 
 void
      pGQLLexer->W(pGQLLexer)
 *  - 
 void
      pGQLLexer->X(pGQLLexer)
 *  - 
 void
      pGQLLexer->Y(pGQLLexer)
 *  - 
 void
      pGQLLexer->Z(pGQLLexer)
 *  - 
 void
      pGQLLexer->ANCESTOR(pGQLLexer)
 *  - 
 void
      pGQLLexer->AND(pGQLLexer)
 *  - 
 void
      pGQLLexer->ASC(pGQLLexer)
 *  - 
 void
      pGQLLexer->BY(pGQLLexer)
 *  - 
 void
      pGQLLexer->DESC(pGQLLexer)
 *  - 
 void
      pGQLLexer->FROM(pGQLLexer)
 *  - 
 void
      pGQLLexer->IN(pGQLLexer)
 *  - 
 void
      pGQLLexer->IS(pGQLLexer)
 *  - 
 void
      pGQLLexer->LIMIT(pGQLLexer)
 *  - 
 void
      pGQLLexer->OFFSET(pGQLLexer)
 *  - 
 void
      pGQLLexer->ORDER(pGQLLexer)
 *  - 
 void
      pGQLLexer->SELECT(pGQLLexer)
 *  - 
 void
      pGQLLexer->WHERE(pGQLLexer)
 *  - 
 void
      pGQLLexer->ID(pGQLLexer)
 *  - 
 void
      pGQLLexer->Tokens(pGQLLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_GQLLexer_H
#define _GQLLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

	#include <cybergarage/sql/SQLParser.h>


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct GQLLexer_Ctx_struct GQLLexer, * pGQLLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
GQLLexer

 */
struct GQLLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mNUMBER)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mWS)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mSTRING)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mEscapeSequence)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mDIGIT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mASTERISK)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mEQ)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mOP_LT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mLE)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mGT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mGE)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mNOTEQ)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mA)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mB)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mC)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mD)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mE)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mF)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mG)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mH)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mI)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mJ)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mK)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mL)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mM)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mN)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mO)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mP)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mQ)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mR)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mS)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mU)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mV)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mW)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mX)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mY)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mZ)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mANCESTOR)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mAND)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mASC)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mBY)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mDESC)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mFROM)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mIN)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mIS)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mLIMIT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mOFFSET)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mORDER)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mSELECT)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mWHERE)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mID)	(struct GQLLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct GQLLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct GQLLexer_Ctx_struct * ctx);
    void	    (*free)   (struct GQLLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pGQLLexer GQLLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pGQLLexer GQLLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define A      4
#define ANCESTOR      5
#define AND      6
#define ASC      7
#define ASTERISK      8
#define B      9
#define BY      10
#define C      11
#define COMMA      12
#define COMMENT      13
#define D      14
#define DESC      15
#define DIGIT      16
#define E      17
#define EQ      18
#define EscapeSequence      19
#define F      20
#define FROM      21
#define G      22
#define GE      23
#define GT      24
#define H      25
#define I      26
#define ID      27
#define IN      28
#define IS      29
#define J      30
#define K      31
#define L      32
#define LE      33
#define LIMIT      34
#define M      35
#define N      36
#define NOTEQ      37
#define NUMBER      38
#define O      39
#define OFFSET      40
#define OP_LT      41
#define ORDER      42
#define P      43
#define Q      44
#define R      45
#define S      46
#define SELECT      47
#define STRING      48
#define T      49
#define U      50
#define V      51
#define W      52
#define WHERE      53
#define WS      54
#define X      55
#define Y      56
#define Z      57
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for GQLLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */

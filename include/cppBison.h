/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_CPPYY_BUILT_TMP_CPPBISON_YXX_H_INCLUDED
# define YY_CPPYY_BUILT_TMP_CPPBISON_YXX_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cppyydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INTEGER = 259,
     CHAR_TOK = 260,
     SIMPLE_STRING = 261,
     SIMPLE_IDENTIFIER = 262,
     STRING_LITERAL = 263,
     CUSTOM_LITERAL = 264,
     IDENTIFIER = 265,
     TYPENAME_IDENTIFIER = 266,
     TYPEPACK_IDENTIFIER = 267,
     SCOPING = 268,
     TYPEDEFNAME = 269,
     ELLIPSIS = 270,
     OROR = 271,
     ANDAND = 272,
     EQCOMPARE = 273,
     NECOMPARE = 274,
     LECOMPARE = 275,
     GECOMPARE = 276,
     LSHIFT = 277,
     RSHIFT = 278,
     POINTSAT_STAR = 279,
     DOT_STAR = 280,
     UNARY = 281,
     UNARY_NOT = 282,
     UNARY_NEGATE = 283,
     UNARY_MINUS = 284,
     UNARY_PLUS = 285,
     UNARY_STAR = 286,
     UNARY_REF = 287,
     POINTSAT = 288,
     SCOPE = 289,
     PLUSPLUS = 290,
     MINUSMINUS = 291,
     TIMESEQUAL = 292,
     DIVIDEEQUAL = 293,
     MODEQUAL = 294,
     PLUSEQUAL = 295,
     MINUSEQUAL = 296,
     OREQUAL = 297,
     ANDEQUAL = 298,
     XOREQUAL = 299,
     LSHIFTEQUAL = 300,
     RSHIFTEQUAL = 301,
     ATTR_LEFT = 302,
     ATTR_RIGHT = 303,
     KW_ALIGNAS = 304,
     KW_ALIGNOF = 305,
     KW_AUTO = 306,
     KW_BEGIN_PUBLISH = 307,
     KW_BLOCKING = 308,
     KW_BOOL = 309,
     KW_CATCH = 310,
     KW_CHAR = 311,
     KW_CHAR16_T = 312,
     KW_CHAR32_T = 313,
     KW_CLASS = 314,
     KW_CONST = 315,
     KW_CONSTEXPR = 316,
     KW_CONST_CAST = 317,
     KW_DECLTYPE = 318,
     KW_DEFAULT = 319,
     KW_DELETE = 320,
     KW_DOUBLE = 321,
     KW_DYNAMIC_CAST = 322,
     KW_ELSE = 323,
     KW_END_PUBLISH = 324,
     KW_ENUM = 325,
     KW_EXTENSION = 326,
     KW_EXTERN = 327,
     KW_EXPLICIT = 328,
     KW_PUBLISHED = 329,
     KW_FALSE = 330,
     KW_FINAL = 331,
     KW_FLOAT = 332,
     KW_FRIEND = 333,
     KW_FOR = 334,
     KW_GOTO = 335,
     KW_HAS_VIRTUAL_DESTRUCTOR = 336,
     KW_IF = 337,
     KW_INLINE = 338,
     KW_INT = 339,
     KW_IS_ABSTRACT = 340,
     KW_IS_BASE_OF = 341,
     KW_IS_CLASS = 342,
     KW_IS_CONSTRUCTIBLE = 343,
     KW_IS_CONVERTIBLE_TO = 344,
     KW_IS_DESTRUCTIBLE = 345,
     KW_IS_EMPTY = 346,
     KW_IS_ENUM = 347,
     KW_IS_FINAL = 348,
     KW_IS_FUNDAMENTAL = 349,
     KW_IS_POD = 350,
     KW_IS_POLYMORPHIC = 351,
     KW_IS_STANDARD_LAYOUT = 352,
     KW_IS_TRIVIAL = 353,
     KW_IS_UNION = 354,
     KW_LONG = 355,
     KW_MAKE_MAP_KEYS_SEQ = 356,
     KW_MAKE_MAP_PROPERTY = 357,
     KW_MAKE_PROPERTY = 358,
     KW_MAKE_PROPERTY2 = 359,
     KW_MAKE_SEQ = 360,
     KW_MAKE_SEQ_PROPERTY = 361,
     KW_MUTABLE = 362,
     KW_NAMESPACE = 363,
     KW_NEW = 364,
     KW_NOEXCEPT = 365,
     KW_NULLPTR = 366,
     KW_OPERATOR = 367,
     KW_OVERRIDE = 368,
     KW_PRIVATE = 369,
     KW_PROTECTED = 370,
     KW_PUBLIC = 371,
     KW_REGISTER = 372,
     KW_REINTERPRET_CAST = 373,
     KW_RETURN = 374,
     KW_SHORT = 375,
     KW_SIGNED = 376,
     KW_SIZEOF = 377,
     KW_STATIC = 378,
     KW_STATIC_ASSERT = 379,
     KW_STATIC_CAST = 380,
     KW_STRUCT = 381,
     KW_TEMPLATE = 382,
     KW_THREAD_LOCAL = 383,
     KW_THROW = 384,
     KW_TRUE = 385,
     KW_TRY = 386,
     KW_TYPEDEF = 387,
     KW_TYPEID = 388,
     KW_TYPENAME = 389,
     KW_UNDERLYING_TYPE = 390,
     KW_UNION = 391,
     KW_UNSIGNED = 392,
     KW_USING = 393,
     KW_VIRTUAL = 394,
     KW_VOID = 395,
     KW_VOLATILE = 396,
     KW_WCHAR_T = 397,
     KW_WHILE = 398,
     START_CPP = 399,
     START_CONST_EXPR = 400,
     START_TYPE = 401
   };
#endif
/* Tokens.  */
#define REAL 258
#define INTEGER 259
#define CHAR_TOK 260
#define SIMPLE_STRING 261
#define SIMPLE_IDENTIFIER 262
#define STRING_LITERAL 263
#define CUSTOM_LITERAL 264
#define IDENTIFIER 265
#define TYPENAME_IDENTIFIER 266
#define TYPEPACK_IDENTIFIER 267
#define SCOPING 268
#define TYPEDEFNAME 269
#define ELLIPSIS 270
#define OROR 271
#define ANDAND 272
#define EQCOMPARE 273
#define NECOMPARE 274
#define LECOMPARE 275
#define GECOMPARE 276
#define LSHIFT 277
#define RSHIFT 278
#define POINTSAT_STAR 279
#define DOT_STAR 280
#define UNARY 281
#define UNARY_NOT 282
#define UNARY_NEGATE 283
#define UNARY_MINUS 284
#define UNARY_PLUS 285
#define UNARY_STAR 286
#define UNARY_REF 287
#define POINTSAT 288
#define SCOPE 289
#define PLUSPLUS 290
#define MINUSMINUS 291
#define TIMESEQUAL 292
#define DIVIDEEQUAL 293
#define MODEQUAL 294
#define PLUSEQUAL 295
#define MINUSEQUAL 296
#define OREQUAL 297
#define ANDEQUAL 298
#define XOREQUAL 299
#define LSHIFTEQUAL 300
#define RSHIFTEQUAL 301
#define ATTR_LEFT 302
#define ATTR_RIGHT 303
#define KW_ALIGNAS 304
#define KW_ALIGNOF 305
#define KW_AUTO 306
#define KW_BEGIN_PUBLISH 307
#define KW_BLOCKING 308
#define KW_BOOL 309
#define KW_CATCH 310
#define KW_CHAR 311
#define KW_CHAR16_T 312
#define KW_CHAR32_T 313
#define KW_CLASS 314
#define KW_CONST 315
#define KW_CONSTEXPR 316
#define KW_CONST_CAST 317
#define KW_DECLTYPE 318
#define KW_DEFAULT 319
#define KW_DELETE 320
#define KW_DOUBLE 321
#define KW_DYNAMIC_CAST 322
#define KW_ELSE 323
#define KW_END_PUBLISH 324
#define KW_ENUM 325
#define KW_EXTENSION 326
#define KW_EXTERN 327
#define KW_EXPLICIT 328
#define KW_PUBLISHED 329
#define KW_FALSE 330
#define KW_FINAL 331
#define KW_FLOAT 332
#define KW_FRIEND 333
#define KW_FOR 334
#define KW_GOTO 335
#define KW_HAS_VIRTUAL_DESTRUCTOR 336
#define KW_IF 337
#define KW_INLINE 338
#define KW_INT 339
#define KW_IS_ABSTRACT 340
#define KW_IS_BASE_OF 341
#define KW_IS_CLASS 342
#define KW_IS_CONSTRUCTIBLE 343
#define KW_IS_CONVERTIBLE_TO 344
#define KW_IS_DESTRUCTIBLE 345
#define KW_IS_EMPTY 346
#define KW_IS_ENUM 347
#define KW_IS_FINAL 348
#define KW_IS_FUNDAMENTAL 349
#define KW_IS_POD 350
#define KW_IS_POLYMORPHIC 351
#define KW_IS_STANDARD_LAYOUT 352
#define KW_IS_TRIVIAL 353
#define KW_IS_UNION 354
#define KW_LONG 355
#define KW_MAKE_MAP_KEYS_SEQ 356
#define KW_MAKE_MAP_PROPERTY 357
#define KW_MAKE_PROPERTY 358
#define KW_MAKE_PROPERTY2 359
#define KW_MAKE_SEQ 360
#define KW_MAKE_SEQ_PROPERTY 361
#define KW_MUTABLE 362
#define KW_NAMESPACE 363
#define KW_NEW 364
#define KW_NOEXCEPT 365
#define KW_NULLPTR 366
#define KW_OPERATOR 367
#define KW_OVERRIDE 368
#define KW_PRIVATE 369
#define KW_PROTECTED 370
#define KW_PUBLIC 371
#define KW_REGISTER 372
#define KW_REINTERPRET_CAST 373
#define KW_RETURN 374
#define KW_SHORT 375
#define KW_SIGNED 376
#define KW_SIZEOF 377
#define KW_STATIC 378
#define KW_STATIC_ASSERT 379
#define KW_STATIC_CAST 380
#define KW_STRUCT 381
#define KW_TEMPLATE 382
#define KW_THREAD_LOCAL 383
#define KW_THROW 384
#define KW_TRUE 385
#define KW_TRY 386
#define KW_TYPEDEF 387
#define KW_TYPEID 388
#define KW_TYPENAME 389
#define KW_UNDERLYING_TYPE 390
#define KW_UNION 391
#define KW_UNSIGNED 392
#define KW_USING 393
#define KW_VIRTUAL 394
#define KW_VOID 395
#define KW_VOLATILE 396
#define KW_WCHAR_T 397
#define KW_WHILE 398
#define START_CPP 399
#define START_CONST_EXPR 400
#define START_TYPE 401



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int cppyyparse (void *YYPARSE_PARAM);
#else
int cppyyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int cppyyparse (void);
#else
int cppyyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_CPPYY_BUILT_TMP_CPPBISON_YXX_H_INCLUDED  */

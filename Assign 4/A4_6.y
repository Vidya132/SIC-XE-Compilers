%{
	#include<stdio.h>
	extern int yylex();
	void yyerror(char *s);
%}
/* Bison Declaration */
%token CHAR 				10
%token ELSE 				11
%token FOR 				12
%token IF 				13
%token INT 				14
%token RETURN 				15
%token VOID 				16
%token ID				17
%token INT_CONST			18
%token CHAR_CONST			19
%token STRING_CONST 			20
%token LSQBRACKET 			21
%token RSQBRACKET 			22
%token LBRACE				23
%token RBRACE				24
%token LPARAN				25
%token RPARAN 				26
%token ARROW				27
%token BIT_AND 			    	28
%token PLUS				29
%token SUB		 		30
%token MULT				31
%token DIV 				32
%token MOD 				33
%token LOG_NOT 				34
%token LOG_AND				35
%token LOG_OR 				36
%token LESS				37
%token GREATER 				38
%token LESSEQ				39
%token GREATEREQ			40
%token EQUALS				41
%token NOTEQ				42
%token QUES 				43
%token COLON				44
%token SEMICOLON			45
%token ASSIGN				46
%token COMMA				47
%token SINGLE_COMMENT			48
%token MULTI_COMMENT			49
%token NEW_LINE				50


%start translational_unit


%%
/* *********EXPRESIION************ */
primary_expression: 	ID {printf("\nprimary-expression-> Identifier\n");}
			|INT_CONST {printf("\nprimary_expression-> Integer constant\n");}
			|CHAR_CONST {printf("\nprimary_expression-> Character constant\n");}
			|STRING_CONST {printf("\nprimary_expression-> String Literal\n");}
			|LPARAN expression RPARAN {printf("\nprimary_expression-> (expression)\n");}
			;

postfix_expression:	primary_expression {printf("\npostfix-expression-> primary-expression\n");}
			|postfix_expression LSQBRACKET expression RSQBRACKET {printf("\npostfix-expression-> postfix-expression[expression]\n");}
			|postfix_expression LPARAN argument_expression_list_opt RPARAN {printf("\npostfix-expression-> postfix-expression(argument-expression-list-opt)\n");}
			|postfix_expression ARROW identifier {printf("\npostfix-expression-> postfix-expression-> identifier\n");}
			;
identifier_opt: /*epsilon*/
		|identifier
		;

identifier:	ID
		;

argument_expression_list_opt: /* epsilon */
				|argument_expression_list
				;

argument_expression_list:	assignment_expression {printf("\nargument-expression-list-> assignment-expression\n");}
				|argument_expression_list COMMA assignment_expression {printf("\nargument-expression-list-> argument-expression-list, assignment-expression\n");}
				;

unary_expression:	postfix_expression {printf("\nunary-expression-> postfix-expression\n");}
			|unary_operator unary_expression {printf("\nunary-expression-> unary-operator unary-expression\n");}
			;

unary_operator:		BIT_AND {printf("\nunary-operator-> &\n");}
			|MULT {printf("\nunary-operator-> *\n");}
			|PLUS {printf("\nunary-operator-> +\n");}
			|SUB {printf("\nunary-operator-> -\n");}
			|LOG_NOT {printf("\nunary-operator-> !\n");}
			;
	

multiplicative_expression:	unary_expression {printf("\nmultiplicative-expression-> unary-expression\n");}
				|multiplicative_expression MULT unary_expression {printf("\nmultiplicative-expression-> multiplicative-expression * unary-expression\n");}
				|multiplicative_expression DIV unary_expression {printf("\nmultiplicative-expression-> multiplicative-expression / unary-expression\n");}
				|multiplicative_expression MOD unary_expression {printf("\nmultiplicative-expression-> multiplicative-expression module unary-expression\n");}
				;

additive_expression:	multiplicative_expression {printf("\nadditive-expression-> multiplicative-expression\n");}
			|additive_expression PLUS multiplicative_expression {printf("\nadditive-expression-> additive-expression + multiplicative-expression\n");}
			|additive_expression SUB multiplicative_expression {printf("\nadditive-expression-> additive-expression - multiplicative-expression\n");}
			;


relational_expression:	additive_expression {printf("\nrelational-expression-> additive-expression\n");}
			|relational_expression LESS additive_expression {printf("\nrelational-expression-> relational-expression < additive-expression\n");}
			|relational_expression GREATER additive_expression  {printf("\nrelational-expression-> relational-expression > additive-expression\n");}
			|relational_expression LESSEQ additive_expression {printf("\nrelational-expression-> relational-expression <= additive-expression\n");}
			|relational_expression GREATEREQ additive_expression {printf("\nrelational-expression-> relational-expression >= additive-expression\n");}
			;

equality_expression:	relational_expression {printf("\nequality-expression-> relational-expression\n");}
			|equality_expression EQUALS relational_expression {printf("\nequality-expression->equality-expression == relational-expression\n");}
			|equality_expression NOTEQ  relational_expression {printf("\nequality-expression->equality-expression != relational-expression\n");}
			;

logical_and_expression:	equality_expression {printf("\nlogical-AND-expression-> equality-expression\n");}
			|logical_and_expression LOG_AND equality_expression {printf("\nlogical-AND-expression-> logical-AND-expression&&equality-expression\n");}
			;
 
logical_or_expression:	logical_and_expression {printf("\nlogical-OR-expression->logical-AND-expression\n");}
			|logical_or_expression LOG_OR logical_and_expression {printf("\nlogical-OR-expression-> logical-OR-expression || logical-AND-expression\n");}
			;

conditional_expression: logical_or_expression {printf("\nconditional-expression->logical-OR-expression\n");}
			|logical_or_expression QUES expression COLON conditional_expression {printf("\nconditional-expression-> logical-OR-expression ? expression : conditional-expression\n");}
						;

assignment_expression:	conditional_expression {printf("\nassignment-expression-> conditional-expression\n");}
			|unary_expression ASSIGN assignment_expression {printf("\nassignment-expression-> unary-expression = assignment-expression\n");}
			;



expression:	assignment_expression {printf("\nexpression-> assignment-expression\n");}
		;


/* *********DECLARATIONS************ */
declaration:	type_specifier init_declarator {printf("\ndeclaration-> type-specifier init-declaration\n");}
		;



init_declarator:	declarator {printf("\ninit-declarator-> declarator\n");}
			|declarator ASSIGN initializer {printf("\ninit-declarator-> declarator=initializer\n");}
			;


type_specifier:	VOID {printf("\ntype-specifier-> void\n");}
		|CHAR {printf("\ntype-specifier-> char\n");}
		|INT {printf("\ntype-specifier-> int\n");}
		;



declarator:	pointer_opt direct_declarator {printf("\ndeclarator-> pointer-opt direct-declarator\n");}
		;

pointer_opt: /* epsilon */
		|pointer
		;


direct_declarator:	identifier {printf("\ndirect-declarator-> identifier\n");}
			|identifier LSQBRACKET interger_constant RSQBRACKET {printf("\ndirect-declarator-> direct_declarator[integer-constant]\n");}
			|identifier LPARAN parameter_list_opt RPARAN {printf("\ndirect-declarator-> direct_declarator(parameter-list-opt)\n");}
			;

interger_constant:	INT_CONST
			;


pointer:	MULT {printf("\npointer->*\n");}
		;


parameter_list_opt: /*epsilon*/
			|parameter_list
			;

parameter_list: parameter_declaration {printf("\nparameter-list-> parameter-declaration\n");}
		|parameter_list COMMA parameter_declaration {printf("\nparameter-list-> parameter-list,parameter-declaration\n");}
		;

parameter_declaration:	type_specifier pointer_opt identifier_opt {printf("\nparameter-declaration-> type-specifier pointer-opt identifier-opt\n");}
			;



initializer:	assignment_expression {printf("\ninitializer-> assignment-expression\n");}
		;

/* *********STATEMENTS************ */
statement: compound_statement {printf("\nstatement-> compound-statement\n");}
		   |expression_statement {printf("\nstatement-> expression-statement\n");}
		   |selection_statement {printf("\nstatement-> selection-statement\n");}
		   |iteration_statement {printf("\nstatement-> iteration-statement\n");}
		   |jump_statement {printf("\nstatement-> Sjump-statement\n");}
		   ;

compound_statement: LBRACE block_item_list_opt RBRACE {printf("\ncompound-statement-> {block-item-list-opt}\n");}
					;

block_item_list_opt: /* epsilon */
			|block_item_list
			;

block_item_list:	block_item {printf("\nblock-item-list-> block-item\n");}
			|block_item_list block_item {printf("\nblock-item-list-> block-item-list block-item\n");}
			;

block_item: declaration {printf("\nblock-item-> declaration\n");}
			|statement {printf("\nblock-item-> statement\n");}
			;

expression_statement: expression_opt SEMICOLON {printf("\nexpression-statement-> expression-opt\n");}
					  ;

expression_opt: /* epsilon */
		|expression
		;

selection_statement:	IF LPARAN expression RPARAN statement {printf("\nselection-statement-> if(expression) statement\n");}
			|IF LPARAN expression RPARAN statement ELSE statement {printf("\nselection-statement-> if(expression) statement else statement\n");}
			;

iteration_statement: FOR LPARAN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPARAN statement {printf("\niteration-statement->for(expression-opt;expression-opt;expression-opt) statement\n");}
		|FOR LPARAN declaration expression_opt SEMICOLON expression_opt RPARAN statement {printf("\niteration-statement->for(declaration expression-opt;expression-opt) statement\n");}
					 ;
jump_statement: RETURN expression_opt SEMICOLON {printf("\njump-statement-> return expression-opt;\n");}
		;




/* *********EXTERNAL DEFINITIONS************ */

translational_unit:	external_declaration {printf("\ntranslational-unit-> external-declaration\n");}
			;

external_declaration:	function_definition {printf("\nexternal-declaration-> function-definition\n");}
			|declaration {printf("\nexternal-declaration-> declaration\n");}
			;

function_definition:	type_specifier declarator declaration_list_opt compound_statement {printf("\nfunction-definition-> type-specifier declarartor declaration-list-opt compound-statement\n");}
			;

declaration_list_opt: /* epsilon */
			|declaration_list
			;

declaration_list:	declaration {printf("\ndeclaration-list-> declaration\n");}
			|declaration_list declaration {printf("\ndeclaration-list-> declaration-list declaration\n");}
			;


%%


void yyerror (char *s) 
{
  printf ("%s\n", s);
}

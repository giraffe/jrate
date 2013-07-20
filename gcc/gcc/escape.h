#ifndef GCC_ESCAPE_H
#define GCC_ESCAPE_H
//#include <vector>
//#include <map>
//#include <iostream>
//#include "tree.h"

//using namespace std;


int use_escape_analysis;

/*
struct Alias
{
	vector<int> vars;
	map<int, Alias> field_map;
	int s_up;
	int s_down;
};

struct AliasContext
{
	vector<int> parms;
	int tre;
	int excp;
};

struct CallSite
{
	int filename;
	int line;
	int name;
	struct AliasContext siteContext;
};

struct MethodSummary
{
	vector<Alias> alias_set;
	AliasContext alias_context;
	vector<CallSite> call_sites;
	vector<int> status;
};
map<int, MethodSummary> method_map;
map<int, Alias> alias_map;
*/

/*extern "C"*/ void initEscapeAnalysis();

/*extern "C"*/ //void initMethodSummary();

//extern "C" MethodSummary getMethodSummary(string methodName);

/*extern "C"*/ //Alias getAlias(char * varName);

#endif /* ! GCC_ESCAPE_H */

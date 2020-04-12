#include "FamilyTree.hpp"
#include <iostream>
#include "doctest.h"
using namespace std;

TEST_CASE("Test relation and add and find")
{
	family::Tree T("yousef");			 // Yosef is the "root" of the tree (the youngest person).
	T.addFather("yousef", "yaakov")	 // Tells the tree that the father of Yosef is Yaakov.
		.addMother("yousef", "Rachel") // Tells the tree that the mother of Yosef is Rachel.
		.addFather("yaakov", "drake")
		.addMother("yaakov", "eve")
		.addFather("Rachel", "issac")
		.addMother("Rachel", "sema")
		.addFather("drake", "rami")
		.addMother("drake", "carol")
		.addFather("rami", "alex")
		.addMother("rami", "reta")
		.addFather("carol", "dan")
		.addMother("carol", "segal")
		.addFather("alex", "adam")
		.addMother("alex", "rose")
		.addFather("dan", "odi")
		.addMother("dan", "dema")
		.addFather("segal", "sam")
        .addMother("segal", "lara")
		.addFather("issac", "fred")
		.addMother("issac", "sara")
        .addFather("sema", "adham")
		.addMother("sema", "shere")
        .addFather("sara", "fadi")
		.addMother("sara", "alice");

	CHECK(T.relation("yaakov") == string("father"));
	CHECK(T.relation("Rachel") == string("mother"));

	CHECK(T.relation("drake") == string("grandfather"));
	CHECK(T.relation("eve") == string("grandmother"));
	CHECK(T.relation("issac") == string("grandfather"));
	CHECK(T.relation("sema") == string("grandmother"));

	CHECK(T.relation("rami") == string("great-grandfather"));
	CHECK(T.relation("carol") == string("great-grandmother"));
    CHECK(T.relation("fred") == string("great-grandfather"));
	CHECK(T.relation("sara") == string("great-grandmother"));
    CHECK(T.relation("adham") == string("great-grandfather"));
	CHECK(T.relation("shere") == string("great-grandmother"));

	CHECK(T.relation("alex") == string("great-great-grandfather"));
	CHECK(T.relation("reta") == string("great-great-grandmother"));
	CHECK(T.relation("segal") == string("great-great-grandmother"));
	CHECK(T.relation("dan") == string("great-great-grandfather"));
    CHECK(T.relation("fadi") == string("great-great-grandmother"));
	CHECK(T.relation("alice") == string("great-great-grandfather"));

	CHECK(T.relation("rose") == string("great-great-great-grandmother"));
	CHECK(T.relation("adam") == string("great-great-great-grandfather"));
	CHECK(T.relation("odi") == string("great-great-great-grandfather"));
	CHECK(T.relation("dema") == string("great-great-great-grandmother"));
	CHECK(T.relation("sam") == string("great-great-great-grandfather"));
	CHECK(T.relation("lara") == string("great-great-great-grandmother"));

	CHECK(T.find("father") == string("yaakov"));
	CHECK(T.find("mother") == string("Rachel"));
	CHECK(T.find("grandfather") == string("drake"));
	CHECK(T.find("grandmother") == string("eve"));
	CHECK(T.find("great-grandfather") == string("rami"));
	CHECK(T.find("great-grandmother") == string("carol"));
	CHECK(T.find("great-great-grandfather") == string("alex"));
	CHECK(T.find("great-great-grandmother") == string("reta"));
	CHECK(T.find("great-great-great-grandmother") == string("rose"));
	CHECK(T.find("great-great-great-grandfather") == string("adam"));
}

TEST_CASE("Test remove if removed parents all should be removed except for yousef")
{
	family::Tree T("yousef");			 // Yosef is the "root" of the tree (the youngest person).
	T.addFather("yousef", "yaakov")	 // Tells the tree that the father of Yosef is Yaakov.
		.addMother("yousef", "Rachel") // Tells the tree that the mother of Yosef is Rachel.
		.addFather("yaakov", "drake")
		.addMother("yaakov", "eve")
		.addFather("Rachel", "issac")
		.addMother("Rachel", "sema")
		.addFather("drake", "rami")
		.addMother("drake", "carol")
		.addFather("rami", "alex")
		.addMother("rami", "reta")
		.addFather("carol", "dan")
		.addMother("carol", "segal")
		.addFather("alex", "adam")
		.addMother("alex", "rose")
		.addFather("dan", "odi")
		.addMother("dan", "dema")
		.addFather("segal", "sam")
        .addMother("segal", "lara")
		.addFather("issac", "fred")
		.addMother("issac", "sara")
        .addFather("sema", "adham")
		.addMother("sema", "shere")
        .addFather("sara", "fadi")
		.addMother("sara", "alice");

	T.remove("yaakov");
	T.remove("Rachel");

	CHECK(T.relation("yaakov") == string("unrelated"));
	CHECK(T.relation("Rachel") == string("unrelated"));
	CHECK(T.relation("drake") == string("unrelated"));
	CHECK(T.relation("eve") == string("unrelated"));
	CHECK(T.relation("issac") == string("unrelated"));
	CHECK(T.relation("sema") == string("unrelated"));
	CHECK(T.relation("rami") == string("unrelated"));
	CHECK(T.relation("carol") == string("unrelated"));
	CHECK(T.relation("alex") == string("unrelated"));
	CHECK(T.relation("reta") == string("unrelated"));
	CHECK(T.relation("dan") == string("unrelated"));
	CHECK(T.relation("segal") == string("unrelated"));
	CHECK(T.relation("adam") == string("unrelated"));
	CHECK(T.relation("rose") == string("unrelated"));
	CHECK(T.relation("odi") == string("unrelated"));
	CHECK(T.relation("dema") == string("unrelated"));
	CHECK(T.relation("sam") == string("unrelated"));
	CHECK(T.relation("lara") == string("unrelated"));
	CHECK(T.relation("fred") == string("unrelated"));
	CHECK(T.relation("sara") == string("unrelated"));
    CHECK(T.relation("fadi") == string("unrelated"));
    CHECK(T.relation("alice") == string("unrelated"));
    CHECK(T.relation("adham") == string("unrelated"));
    CHECK(T.relation("shere") == string("unrelated"));
}
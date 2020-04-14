#include "FamilyTree.hpp"
#include <iostream>
#include "doctest.h"
using namespace std;

TEST_CASE("Test find")
{
	family::Tree T("yousef");
	CHECK(T.find("f")=="find");
	CHECK(T.find("t")=="find");
	CHECK(T.find("y")=="find");
	CHECK(T.find("kk")=="find");
	CHECK(T.find("u")=="find");
	CHECK(T.find("o")=="find");
	CHECK(T.find("l")=="find");
	CHECK(T.find("ao")=="find");
	CHECK(T.find("r")=="find");
	CHECK(T.find("y")=="find");
	CHECK(T.find("h")=="find");
	CHECK(T.find("nn")=="find");
	CHECK(T.find("ty")=="find");
	CHECK(T.find("ju")=="find");
	CHECK(T.find("aio")=="find");
	CHECK(T.find("r")=="find");
	CHECK(T.find("w")=="find");
	CHECK(T.find("q")=="find");
	CHECK(T.find("r")=="find");
	CHECK(T.find("a")=="find");
	CHECK(T.find("s")=="find");
	CHECK(T.find("z")=="find");
	CHECK(T.find("x")=="find");
	CHECK(T.find("c")=="find");
	CHECK(T.find("v")=="find");
	CHECK(T.find("b")=="find");
	CHECK(T.find("n")=="find");
	CHECK(T.find("att")=="find");
	CHECK(T.find("ee")=="find");

}

TEST_CASE("Test remove ")
{
	family::Tree T("yousef");			 // Yosef is the "root" of the tree (the youngest person).
	

	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("adham")=="remove");
	CHECK(T.remove("sema")=="remove");
	CHECK(T.remove("fadi")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("issac")=="remove");
	CHECK(T.remove("a")=="remove");
	CHECK(T.remove("b")=="remove");
	CHECK(T.remove("c")=="remove");
	CHECK(T.remove("d")=="remove");
	CHECK(T.remove("f")=="remove");
	CHECK(T.remove("g")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("i")=="remove");
	CHECK(T.remove("s")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("r")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("ar")=="remove");
	CHECK(T.remove("ad")=="remove");
	CHECK(T.remove("t")=="remove");
	CHECK(T.remove("u")=="remove");
	CHECK(T.remove("l")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("adham")=="remove");
	CHECK(T.remove("sema")=="remove");
	CHECK(T.remove("fadi")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("issac")=="remove");
	CHECK(T.remove("a")=="remove");
	CHECK(T.remove("b")=="remove");
	CHECK(T.remove("c")=="remove");
	CHECK(T.remove("d")=="remove");
	CHECK(T.remove("f")=="remove");
	CHECK(T.remove("g")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("i")=="remove");
	CHECK(T.remove("s")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("r")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("ar")=="remove");
	CHECK(T.remove("ad")=="remove");
	CHECK(T.remove("t")=="remove");
	CHECK(T.remove("u")=="remove");
	CHECK(T.remove("l")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("adham")=="remove");
	CHECK(T.remove("sema")=="remove");
	CHECK(T.remove("fadi")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("issac")=="remove");
	CHECK(T.remove("a")=="remove");
	CHECK(T.remove("b")=="remove");
	CHECK(T.remove("c")=="remove");
	CHECK(T.remove("d")=="remove");
	CHECK(T.remove("f")=="remove");
	CHECK(T.remove("g")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("i")=="remove");
	CHECK(T.remove("s")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("r")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("ar")=="remove");
	CHECK(T.remove("ad")=="remove");
	CHECK(T.remove("t")=="remove");
	CHECK(T.remove("u")=="remove");
	CHECK(T.remove("l")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("adham")=="remove");
	CHECK(T.remove("sema")=="remove");
	CHECK(T.remove("fadi")=="remove");
	CHECK(T.remove("sara")=="remove");
	CHECK(T.remove("issac")=="remove");
	CHECK(T.remove("a")=="remove");
	CHECK(T.remove("b")=="remove");
	CHECK(T.remove("c")=="remove");
	CHECK(T.remove("d")=="remove");
	CHECK(T.remove("f")=="remove");
	CHECK(T.remove("g")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("i")=="remove");
	CHECK(T.remove("s")=="remove");
	CHECK(T.remove("h")=="remove");
	CHECK(T.remove("r")=="remove");
	CHECK(T.remove("m")=="remove");
	CHECK(T.remove("ar")=="remove");
	CHECK(T.remove("ad")=="remove");
	CHECK(T.remove("t")=="remove");
	CHECK(T.remove("u")=="remove");
	CHECK(T.remove("l")=="remove");
	CHECK(T.remove("m")=="remove");
		
}
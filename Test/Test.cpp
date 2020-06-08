#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"
#include "number_polar.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	
	TEST_CLASS(Test)
	{
	public:
		//класс Cartoon
		TEST_METHOD(Insert_function)
		{
			container c{};
			element *el = new element;
			element *el2 = new element;
			insert(c, el);
			Assert::AreEqual(int(c.size), 1);
			insert(c, el);
			Assert::AreEqual(int(c.size), 2);
		}

		TEST_METHOD(In_function)
		{
			ifstream fin("inp_test2.txt");
			container c{};
			in(c, fin);
			Assert::AreEqual(int(c.begin->el_data->key), 1);
			fin.close();
		}

		TEST_METHOD(Out_function)
		{
			ifstream fin("inp.txt");
			ofstream fout("inp_out.txt");
			container c{};
			in(c, fin);
			out(c, fout);
			fin.close();
			fout.close();
			ifstream f_test("inp_out.txt");
			// Проверим, пустой ли файл
			Assert::AreEqual(fin.eof(), false);
			f_test.close();
		}

		TEST_METHOD(Clear_function)
		{
			ifstream fin("inp_test4.txt");
			container c{};
			int num;
			fin >> num;
			in(c, fin);
			Clear_function(c);
			Assert::AreEqual(c, 0);
			fin.close();
		}
		
	};
}

#include <iostream>
using namespace std;

#include "String.h"

void TestingCtorsDtor ()
{
    // testing c'tors
    String s1;
    cout << "s1: " << s1 << endl;
    String s2 ("12345");
    cout << "s2: " << s2 << endl;
    String s3 (s2);
    cout << "s3: " << s3 << endl;
}

void TestingInsert ()
{
    String s1 ("12678");
    s1.Insert ("345", 2);
    cout << "s1: " << s1 << endl;

    String s2 ("ABCD");
    s2.Insert (s1, 2);
    cout << "s2: " << s2 << endl;

    s2.Insert ("!", 13);
    cout << "s2: " << s2 << endl;

    s2.Insert (".", 12);
    cout << "s2: " << s2 << endl;

    s2.Insert (".", 0);
    cout << "s2: " << s2 << endl;
}

void TestingAppend ()
{
    String s1;
    s1.Append ("123");
    cout << "s1: " << s1 << endl;

    String s2 ("ABC");
    s2.Append ("DEF");
    cout << "s2: " << s2 << endl;
}

void TestingRemove ()
{
    String s1 ("12345");
    s1.Remove (1, 3);
    cout << "s1: " << s1 << endl;

    String s2 ("ABC");
    s2.Remove (0, 3);
    cout << "s2: " << s2 << endl;
}

void TestingSubString ()
{
    String s2 ("ABCDE");
    String s;
    s = s2.SubString (1, 3);
    cout << "s: " << s << endl;
    s = s2.SubString (0, 5);
    cout << "s: " << s << endl;
    s = s2.SubString (0, 6);
    cout << "s: " << s << endl;
    s = s2.SubString (0, 0);
    cout << "s: " << s << endl;
}

void TestingOperators ()
{
    // testing '=' operator
    String s1;
    String s2 ("12345");
    s1 = s2;
    cout << "s1: " << s1 << endl;

    // testing '==' operator
    cout << "s1 == s2: " << (s1 == s2) << endl;
    s1.Remove (0, 1);
    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 != s2: " << (s1 != s2) << endl;
}

void TestingInput ()
{
    String s;
    cout << "Enter string: ";
    cin >> s;
    cout << "String: " << s << '.' << endl;
}

void TestingLeftRight ()
{
    String s("12345");
    String s1;
    String s2;

    s1 = s.Left (3);
    cout << "Left(3):  " << s1 << '.' << endl;
    s2 = s.Right(2);
    cout << "Right(2): " << s2 << '.' << endl;

    s1 = s.Left (5);
    cout << "Left(5):  " << s1 << '.' << endl;
    s2 = s.Right(5);
    cout << "Right(5): " << s2 << '.' << endl;

    s1 = s.Left (6);
    cout << "Left(6):  " << s1 << '.' << endl;
    s2 = s.Right(6);
    cout << "Right(6): " << s2 << '.' << endl;
}

void TestingToUpperToLower ()
{
    String s("aBcDeFgHiJkLmNoPqRsTuVwXyZ");
    cout << "s:" << s << '.' << endl;
    s.ToUpper ();
    cout << "s:" << s << '.' << endl;
    s.ToLower ();
    cout << "s:" << s << '.' << endl;
}

void TestingFind ()
{
    String s("ABCDEFGHIJKLMN");
    int i = s.Find ("IJK");
    cout << "i: " << i << endl;

    i = s.Find ("ABCDEFGHIJKLMN");
    cout << "i: " << i << endl;

    i = s.Find ("IJKZ");
    cout << "i: " << i << endl;

    i = s.Find ("N");
    cout << "i: " << i << endl;

    i = s.Find ("Z");
    cout << "i: " << i << endl;

    i = s.Find ("");
    cout << "i: " << i << endl;
}

void TestingSubsriptOperator ()
{
    String s("ABCDE");
    cout << "s[0]: " << s[0] << endl;
    cout << "s[4]: " << s[4] << endl;

    s[0] = '<';
    s[4] = '>';
    cout << "s: " << s << endl;

    try
    {
        s[5] = '!';
    }
    catch (out_of_range& e)
    {
        cout << e.what () << endl;
    }
}

void TestingStringConcatenation ()
{
    String s1("123");
    String s2("ABC");
    String s3;

    s3 = s1 + s2;
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;

    s1 += s2 += "789";
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
}

void main ()
{
    TestingCtorsDtor ();
    TestingInsert ();
    TestingAppend ();
    TestingRemove ();
    TestingSubString ();
    TestingOperators ();
    TestingInput ();
    TestingLeftRight ();
    TestingToUpperToLower ();
    TestingFind ();
    TestingSubsriptOperator ();
    TestingStringConcatenation ();

	getchar();
}

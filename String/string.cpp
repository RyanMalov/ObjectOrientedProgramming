//Ryan Malov

//This is the main file for the String Practice

#include <cstring>
#include <iostream>

class String
{
		public:
				String(const char* s)
				: len(std::strlen(s)), str(new char[len])
				{
						std::strncpy(str, s, len);
				}

				String(const String& s)
				: str(s.str), len(s.len)
				{}

				~String()
				{
						delete[] str;
				}

				int len;
				char* str;
};

bool operator==(const String& a, const String& b)
{
		return strcmp(a.str, b.str);
}

bool operator !=(const String& a, const String& b)
{
		return !(a.str, b.str);
}


int main()
{
		//Default Constructor
		string s0;

		//Construct and assign from a literal value
		string s1 = "hello";
		s1 = "foo";

		//Copy construct and assign
		string s2 = s1;
		s2 = s1;

		//Compare
		s1 ==s1;

		//Order
		s1 < s1;

		//Object Independence
		s2 = "bar";
}

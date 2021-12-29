//COMPILER DESIGN SEC:F NAME:FAWJIA,JEBA ID:19-39815-1

/*3. Write a C/C++ program that can remove comment lines from a program (a task of preprocessor).*/
// C++ program to remove comments from a C/C++ program
#include <iostream>
using namespace std;

string removecom(string prgm)
{
    int n = prgm.length();
    string res;

    // Flags to indicate that single line and multiple line comments
    // have started or not.
    bool r_cmt = false;
    bool m_cmt = false;


    // Traverse the given program
    for (int i=0; i<n; i++)
    {
        // If single line comment flag is on, then check for end of it
        if (r_cmt == true && prgm[i] == '\n')
            r_cmt = false;

        // If multiple line comment is on, then check for end of it
        else if  (m_cmt == true && prgm[i] == '*' && prgm[i+1] == '/')
            m_cmt = false,  i++;

        // If this character is in a comment, ignore it
        else if (r_cmt || m_cmt)
            continue;

        // Check for beginning of comments and set the approproate flags
        else if (prgm[i] == '/' && prgm[i+1] == '/')
            r_cmt = true, i++;
        else if (prgm[i] == '/' && prgm[i+1] == '*')
            m_cmt = true,  i++;

        // If current character is a non-comment character, append it to res
        else  res += prgm[i];
    }
    return res;
}

// Driver program to test above functions
int main()
{
    string prgm = "   /*Program  for removing comment*/ \n"
                  "   int main()  \n"
                  "   {           \n"
                  "      // This is called variable declaration \n"
                  "      int a, b, c;    \n"
                  "      /* This is   \n"
                  "          called     \n"
                  "          initialization of   \n"
                  "          a variable*/      \n"
                  "      a = b + c;       \n"
                  "   }           \n";
    cout << "Before removing comment: \n";
    cout << prgm << endl;
    cout << " After removing comment: ";
    cout << removecom(prgm);
    return 0;
}


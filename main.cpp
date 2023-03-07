#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack <char> st;
    string line;
    cin >> line;
    for(char& c : line) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            switch (st.top()) { //
                case '(':
                    if (c == ')'){
                        st.pop();
                    } else {
                        cout << "no" << endl;
                        return 0;
                    }
                    break;
                case '[':
                    if (c == ']'){
                        st.pop();
                    } else {
                        cout << "no" << endl;
                        return 0;
                    }
                    break;
                case '{':
                    if (c == '}'){
                        st.pop();
                    } else {
                        cout << "no" << endl;
                        return 0;
                    }
                    break;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}


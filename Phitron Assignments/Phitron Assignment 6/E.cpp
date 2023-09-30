#include <bits/stdc++.h>
using namespace std;
#define T top()

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; 
        string s;
        cin >> n >> s;
        stack<char> st;

        for(char c: s)
        {
            if(st.empty()) st.push(c);
            else
            {
                if(st.T == c)
                {
                    st.pop();
                }
                else
                {
                    char C;

                    if((st.T=='R' && c=='B') || (st.T=='B' && c=='R'))
                    {
                        C = 'P';
                    }
                    else if((st.T=='R' && c=='G') || (st.T=='G' && c=='R'))
                    {
                        C = 'Y';
                    }
                    else if((st.T=='B' && c=='G') || (st.T=='G' && c=='B'))
                    {
                        C = 'C';
                    }
                    else
                    {
                        st.push(c);
                        continue;
                    }
                    
                    st.pop();
                    if(!st.empty())
                    {
                        if(st.T == C)
                        {
                            st.pop();
                            continue;
                        }
                    }
                    st.push(C);
                }
            }
        }

        if(!st.empty())
        {
            stack<char> S;
            while(!st.empty())
            {
                S.push(st.T);
                st.pop();
            }
            while(!S.empty())
            {
                cout << S.T;
                S.pop();
            }
        }
        cout << endl;
    }

    return 0;
}

/* 
https://www.hackerrank.com/SSKsan
@SSKsan

N.B. I have multiple accepted submission for the same problems, here's the reason:
(Problem 1) At first I solved it using STL list, as I mistook the note in the problem statement and thought only STL stack & queue are forbidden. But in my first submission I figured that I didn't implement stack & queue properly for removing and putting in the new lists, so I submitted 2 more times to do a better solution. But then in the fb group Mahmud Pias vai told me I can't use any STL that means list too. So in my 4th and last submission, I used doubly linked list to implement the solution.
(Problem 4 & 5) At first I solved these problems using string as it seemed easier and not stack/queue. They were accepted but after realising I had to solve everything using stack or queue, I solved these 2 problems again using the required methods, hence multiple accepted solutions. 
So please count the last accepted submissions for these 3 problems.
 */
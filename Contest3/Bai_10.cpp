#include <bits/stdc++.h>
#include <stack>
using namespace std;
stack<int> sortStack(stack<int> &input) 
{ 
    stack<int> tmpStack; 
  
    while (!input.empty()) 
    { 
        // pop out the first element 
        int tmp = input.top(); 
        input.pop(); 
  
        // while temporary stack is not empty and top 
        // of stack is greater than temp 
        while (!tmpStack.empty() && tmpStack.top() < tmp) 
        { 
            // pop from temporary stack and push 
            // it to the input stack 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
        // push temp in tempory of stack 
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 
int main() {
	int t,a[100000],f,s;
	stack <int>qp;
	long long n, otp;
	cin >> t;
	
	while(t--) {
		cin >> n; otp = 0;
		for(long long i = 0 ;i<n;i++){
			int x ; 
			cin >> x;
			qp.push(x);
		}
		stack<int> tmpStack = sortStack(qp);
		
		while(tmpStack.size() >1){
			f = tmpStack.top();
			tmpStack.pop();
			s = tmpStack.top();
			tmpStack.pop();
			otp =otp + f+s;
			tmpStack.push(f+s);
			
		}
		cout << otp;
		cout << endl;
	}
	return 0;
}

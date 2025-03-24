#include <iostream>
#include <vector>
#include <stack>

void generateParenthesis(int n, std::stack<char>& stack, int i, std::vector<std::string>& result, std::string mid) {
    if (mid.size() == 2 * n) {  // Base case: When mid has 2 * n characters
        result.emplace_back(mid);
        return;
    }

    // Add '{' if we haven't used all 'n' open brackets
    if (i < n) {
        stack.push('{');
        generateParenthesis(n, stack, i + 1, result, mid + "{");
        stack.pop();  // Backtrack
    }

    // Add '}' if there is an unmatched '{' in the stack
    if (!stack.empty()) {
        stack.pop();  // Remove matching '{'
        generateParenthesis(n, stack, i, result, mid + "}");
        stack.push('{');  // Backtrack: Restore stack state
    }
}

int main() {
    int n = 3;
    std::vector<std::string> result;
    std::stack<char> stack;
    
    generateParenthesis(n, stack, 0, result, "");

    for (const std::string& s : result) {
        std::cout << s << std::endl;
    }

    return 0;
}

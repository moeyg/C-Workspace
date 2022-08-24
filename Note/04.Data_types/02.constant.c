// Const (상수)

int main()
{
    int num_variable = 42;
    // int : Data type
    // num_variable : Variable
    // 42 : literal constant

    const int num_const = 42;
    // const : Qualifier - 재할당 X
    // int : Data type
    // num_const : Symbolic constant
    // 42 : literal constant

    // error: cannot assign to variable 'num_const' with const-qualified type 'const int'
    num_const = 1; // 재할당 X
} 
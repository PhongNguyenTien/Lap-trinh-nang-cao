double calculate(double num1, char operat, double num2){
    double result;
    switch (operat){
        case '+': result =  num1 + num2;break;
        case '-': result =  num1 - num2;break;
        case '*': result =  num1 * num2;break;
        case '/': result =  num1 / num2;break;
    }
    return result;
}
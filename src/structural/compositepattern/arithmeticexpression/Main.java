package structural.compositepattern.arithmeticexpression;

public class Main {
    public static void main(String[] args) {
        //9*(1+8)

        /*
                    *
                   /  \
                  9    +
                      /  \
                     1    8

        */

        ArithmeticExpression nine = new Number(9);
        ArithmeticExpression one = new Number(1);
        ArithmeticExpression eight = new Number(8);

        ArithmeticExpression addExpression = new Expression(one,eight,Operation.ADD);

        ArithmeticExpression parentExpression = new Expression(nine,addExpression,Operation.MULTILPY);

        parentExpression.evaluate();
    }
}

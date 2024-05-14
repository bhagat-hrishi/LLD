package structural.compositepattern.arithmeticexpression;

public class Number implements ArithmeticExpression {
    int value;

    public Number(int no){
        this.value = no;
    }

    public int evaluate(){
        System.out.println("Number value is : "+value);
        return value;
    }
}

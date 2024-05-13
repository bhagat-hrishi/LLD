package structural.decoratorpattern;

public class ExtraCheese extends ToppingDecorator{
    BasePizza basePizza;

    public ExtraCheese(BasePizza basePizza){
        this.basePizza=basePizza;
    }

    @Override
    public int cost() {
        /* here we are returning cost of base pizza + topping cost as 10*/
        return this.basePizza.cost()+10;
    }
}

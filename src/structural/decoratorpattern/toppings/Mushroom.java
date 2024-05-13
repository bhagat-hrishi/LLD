package structural.decoratorpattern;

public class Mushroom extends ToppingDecorator {
    BasePizza basePizza;

    public Mushroom(BasePizza basePizza){
        this.basePizza=basePizza;
    }

    @Override
    public int cost() {
        /* here we are returning cost of base pizza + topping cost as 15*/
        return this.basePizza.cost()+15;
    }
}


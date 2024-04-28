package behavioral.stratergypattern.example2;

import behavioral.stratergypattern.example2.strategies.AddStrategy;
import behavioral.stratergypattern.example2.strategies.SubStrategy;

public class Demo {
	
	public static void main(String[] args) {
		
		int a = 50,b=40;
		MathOperation operation = new MathOperation();
		AddStrategy addStrategy = new AddStrategy();
		
		operation.setMathStrategy(addStrategy);
		System.out.println("Add Stratergy Executed : "+operation.executeMathStrategy(a,b));
		
		
		SubStrategy subStrategy = new SubStrategy();
		operation.setMathStrategy(subStrategy);
		System.out.println("Sub Stratergy Executed : "+operation.executeMathStrategy(a,b));
		operation.executeMathStrategy(a,b);
	}
}

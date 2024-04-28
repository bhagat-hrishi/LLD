package behavioral.stratergypattern.example2;

import behavioral.stratergypattern.example2.strategies.MathStrategy;

public class MathOperation {
	private MathStrategy mathStrategy;
	
	public void setMathStrategy(MathStrategy mathStrategy) {
		this.mathStrategy = mathStrategy;
	}
	
	public  int executeMathStrategy(int a,int b) {
		 return mathStrategy.execute(a, b);
	}
}

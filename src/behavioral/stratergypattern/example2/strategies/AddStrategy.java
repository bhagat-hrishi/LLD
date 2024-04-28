package behavioral.stratergypattern.example2.strategies;

public class AddStrategy implements MathStrategy {

	@Override
	public int execute(int a, int b) {
		return a+b;
	}

}

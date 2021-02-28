practical 5.</br>
Aim: Write  a program to create a robot that does a circle using 2 motors.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_5.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_5.java 
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;
import ch.aplu.robotsim.NxtContext;

public class Prac_5{
	Prac_5(){
		NxtRobot robot=new NxtRobot();
		Gear gear=new Gear();
		robot.addPart(gear);
		
		gear.forward(200);
		gear.setSpeed(60);
		
		gear.leftArc(0.2, 7000);
		gear.forward(200);
		
		gear.leftArc(0.2, 7000);
		gear.forward(200);

		gear.leftArc(0.2, 7000);
		gear.forward(200);
		
		gear.leftArc(0.2, 7000);
		gear.forward(200);
		
		robot.exit();
	}
	static{
		NxtContext.setStartPosition(250, 200);
		NxtContext.setStartDirection(90);
	}
	public static void main(String args[]){
		new Prac_5();
	}
}
```

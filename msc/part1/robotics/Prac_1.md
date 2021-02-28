practical 1.</br>
Aim: Write a program to create a robot to move, forward, turn left and right without gears.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_1.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_1.java 
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;


public class Prac_1{
	Prac_1(){
        NxtRobot robot=new NxtRobot();
        Gear gear=new Gear();

        robot.addPart(gear);
        gear.forward(400);
        gear.setSpeed(30);
        gear.left(800);

        gear.backward(2000);
        gear.right(840);
        robot.exit();
	}
	public static void main(String args[]){
		new Prac_1();
	}
}
```

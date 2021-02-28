practical 2.</br>
Aim: Write a program to create a robot and add two motors to it, make it move forward,left and right.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_2.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_2.java 
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;

public class Prac_2{
	Prac_2(){
		NxtRobot robot=new NxtRobot();
        Motor  motA=new Motor(MotorPort.A);
        Motor motB=new Motor(MotorPort.B);
        
        robot.addPart(motA);
        robot.addPart(motB);
        
        motA.forward();
        motB.forward();
        //motA.setSpeed(30);
        Tools.delay(2000);
        motA.stop();
        Tools.delay(1050);
        
        motA.forward();
        Tools.delay(2000);
        
        motB.stop();
        Tools.delay(1050);
        
        motB.forward();
        Tools.delay(2000);
        
        robot.exit();
	}
	public static void main(String args[]){
		new Prac_2();
	}
}

```

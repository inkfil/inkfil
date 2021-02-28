practical 3.</br>
Aim: Write a program to create a robot that moves in a square using a while loop.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_3.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_3.java
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;

public class Prac_3{
	Prac_3(){
		NxtRobot robot=new NxtRobot();
        Gear gear=new Gear();
        robot.addPart(gear);
        gear.setSpeed(100);
       
        int i = 0;
        while(i < 4){
            gear.forward(1000);
        	gear.left(90);
            i++;
		}
   
        Tools.delay(2000);
        robot.exit();
	}
	public static void main(String args[]){
		new Prac_3();
	}
}
```

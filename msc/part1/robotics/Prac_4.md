practical 4.</br>
Aim: Write  a program to create a robot with light sensors to follow a line. In this program the robot has to follow the black line.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_4.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_4.java
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;
import ch.aplu.robotsim.LightSensor;
import ch.aplu.robotsim.RobotContext;
import ch.aplu.robotsim.SensorPort;

public class Prac_4{
	Prac_4(){
		LegoRobot robot=new LegoRobot();
        LightSensor ls=new LightSensor(SensorPort.S3);
        robot.addPart(ls);
        Gear gear=new Gear();
		robot.addPart(gear);
		while(true){
			if(ls.getValue()< 500){
				gear.leftArc(0.1);
			}
            else{
				gear.rightArc(0.1);
			}
		}
	}
    static{
        RobotContext.setStartDirection(-90);
        RobotContext.setStartPosition(250, 490);
        RobotContext.useBackground("sprites/black_white.gif");
    }
	
	public static void main(String args[]){
		new Prac_4();
	}
}
```

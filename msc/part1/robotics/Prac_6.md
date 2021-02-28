practical 6.</br>
Aim: Write a program to create a robot with two light sensors to follow a line. In this program the robot has to follow the white line.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_6.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_6.java
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

public class Prac_6{
	Prac_6(){
		NxtRobot robot=new NxtRobot();
        LightSensor ls1=new LightSensor(SensorPort.S1);
        LightSensor ls2=new LightSensor(SensorPort.S2);
        Gear gear=new Gear();
        gear.setSpeed(60);
        robot.addPart(gear);
        robot.addPart(ls1);
        robot.addPart(ls2);
        gear.forward();
        
        while(true){
            int rightValue=ls1.getValue();
            int leftValues=ls2.getValue();
            int d=rightValue-leftValues;
            
            if(d>100){
                gear.rightArc(0.1);
			}
            if(d<-100){
                gear.leftArc(0.1);
			}
            if (d>-100 && d<100 && rightValue>500){
                gear.forward();
			}
        }
	}
	public static void main(String args[]){
		new Prac_6();
	}
}
```

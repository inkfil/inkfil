practical 7.</br>
Aim: Write a program to register obstacles.</br>
Date: 

Source Code:
```java
// filename (case sensitive): Prac_7.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_7.java 
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
import ch.aplu.robotsim.TouchSensor;

public class Prac_7{
	Prac_7(){
		NxtRobot robot=new NxtRobot();
        TouchSensor ts=new TouchSensor(SensorPort.S1);
        Gear gear=new Gear();
        robot.addPart(gear);
        robot.addPart(ts);
        gear.forward();
        gear.setSpeed(60);
        
        while(true){
            if(ts.isPressed()){
                gear.backward();
                gear.left(750);
                gear.forward();
            }
        }
	}
	static{
        RobotContext.showNavigationBar();
        RobotContext.useObstacle("sprites/bar0.gif",250,200);
        RobotContext.useObstacle("sprites/bar1.gif",400,250);
        RobotContext.useObstacle("sprites/bar2.gif",250,400);
        RobotContext.useObstacle("sprites/bar3.gif",100,250);
    }
	public static void main(String args[]){
		new Prac_7();
	}
}
```

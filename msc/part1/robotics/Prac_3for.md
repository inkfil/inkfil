Practical 3 (Extra).</br>
Aim: Write a program to create a robot that moves in a square using a for loop.</br>
Date:

Source Code:
```java
// filename (case sensitive): Prac_3for.java
// to run (using cli): java -cp "..\ch\RobotSim.jar;..\ch\aplu5.jar;..\ch\JGameGrid.jar" Prac_3for.java
import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.LegoRobot;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;
import ch.aplu.robotsim.TurtleRobot;

public class Prac_3for{
    public Prac_3for(){
        NxtRobot robot = new NxtRobot();
        Gear gear = new Gear();
        robot.addPart(gear);
        gear.setSpeed(100);
        gear.backward(50);
        for (int i = 0; i < 4; i++){
              robot.forward(80);
              robot.right(90);
              robot.forward(80);
              robot.right(90);
              robot.forward(80);
              robot.right(90);
              robot.forward(80);
        }
        robot.exit();
        
    }
    public static void main(String[]args){
        new Prac_3for();
    }
  
}
```

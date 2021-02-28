M.Sc I Computer Science

Robotics and AI Practicals

Practical No. 1

Aim : Write a program to create a robot to move, forward, turn left and right without gears.
```java
package robotics;

import ch.aplu.robotsim.*;


public class Robotics_1 {
    
    Robotics_1()
    {
        //Creates a turtle robot
        TurtleRobot robot = new TurtleRobot();
        robot.forward(100);
        robot.left(90);
        robot.right(200);
        robot.forward(100);
    
    }
    
    public static void main(String args[])
    {
        new Robotics_1();
    }

}
```





Aim : Write a program to create a robot to move, forward, turn left and right with gears.
```java
package robotics2;

import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.NxtRobot;


public class Robotics_2 {
    
    Robotics_2()
    {
        //Creates a turtle robot
        NxtRobot robot = new NxtRobot();
        Gear gear = new Gear();
        robot.addPart(gear);
        gear.forward(2000);
        gear.setSpeed(30);
        gear.left(480);
        gear.forward(500);
        gear.right(480);
        gear.forward();
    
    }
    
    public static void main(String args[])
    {
        new Robotics_2();
    }
}
```
 
 
 
 
 
 
 
 
 
 
 
Practical No. 2
Aim : Write a program to create a robot and add two motors to it, make it move forward,left and right.
```java
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;

public class Robotics_motor {

    //Constructor
    public Robotics_motor()
    {
        NxtRobot robot = new NxtRobot();
        //motor to move left
        Motor motA = new Motor(MotorPort.A);
        //motor to move right
        Motor motB = new Motor(MotorPort.B);
        //add motors to left and right
        robot.addPart(motA);
        robot.addPart(motB);

        //both motors activated so robot will go straight
        motA.forward();
        motB.forward();
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
    
    public static void main(String[] args) {
        
        new Robotics_motor();
    }

}
```





Practical No. 3
Aim : Write a program to create a robot that moves in a square using a while loop.
```java
import ch.aplu.robotsim.Motor;
import ch.aplu.robotsim.MotorPort;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.Tools;

public class Practical3 {
    
    Practical3 ()
    {
        NxtRobot robot = new NxtRobot();
        Motor motA = new Motor(MotorPort.A);
        Motor motB = new Motor(MotorPort.B);
        robot.addPart(motA);
        robot.addPart(motB);
        motA.forward();            
        motB.forward();
        Tools.delay(2000);
        while(true)
        {            
            motA.stop();      
            Tools.delay(1045);        
            motB.forward();            
            motA.forward();
            Tools.delay(1045);
            motB.forward();
            motA.forward();
            Tools.delay(1045);   
            motB.forward();
            Tools.delay(1045);
        }        
    }

     public static void main(String [] args)
        {    
            new Practical3 ();
        }


}
```













Practical No. 3
Aim : Write a program to create a robot that moves in a square using a for loop.

ASSIGNMENT GIVEN
TO STUDENTS

One of the solutions:
```java
package prac3B;

import ch.aplu.robotsim.TurtleRobot;

public class Prac3B {
    
    public Prac3B()
    {
         TurtleRobot robot = new TurtleRobot();

            for (int i = 0; i < 4; i++)
            {
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
    
    public static void main(String[] args) {
        new Prac3B();
    }    

}
```






Practical No. 4
Aim: Write  a program to create a robot with light sensors to follow a line.  In this program the robot has to follow the black line.
```java
import ch.aplu.robotsim.*;

public class Robotics_4 {
    
    public Robotics_4()
    {
        LegoRobot robot = new LegoRobot();
        Gear gear = new Gear();
        //Creates a sensor instance pointing downwards connected to the given port. 
        //In simulation mode, the sensor detects the brightness of the background pixel. 
        //The port selection determines the position of the sensor: S1: right; S2: left, S3: middle, S4: rear-middle.
        LightSensor ls = new LightSensor(SensorPort.S3);
        robot.addPart(gear);
        //set speed of robot using gear
        gear.setSpeed(80);
        robot.addPart(ls);
        
        while (true)
        {
            //getValue() - returns the brightness of the background at the current location.
            int v = ls.getValue();
            if (v < 100)  // black
            gear.forward();
            if (v > 300 && v < 750)  // blue
            //defines radius to turn around
            gear.leftArc(0.05);
            if (v > 800)  // yellow
            gear.rightArc(0.05);
        }


    }


    public static void main(String[] args) {
    
        new Robotics_4();
    }

    //initializations
    static
    {
        //Sets the starting position (x-y-coordinates)
        RobotContext.setStartPosition(50, 490);
        //Sets the starting direction (zero to EAST).
        RobotContext.setStartDirection(-90);
        //image from sprite folder
        RobotContext.useBackground("sprites/road.gif");
    }

}

```























Practical No. 5
Aim: Write  a program to create a robot that does a circle using 2 motors.
```java
import ch.aplu.robotsim.*;

public class Practical_5 {
    
    public Practical_5()
    {
        NxtRobot robot = new NxtRobot();
        Gear gear = new Gear();
        robot.addPart(gear);
        gear.setSpeed(60);
        gear.leftArc(0.2,6650); 
        Tools.delay(5000);
        robot.exit();

    }

    public static void main(String[] args) {
        
        new Practical_5();
    }

}

```






























Practical No. 5
Aim: Write a program to create a robot with two light sensors to follow a line.  In this program the robot has to follow the white line.

```java
package prac6;

import ch.aplu.robotsim.Gear;
import ch.aplu.robotsim.LightSensor;
import ch.aplu.robotsim.NxtContext;
import ch.aplu.robotsim.NxtRobot;
import ch.aplu.robotsim.SensorPort;

//import ch.aplu.robotsim.*;

public class Prac6 {
    
    public Prac6()
    {
        NxtRobot robot = new NxtRobot();
        Gear gear = new Gear();
        LightSensor ls1 = new LightSensor(SensorPort.S1); // right
        LightSensor ls2 = new LightSensor(SensorPort.S2); // left
        robot.addPart(gear);
        robot.addPart(ls1);
        robot.addPart(ls2);
        gear.forward();
        while (true)
        {
        int rightValue = ls1.getValue();
        int leftValue = ls2.getValue();
        int d = rightValue - leftValue;
        if (d > 100) // left dark , turn right
        gear.rightArc(0.1);
        if (d < -100) // right dark, turn left
        gear.leftArc(0.1);
        if (d > -100 && d < 100 && rightValue > 500) //already on white
        gear.forward();
        }
    }
    
        public static void main(String[] args)
        {
            new Prac6();            
        }
        
        static
        {
            NxtContext.setStartPosition(250, 490);
            NxtContext.setStartDirection(-90);
            NxtContext.useBackground("sprites/path.gif");
        }
}
```

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

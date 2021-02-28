practical 1.</br>
Aim: Write a program to create a robot to move, forward, turn left and right without gears.</br>
Date: 

Theory:

i)  Move with Gear:  We can use gears in different combination to change the force & the torque output of the motor.
The force generated at the edge of the gear is the ratio of the torque to the radius of the gear. By combining gears with different radii, we can manipulate the amount of the force and toque that gets generated.

Example:
Suppose we have two gears, one of which is attached to the shaft of the monitor and is called input gear, the other being the output gear. The torque generated at the output gear is proportional to the torque of the input gear and the ratio of the radii of the two gears.

Rule:
1) If the output gear is larger than the input gear, the torque increases.
2) If the output gear is smaller than the input gear, the torque decreases.

ii) Move without gear:
Define: Robot: A robot is an autonomous system which exists in the physical world, can sense its environment and can act on it to achieve some goals.
-	An autonomous robot acts on the basis of its own decision, and it is not controlled by a human.
-	Existing in a physical world, the same world in which humans, animals, objects, trees, weather and many other things exists in, is a fundamental property of robots.
-	A robot is an autonomous system which exists in the physical world, can sense its environment.

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

Theory:

Motors:
Motors are the most common actuators in robotics. They are well suited for activating wheels, since they provide rotational movement, thereby enabling wheels to turn and wheels of course are very popular. Effectors (in robotics and on the ground in general). There are three types of motors.
i) Direct Current Motors (DC)
ii) Gearing
iii) Servo Motor

i) Direct Current Motors (DC):
Compared with other two types of actuators, direct current motors are simple, inexpensive, easy to use and easy to find. To make motor run, you need to provide it with electrical power in right voltage range. If the voltage is low, the motor will turn but will have low power. On the other hand, if the voltage is too high, the power of motor will increase, but wear and tear will break down sooner.

ii) Gearing:
We can use gears in different combination to change the force & the torque output of the motor. The force generated at the edge of the gear is the ratio of the torque to the radius of the gear. If the output gear is larger than the input gear, the torque increases. If the output gear is smaller than the input gear, the torque decreases.
If the output gear is larger than the input gear the speed decreases. If the output gear is smaller than the input gear, the speed increases.
When a small gear drives a large one, torque is increased and speed is decreased. Analogously when a larger gear drives a smaller one, torque is decreased and speed is increased.

iii) Servo Motors:
Motors that can turn their shaft to a specific position are called servo-motors, because they can servo to a particular position. Servos are used in toys, such as for adjusting steering in remote- controlled car and wing position in RC airplanes.
In fact, servo motors are very different from DC motor. Servo motors are made from DC motors by adding following components –
a) Some gear reduction, for the reasons.
         b) A position sensor for the motor shafts, to track how much the motor is turning and in which direction.                    
c) An electronic circuit that controls the motor, in order to tell it how much to turn & in which direction.

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

Theory:

i) Creating square using while loop:
This program aims at moving robot in a square using while loop. Initially and object named robot is created for class NxtRobot and two motors motA and motB are created for class motor. The robot is then given those objects (motA and motB) using add part function. These objects are given forward function. While the condition is true for the robot, motA will stop first. It will take delay of 1045 unit time and then motB moves forward. Then motA moves forward and this delay is for 1045-unit time. Then again motB moves forward followed by motA with delay of 1045 unit time. Then finally motB moves forward and completes square.

ii) Moving a robot doing a step using for loop:
This program aims at moving a robot doing steps using for loop. Initially an object is created for class turtleRobot. For loop is used to define the number of steps a robot should create while moving. If the robots wants to create steps while moving, it should turn towards right and move forward, then it should take a left turn. This completes one step. To create a second step, the for loop is executed again till it completes five steps – once all five steps are created, the control moves out of for loop and the function of robot ends.

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

Theory:

Light sensors measure the amount of light impacting a photo-light sensor, but they can detect a wide range of wavelengths, much broader than the human eye can see. They can be cleverly positioned, oriented and shielded in order to improve their accuracy and range properties. They can be used as passive or active sensors in a variety of ways and they can measure the following properties:
-	Light intensity: how light/ dark it is
-	Differential intensity: difference between photocells
-	Break in continuity: “Break beam”, change/drop in intensity.
Various types of light sensors are:

1) Polarized light:
Polarized light whose waves travel only in a particular direction along a plane
Because just as we can use filters to polarize the light, we can use filters to detect light with a particular polarization. Therefore, we can design Polarized light sensors.

2) Reflective Optosensors:
Reflective optoscience it operates on the principal of reflected light. These are active sensors; they consist of an emitter and detector. The emitter is usually made with alight emitting diode (LED), and the detector is usually a photodiode / phototransistor.

3) Reflectance Sensors:
The emitter and detector are side by side, separated by a barrier, the presence of an object is detected when the light reflects from it and back into the detector.


4) Infrared Light:
Visible light is light in the frequency band of the electromagnetic spectrum that human eyes can perceive. Infrared light has a wavelength different from visible light and is not in the visible spectrum. IR sensors are a type of light sensors which function in the infrared part of the frequency spectrum.

5) Modulation and Demodulation:
Light is modulated by rapidly turning the emitter on and off, pulsing it. The resulting pulsed signal is then detected by a demodulator, a mechanism that is turned to a particular frequency of the modulation, so that it can be decoded. The detector has to sense several “on” flashes in a row in order for demodulator to determined its frequency and decode it.

6) Break Beam Sensor:
In general, any pair of compatible emitter – detector devices can be used to produce break beam sensor, including –
-	An incandescent flashlight bulb and a photocell
-	Red LEDs and visible – light. Sensitive phototransistors.
-	Infrared IR emitters and detectors.
          
 7) Shaft encoders:
Shaft encoders measure the angular rotation of a shaft on the axle. They provide position and/or velocity information about the shaft they are attached to. For e.g. the speedometer measure how fast wheels of the car are turning, and the odometer measures the number of rotations of wheels. Both speedometer and odometers use shaft encoding as the underlying sensing mechanism.

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

Theory:

This program aims at moving a robot in circle using two motors. Initially an object robot is created for class NxtRobot in public method circles(). An object ‘gear’ is created for class gear after robot. This gear is then attached to the robot using addPar() method. A certain speed is set for the gear. Using leftArc() method. A certain radius and time duration is given for the movement of the gear. This motion is given time duration using delay() method and the using exit() method, the circle is then completed.
This method is called in the main method using ‘new circlem()’. Hence we complete a circle using two motors.

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

Theory:

This program aims at creating a path following robot. An object ‘robot’ is created for class NxtRobot inside public method Pathfinder (). Create an object ‘gear’ for class gear. Create objects ls1 and ls2 for class lightSensor. Since we need two light sensors for robot (left and right) we create two objects. Attach gear and two light sensors to robot. While the condition is true, store the value of right light sensor in right value and value of left light sensor in left value. Let d, be the difference between right value and left value. If the value of d is less than -100, the gear takes left arc with radius 0.1 units. If the value of d is greater than -100 && less than 100 && right value is greater than 500, the gear moves forward. This is how we define conditions in Pathfinder () method.
In main method we call Pathfinder() method using ‘new Pathfinder();’ since we need to define some conditions like starting position and direction of the motion of the robot (which is the same for all conditions), we define it in static method. Hence we create a path following robot.

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

#include "robot-config.h"
          
void pre_auton( void );
void autonomous( void );
void usercontrol( void );

int main() {
    
    // Run the pre-autonomous function
    pre_auton();
    
    // Set up callbacks for autonomous and driver control periods.
    Competition.autonomous( autonomous );
    Competition.drivercontrol( usercontrol );
}

void pre_auton( void ){
    // All activited that occer before the competition starts
    // Example: clearing encoders, setting servo positions, ...
    
}

void autonomous( void ){
    // -----------------------------------------------------------------------
    // Insert autonomous user code here
    // -----------------------------------------------------------------------
    
}

void usercontrol( void ){
    // User control code here, inside the loop
    while(true){
        // This is the main exection loop for the user control program.
        // Each time through the loop your prgram should update motor + servo
        // values based on feedback from the joysticks.
        
        // -----------------------------------------------------------------------
        // Insert user code here. This is where you use the joystick values to
        // update your motors, etc.
        // -----------------------------------------------------------------------
        
        vex::task::sleep(20); //Sleep the tasks for a short amount of time to prevent wasted resources.
    }
}
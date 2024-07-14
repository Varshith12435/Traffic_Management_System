# Traffic_Management_System
Traffic Management System using C programming.

This is my first project as a student which is helpful to automate the blinking of traffic lights in a four way cross road without any human intervension to change the lights and giving signals to the lanes by alloting time to each lane and reduce the traffic jams.

Ther are mainly two pre defined functions used in the code.

      1.Sleep Function - sleep() from <stdlib.h> header file
  
      2.Clear Screen - system("clear") from <unistd.h> header file

This is the general structure of the 4 way traffic lane with traffic lights and signals.

                       |   |   |         
                       |   |   |        
                       |   G   |        
                       |   Y | |       
           ____________|   R V |____________
                                         
                    -->        
           -------G Y R        R Y G--------
                               <--     
           ____________         ____________
                       | ^ R   |         
                       | | Y   |         
                       |   G   |        
                       |   |   |         
                       |   |   |         

# Understanding of the Code
Consider that you are a traffic lights officer and you need to manage the traffic lights all day.

The general instructions that given to you are

1. Each lane should be shown with "Green Light" for 60 seconds and all the other lanes should be shown with "Red Light".

2. Before the starting of the green light each lane should be shown with "Yellow Light" for 5 seconds.

By using these instructions we have writen a code which will give the traffic signals in 4 way traffic lanes for 24 hours.
We are limiting this process to 24 hours for sample. You can extend it to a week, month or even a year.

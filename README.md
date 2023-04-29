# turtlesim_catch_them_all

The preview of the Turtlesim game is given below:


https://user-images.githubusercontent.com/84374586/235299511-d41b1fd3-ccc6-497c-96b5-e8fc0bbf1ed2.mp4


### For this project you will need three nodes:
- The turtlesim_node from the turtlesim package
- A custom node to control the turtle (named “turtle1”) which is already existing in the
  turtlesim_node. This node can be called turtle_controller.
- A custom node to spawn turtles on the window, and to manage which turtle is still “alive”
  (on the screen). This node can be called turtle_spawner.

### The turtle_spawner node will have to:
- Call the /spawn service to create a new turtle (choose random coordinates between 0.0
  and 11.0 for both x and y), and call the /kill service to remove a turtle from the screen.
  Both those services are already advertised by the turtlesim_node.
- Publish the list of currently alive turtles with coordinates on a topic /alive_turtles.
- Handle a service server to “catch” a turtle, which means to call the /kill service and
  remove the turtle from the array of alive turtles.
  
### The turtle_controller node will have to:
- Run a control loop (for example using a timer with a high rate) to reach a given target
  point. The first turtle on the screen “turtle1” will be the “master” turtle to control. To
  control the turtle you can subscribe to /turtle1/pose and publish to /turtle1/cmd_vel.
- The control loop will use a simplified P controller.
- Subscribe to the /alive_turtles topic to get all current turtles with coordinates. From that
  info, select a turtle to target (to catch).
- When a turtle has been caught by the master turtle, call the service /catch_turtle
  advertised by the turtle_spawner node.
  
  
### You will need to create some custom interfaces:
- Turtle.msg and TurtleArray.msg to send the list of turtles (name + coordinates) on the
  /alive_turtles topic
- CatchTurtle.srv to send the name of the turtle which was caught. The client will be the
  turtle_controller node and the server will be the turtle_spawner node.
- → you can create messages in the turtlesim_interfaces package.


### Here’s the rqt_graph with the nodes and topics:
![turtlesim](https://user-images.githubusercontent.com/84374586/235301643-3d999f49-5fa5-443c-ada4-7d3225664615.png)



### To run the game do the following

1. Clone this repository to your local machine:
```bash:
git clone https://github.com/Karthik2486/turtlesim_catch_them_all.git
```

2. Build the package using colcon build in your workspace:
```bash:
colcon build --packages-select turtlesim_catch_them_all 

```
```bash:
colcon build --packages-select turtlesim_bringup 

```
```bash:
colcon build --packages-select turtlesim_interfaces 

```

3. Source the ROS environment:
```shell
 source .bashrc
```

4. Launch the simulation:
```shell
 ros2 launch turtlesim_bringup turtlesim_catch_them_all.launch.py 

```

### Note:
"I completed this project using ROS2 Foxy, so to fully understand this project, you should have a basic understanding of ROS2."



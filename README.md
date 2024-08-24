### CS330 Computer Graphics and Visualization

<br></br>

# 8-3 Journal - Portfolio Submission

<p>

## How do I approach designing software?



- I approach designing software iteratively. I start out by figuring out the functionality that I need to create through my code. I then decompose that functionality into the behaviours that create said functionality. During this process, I typically write out pseudocode or empty placeholder functions for my program. I will then add some brief comments tying them all together. These functions are segmented and broken up by the behaviors that they perform. When I have all of the necessary functionality of my program written out, I then begin working through the functions working on the actual implementations. The implementation step is when I find out what areas of the program need to be refactored / further decomposed to better align with relevant coding standards.
 
## What new design skills has your work on the project helped you to craft?
- My function design for the milestone assignments changed a few times over the course of this semester. The end product was two reusable functions that could manage the configuration of all loaded shapes. I don't think I learned anything new this semester as far as application design. Though, I did learn a great deal about how to process and program graphical images in C++. 

## What design process did you follow for your project work?
- For the milestone assignments and the final project this semester my goal was design modular, reusable functions that could clean up the code that we were originally provided with. My primary focus with the code that I designed and added this semester was to remove the need to write duplicate code every time a shape was being configured and drawn. All of the configuration would be handled by a call to the respective configuration function, and which would then handle processing of the appropriate settings depending on the shape type. This was followed by a call to the draw function, which would then call the draw mesh function that corresponds to the selected shape type.

## How could tactics from your design approach be applied in future work?
- In my future work, I will continue to apply and refine my approach to program design. I believe that I have the principles down well, the primary thing that I am now lacking is experience in individual languages. This will come with time though, as I continue to learn and use new languages, patterns, and frameworks. I very much look forward to this process, as writing code is something I thoroughly enjoy.


## How do I approach developing programs?
- As I mentioned previously, I design and develop programs iteratively. At least personally, I have found that there is a limitation to how far into the implementations I can plan before I need to start actually writing code. This will likely improve as I gain more experience developing software. I start out by writing out a higher level outline of the program that I am working on. I determine what value and functionality the program needs to create, and then I begin breaking that functionality down into smaller units. This continues until I reach a level where it no longer seems efficient to further isolate the functionality. This is typically when I get to the level of individual behaviors. Using the outlined functions, I then start filling out the implementation. I generally start with a higher level overview, leaving comments as placeholders for the code I will later add. I then I work out through the code, adding details and functionality using what I judge to be the most logical steps first.

  
## What new development strategies did you use while working on your 3D scene?
- For this semester, I did not deviate from my normal approach to development. My goal was to provide a modular, reusable function that I could use to clean up the various configuration and draw mesh function calls. I used switch statements contained within configuration functions to achieve this functionality. The configuration settings depended on the type of shape being configured.

  
## How did iteration factor into your development?
- How I factored iteration into my development, is that I refactored my approaches to the scene configuration and design with each milestone assignment. I initially was using a function that only handled the configuration of my custom square frustum shape mesh before drawing. As we worked through the milestones, I then reworked this function to be able to handle all shape meshes. This was done because the RenderShape function was becoming quite long, and it hindered the readability of the code. The final version consolidates the various configuration values into named vectors that are then passed as a parameter to the configuration function.

  
## How has your approach to developing code evolved throughout the milestones, which led you to the project’s completion?
- My coding approach primarily evolved through the milestones in that I refactored the ways in which I was configuring and then drawing each of the shapes. Once we reached the milestone stage where we were needing to configure the materials of each shape mesh that we were drawing, I decided that it would be a better idea to handle this configuration with a separate function. This allowed me to isolate all of the related functionality for preparing a mesh to be drawn. In a way this also was providing a default set of values for each type of shape. I could then choose to change the material of a shape mesh right before the draw mesh function call if needed.

  
## How can computer science help me in reaching my goals?
- Computer science is the means by which I will be able to perform work in my future career. Understanding how computers function, and how I can use them to accomplish work is something that is incredibly valuable to me.

  
## How do computational graphics and visualizations give you new knowledge and skills that can be applied in your future educational pathway?
- I don't foresee any direct ways that I will be using computational graphics and visualizations in my career. That being said I would like to work on personal projects when I have the time that would involve using computational graphics and visualizations. These primarily would be tools that could be used to visually render physics based environments.

  
## How do computational graphics and visualizations give you new knowledge and skills that can be applied in your future professional pathway?
- There aren't any direct ways that I will be able to apply computer graphics and visualizations to my future professional pathway. That being said, I believe that learning about these complex topics, provides me with more general knowledge about how computational work can be created. I feel a higher degree of comfort going out and tackling difficult computer science topics, because I have had experience working with them in courses such as CS330. 

</p>









<br></br>

# CS330 Final Project

<p>

### Brief video demonstration of the final 3D scene:
[![CS330 - Final Scene](scene-preview.gif)](https://www.youtube.com/watch?v=bOR8THyTE8M)

Click the preview to visit the full youtube demo.



## Justifying development choices for my 3D scene. Why I chose the selected objects. Considering how I was able to program for the required functionality:
The objects that I selected to use in this project were the various component pieces that make up the greater ziggurat structure that is and was the Great Ziggurat of Ur located in modern day Iraq. This was a structure that was originally built in the early Bronze-Age by the Neo-Sumerian empire, also known as the third dynasty of Ur.
  The structure was composed of three tiered layers, each a smaller version of the previous to form somewhat of a pyramidal shape. The smaller component shapes were created using square frustum. This square frustum is what is used to create each of the stepped layers of the ziggurat. The implementation started out as a copy of the box shape that we were given, and I then adjusted each of the four edges that make up top plane of the box to be approximately 80% of the length of the four edges that make up their corresponding bottom edges / base plane. The result was a box that slopes inwards similar to a four sided pyramid, but that has a flat top instead of a point.
  I needed to use custom texture coordinates primarily on the sides of the square frustum to account for the difference in size from the base to the top. I started out using multiples of the smaller sized value of 0.4 (80% of .5) with 3.2 and 1.6 seeming to fix the skewing problems. I then reduced this value to fit within the standard sizes of 0 to 1.0, and ended up with working texture coordinate values between 0.4  to 0.16 for the sloped sides.
	I also needed to create the shape that was used for my ramps that are used to ascend to the ziggurat's peak. In my first iteration I used the provided prism shape, but noticed that it was not in the desired format for my structure. What I needed was a single prism shape, whose triangular sides were in the shape of a right triangle. The provided prism contained a second prism shape, and they both contained obtuse triangles. 
	I extracted a single triangular prism from the provided dual prism shape mesh, and used it to construct a single right triangle prism that then worked perfectly for my ramps. I primarily only needed to adjust the values for the hypotenuse's face/plane, and to then adjust the texture coordinates to remove the diagonal skewing. 


## How a user can navigate my 3D scene. Explaining how I set controls for the virtual camera of my 3D scene using different input devices:
- For standard navigation of my 3D scene, I used W, A, S, and D keys as the directional controls for camera movement. W causes the camera to move forward, S to move backwards, A to move left, and D to move right. I also added binding for Q to move the camera up, and E to move the camera downwards. 

I also added keyboard bindings for the camera to switch the perspective from the standard to either Orthographic by pressing the O button on the keyboard, or projection by pressing the P button on the keyboard. 
	- All of these keyboard mappings are assigned within the ProcessKeyboardEvents function of the ViewManager class.
  - For panning related camera functionality, I implemented controls for mouse movement, with movement into each of the directions corresponding with a directional pan of the camera. Moving the mouse left pans the camera left, right pans right, up pans the camera up, and down pans the camera down. I adjusted these values to be less sensitive, so as to make the camera panning easier to manage. This was done in the ViewManager, MousePositionCallback function, by multiplying the x and y offset values by the camera sensitivity float variable that was added, this is done each time movement is registered, and before the updated x and y offset values are used to call the ProcessMouseMovement function of the Camera object.
	- I also implemented a mouse scroll wheel binding that controls the speed at which the camera will move around the 3D environment, with scroll up increasing the movement speed, and scroll down decreasing the movement speed. This was done by modifying the camera header file, in the ProcessMouseScroll function. I added an adjust speed modifier float variable which is multiplied by the yoffset parameter before being incremented to the movementSpeed variable. This is called from the ViewManager MouseScrollCallback function whenever a scroll input is registered.  

## Explaining the custom functions in my program that are used to make my code more modular and organized. Explaining what the function I developed does and how is it reusable:
I implemented several custom functions to reduce the amount of duplicate code needed within the RenderScene function of the SceneManager class. The following functions are reusable, and are used to configure and render each of the shapes that are used in my 3D scene. 

- The first of these custom functions is my ConfigShape function. It takes four arguments, a three value vector for scaleXYZ, a three value vector for positionXYZ, a SHAPE enum value, and a three value vector for the rotationXYZ. The rotation is passed last, as I primarily only ended up needing to use it for the configuration of my ramp right triangle prism shapes. Rotation is assigned a default value of 0,0,0 within the header file declaration of the configShape method to remove the need to pass it in any other function calls. The vector values for the scaleXYZ, positionXYZ, and rotationXYZ are initially set to 0,0,0 at the start of the renderScene method. 
- A case statement determines what shape is being configured using the passed in enum Shape typeShape, this case statement assigns both the shaderTexture, and the shaderMaterial depending on the shapeType being configured. A series of conditional branches to add additional texture scaling functionality is executed following the case statement. The branches set a custom UVScaling value for the ziggurat shape, and the right triangle prism shape, for any other shapes, a default UVScale width and height of 1.0 is used. The SetUVTextureScale function is then called for the shape, followed by the SetTransformations function to finalize the shape configuration. The return value from this shape is the positionXYZ of the shape, with added values for the next shape to position slightly elevate it on the y axis so the next shape is not buried. As the updated positional value for the next shape is passed back as a new positionalXYZ vector, the positionXYZ vector set up at the beginning of the RenderScene method is not used, only the positional data that is passed back as a vector return from the configShape. The positionXYZ can be used as a 0,0,0 reference when needed in later calls. This aids reusability in that the only values that must be set before calling the configShape function is the scaling values for the shape that will be configured. The positional vector values used for the next shape are modified based on one of the prior named positional vectors returned from the configShape function.
- When the configShape function returns to the renderScene function, the DrawShape is then called using the shapeType enum value that was used to call the configShape function. This DrawShape function is simple custom function that contains a case statement which calls the correct DrawShape method using the shape mesh that corresponds to the enum shapeType value passed as an argument, and that was just configured. 
- The last custom function that I added was the AddRamp method. The AddRamp function is an additional step to the shape configuration process, used exclusively for the right triangle prism shape configuration process. The same vector arguments that are used to call the configShape method are used to call the AddRamp method, with the exception of enum Shape shapeType argument being replaced by an enum Ramp rampType value. This method begins by setting up the positioning of the new ramp using the passed in x, y, and z scale values. It then assigns the rotational value for the new ramp based on the rampType enum parameter. The options for the rampTypes are standard, reversed, and perpendicular. Standard receives a -90 y rotational value, reversed receives a 90 degree y rotational value, and perpendicular receives a 180 degree y rotational value. The adjusted arguments are then used to call the configShape function, to finish the process of configuring the ramp. The drawShape function is then called at the end of the AddRamp function call, and no value is returned to the SceneRender method.


</p>








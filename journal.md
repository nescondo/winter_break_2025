# Journal

# Day 1 - 12/13/25
<b>Session 1</b>: ~1pm
 
Began <b>The C++ Programming Lanugage (4th edition)</b> by Bjarne Stroustrup. Went through Chapter 1 until Chapter 2, stopping at <b>2.3.2</b> (classes).

Things to note include: type conversions, switch cases, const/constexpr, auto, range for, nullptr, structs, and some initialization syntax

Roughly 1hr and 55mins for reading and coding out some examples.

<b>Session 2</b>: 4:35pm

Finished up Chapter 2. Covered some code examples of classes and enumerations. Read over modularity, separate compilations (header files, definitions, etc.), namespaces, error handling, exceptions, invariants, and static assertions.

Roughly ~45 mins.

<b>Session 3</b>: 7:15pm

Read through Chapter 3 and ending at <b>3.3.2</b> (Moving Containers). Covered more about classes, specifically concrete classes, abstract classes, containers, abstract types, virtual functions, class hierarchies, copy constructor and copy assignment operators.

~45 mins.

<b>Session 4</b>: 10:00pm
Finished up Chapter 3. Covered templates, interfaces and more about moving.

~30 mins.

# Day 2 - 12/14/25
<b>Session 1</b>: 9am

Finished Chapter 4, 5 (end of Tour of C++), and 6 (start of part 2 of the book). Overviewed various containers (vectors, maps), algorithms (sort), iterators, shared/unique pointers, concurrency in Chapters 4 and 5. In Chapter 6, reviewed types and declarations to include initializer lists (why they're preferred and when not to use them, ie. with auto), auto and decltype(), scope, and basic overview of basic types to including integral, arithmetic, and user-defined types.

4hrs 10min.

<b>Session 2</b>: 3:15pm

Finished Chapter 7 which went over pointers, arrays, and references. Maybe a good idea to review references, lvalues, rvalues, and even pointers to practice.

1hr 14mins.

# Day 3 - 12/15/25
Worked on Estefany's mom's website - finished it up. Revamped a few sections and made it compatible for mobile devices. Now I just have to deploy it.

Got motivated to start learning OpenGL/graphics programming. Started the tutorial on <b>learnopengl.com</b> to create my first app. So far just learned the basics and created a window with a minor input detection (ESC on press closes window), resizing windows, creation of windows, and clearing color buffers. Also learned the general setup with GLFW, GLAD, and CMake. Pretty fun.

~8hrs?

# Day 4 - 12/16/25
Decided to work on the Flappy Bird game I wanted to make in C++. Went through a few hurdles deciding what GUI libraries to use (went thru Qt, wxWidgets, SDLC3) but ultimately ended up with SDLC3. Tried to learn through documentation alone and some videos and got through some code, but am now going through a live demo to recreate and hopefully learn about some game dev practices.

6hrs 11 min.

# Day 5 - 12/17/25
Worked pretty much all day. Decided to take a break and watch the new Fallout episode.

# Day 6 - 12/18/25
<b>Session 1</b>

Was able to deploy Mrs. Wolf's website using Vercel with a custom domain I bought from GoDaddy. Forgot to update the tab title and icon but went ahead and did that. Tested on mobile, regular resolution monitors (16:9), and ultrawide screens. A minor formatting problem with ultrawide resolutions but nothing terrible. Still has a scrollbar on the Google Form when smaller resolutions. I want to fix these problems as well as make the project structure look a bit more
professional through refactoring in the future.

[Maritza's House](https://www.maritzashouse.com)

~32 mins.

<b>Session 2</b>

With Mrs. Wolf's website done, I started following the SDL3 demo I found on YouTube a few days ago. Decided to start over to complete it on a Windows computer. Finished the initial setup and basic A/D movement. Created a repo here: [SDL3-platformer repo](https://github.com/nescondo/SDL3-platformer).

~1hr 50min.

# Day 7 - 12/19/25
Continued to work a bit on the SDL3 demo but otherwise worked all day.

~2hr

# Day 8 - 12/20/25
Went over the project code so far and had quite a bit of trouble recreating the jumping functionality.
Will continue to follow along. Also updated the repo for the sdl3-platformer.

~2hrs. 45min.

# Day 9 - 12/21/25
<b>Session 1</b>

Started a lot earlier than I usually do (7am), so I got quite a bit done. Was able to actually debug
the jumping problem. Due to the collision detection, the player is constantly in a state of colliding with
the tile under them. This was fixed with adding a threshold (temporary) as well as a grounded boolean
for the player. Got to experience quite a bit of debugging and adding visible bounding boxes.

In addition to making the jumping mechanics work, the way the state is handled between transitioning from
idle, running, and jumping states was revamped and a sliding animation was added when changing direction
in a running state.

3hrs. 15min.

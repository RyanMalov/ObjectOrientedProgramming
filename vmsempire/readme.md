# VMS EMPIRE <br/>

### Current Files and their implementation: <br/>

#### Attack.c <br/>
This file handles an attack between two pieces, whether its person or city. Uses loops if not a city and on each iteration select one piece to attack with. This file also notifies who won the battle and how many hits a piece has left. <br/>
<br/>

#### compmove.c <br/>
This file makes the move for the computer. The user selects the moves that the computer makes and the computer does the following:<br/>
1. Handle city production
2. Move computer's pieces
3. Check to see if the game is over
<br/>

#### data.c <br/>
Constant data is stored in here. <br/>

#### display.c <br/>
Displays the current map portion on screen; updates the screen. <br/>

#### edit.c <br/>
If the user is in edit mode, this is the file that handles all of those commands. <br/>

#### empire.c <br/>
Where the main program takes place. Contains the initialization code, the main command parser and the simple commands.
It is also where the player can input orders such as view the enemy map, or display the round number. You are also able to give the computer a city and where debugging commands are implemented. <br/>

#### empire.h <br/>
Defines the data structures that are implemented in the game such as directions a unit can move, information maintained about cities, types of units (Army, fighter, patrol, etc.). There are also programmed movements using negative numbers. Keeps information about each piece as well. <br/>

#### extern.h <br/>
Defines global variables. There is an array which holds all allocated objects no matter who owns them. The file also contains the global routines. <br/>

#### game.c <br/>
This file is for intitalizing, saving and restoring a game. It also will create a new map if its a new game where the map is smoothed out and cities are placed randomly. The user then selects a rank (difficulty) and the cities selected for the user and the computer are picked accordingly. There are continents and each are ranked. <br/>
When saving a game, the saved game is saved in emp_save.dat.<br/>

#### main.c <br/>
This file does the option parsing for vms empire. The parsing options include:<br/>
1. w for water
2. s for smooth
3. d for delay (in miliseconds)
4. S saveinterval <br/>

#### map.c <br/>
Finds the path for moving pieces. It also contains the routines for view_maps, real_maps, and cont_maps. <br/>

#### math.c <br/>
Does the mathematical routines needed for the game. Used to find the distance between two locations. Also finds square root of an integer but returns the floor of the square root using Newton's Method. <br/>

#### object.c <br/>
Used for manipulating objects such as finding the distance from a location to a city using straight-line distances. Also returns the amount of moves an object gets to make. Main things about this file seem to be about movement of units, or loading/unloading from various types of larger units. Removing units (or cities) also takes place in this file. <br/>

#### term.c <br/>
File contains various routines used to control the user's terminal, such as where the messages are displayed (top 3 lines of the screen) and where input is required <br/>

#### usermove.c <br/>
File is in charge of letting the user move their troops. <br/>

#### util.c <br/>
This file handles various I/O and miscellanious routines such as bug reports and cleaning up the display at the end of a game.<br/>

### Abstractions: <br/>
The high level concepts, or groups of ideas that I see at the moment are the following:<br/>
1. Generating a map/level (map.c, math.c)
2. Units
3. Movement, boh user and enemy (object.c, usermove.c, compmove.c)
4. I/O or User interface section (util.c, term.c, display.c)

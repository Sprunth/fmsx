**FM11SX User Manual**

_PLEASE NOTE: This User Manual is **NOT** yet complete and is a work in progress._

_**Also be aware, since this is a work in progress the user manual may contain errors or omissions.**   Items which are known to have incomplete or potentially erroneous information will be listed in_ **_(bold/italics within parentheses)_**_.  And of course if you find any errors or unclear info please don't hesitate to contact me._

**Table of Contents**




---


## 1. Introduction ##

What is FM11SX?  FM11SX is an saved-game editor/scout sister application for the game Football Manager 2011 (FM2011).  It is written exclusively for Mac OS X.  Created and primarily developed by Littleblue (as she is known on the various Football Manager forums).

FM11SX is a very powerful tool which can both edit game files (saved games) and can scout players and non-players (coaches, etc.) alike "in-game".  The concept of "in-game" editing is that you can alter the game after it has been started.  By comparison the editor which ships with the FM2011 can **_only_** make edits prior to the starting of a new game.  Once the game has started, there is no way to edit the game file with that editor.

The scouting feature of FM11SX is equally powerful allowing the game player to view (and search for) various hidden attributes, including two of the most important attributes out there: Current Ability and Potential Ability.  The search capabilities of the scouting feature also allow the game player to vastly exceed the searching of FM2011.

FM11SX can open both compressed and uncompressed saved games, however currently FM11SX will **ONLY** save the game as an uncompressed game file (future releases of FM11SX will incorporate saving the game compressed).  If you use the editor and have any issues with your game file you may wish to uncompress your game prior to using FM11SX (see 8. Helpful Hints).  There are no issues when merely using the Scouting feature in terms of compressed or uncompressed games.

### 1.1 System Requirements ###
FM11SX only works with Football Manager 2011 game files.  Although you don't necessarily need the game installed on the computer you are using the editor/scout, only Football Manager 2011 game files will work with the FM11SX.  Also note that some functionality of FM11SX may not work correctly without having the FM2011 game on the same computer.

To run FM11SX you need a Mac with OS 10.5 and above (including Snow Leopard).  Because game files contain massive amounts of data, FM11SX can run a little slow on less powerful computers but basically any Mac that can run Leopard or Snow Leopard can run FM11SX.

## 2. Getting Started ##
### 2.1 Launching FM11SX ###
No magic here, just double click on the FM11SX icon to start the application.  There's no required location for the application, but you may wish to keep it in your Applications folder.  The Football Manager 2011 game does not have to be running in order to use FM11SX nor does the FM2011 even have to be installed on the same computer FM11SX is on.  Please note that some functions may not work if the FM2011 game is not available (either on the same computer or network available).  Please keep in mind that the saved game file from FM2011 must to be accessible (again, either on the computer FM11SX is running on or network available).

### 2.2 Preferences ###
To access the application preferences select the _Preferences_ under the FM11SX Main Menu.  The Preferences pop up window contains three tabs (icons): General, Updates, Languages.  The details of which are as follows:

**General preferences:**

![http://lh6.ggpht.com/_CjLl-iz68fw/S0-eKQAlnII/AAAAAAAAAQ0/ygU1bNYQATo/s800/pref_window1.jpg](http://lh6.ggpht.com/_CjLl-iz68fw/S0-eKQAlnII/AAAAAAAAAQ0/ygU1bNYQATo/s800/pref_window1.jpg)

Within the General preferences are three key path locations.  Usually there is no need to change these (especially if a normal "default" installation of the game was done).  However, in order to use the full capabilities of FM11SX, the program must know the location of the lang\_db.bat file (this one is particularly important), the location of any add-on graphics, and the location of where the user saves game files.  If you have any of these in non-standard locations on your hard drive, you will need to manually find them and make the changes here.

Additionally there is a checkbox which will automatically make a backup of your game file before saving any changes you've made in the editor (a VERY good idea).  However, it is HIGHLY RECOMMENDED that you make a backup copy of any game file BEFORE you use the editor.

**Updates preferences:**

![http://lh6.ggpht.com/_CjLl-iz68fw/S0-ip6F7xNI/AAAAAAAAARE/ZfVT-1BA7tk/s800/pref%20window2.jpg](http://lh6.ggpht.com/_CjLl-iz68fw/S0-ip6F7xNI/AAAAAAAAARE/ZfVT-1BA7tk/s800/pref%20window2.jpg)

There are two checkboxes here.  One allows for FM11SX to automatically check for updates and the other will have the program automatically download any updates it finds.  Obviously you must have an Internet connection for either of these two to work.

**Languages preferences:**

![http://lh3.ggpht.com/_CjLl-iz68fw/S0-ip4TEJPI/AAAAAAAAARI/Pa4A9e5ldHk/s800/pref%20window3.jpg](http://lh3.ggpht.com/_CjLl-iz68fw/S0-ip4TEJPI/AAAAAAAAARI/Pa4A9e5ldHk/s800/pref%20window3.jpg)

Here you can select which language FM11SX will use.

### 2.3 Loading a game ###
_**Note: Although FM11SX can save a backup of your game prior to saving it within FM11SX, it is HIGHLY RECOMMENDED that you make a backup copy of any game file PRIOR to using FM11SX.**_

To load a game file into FM11SX either select Open under the File menu or click on the Open Game icon on the top apron.  Navigate the Open dialog window to select the game file you wish to load.

**Please note:** game files can either be compressed or uncompressed, however currently FM11SX will **ONLY** save the game as an uncompressed game file (future releases of FM11SX will incorporate saving the game compressed).  If you use the editor and have any issues with your game file you may wish to uncompress your game prior to using FM11SX (see 8. Helpful Hints).  There are no issues when merely using the Scouting feature in terms of compressed or uncompressed games.

### 2.4 Saving a game ###
_**Note:  FM11SX can make a backup of your saved game file prior to saving any changes you've made.  This option is available within the Preferences.  It is HIGHLY recommended you use this option.  Additionally, it is recommended that you make a backup of your game prior to even loading it into FM11SX.**_

You can save a saved game file either by clicking on the Save Game icon in the upper right corner of the main window or by selecting "Save as..." under the File menu.

**Please note:** Although game files either be compressed or uncompressed can be opened in FM11SX currently during the saving process the game can **ONLY** be saved as an uncompressed game file (future releases of FM11SX will incorporate saving the game compressed).  If you use the editor and have any issues with your game file you may wish to uncompress your game prior to using FM11SX (see 8. Helpful Hints).


## 3. Menus and Windows ##
### 3.1 Main Menu ###
The Main Menu contains most of the normal OS X functions (including About FM11SX, Preferences (these are discussed in depth in 2.2 Preferences above), File Open, Save As, Print, etc.).  The top apron (shown below) also contains an Open Game button as well as quick access to the Scout features and a Game Info button all located on the left while a Save Game button is opposite on the right.  The Game Info lists some details about the saved game file currently loaded (which leagues are playable, human managers in the game, etc.).


Within in the Main Menu are also links to donate to the project, documentation (basically a link back here), and a way to Check For Updates.  Although as noted in the Preferences section there is a means for FM11SX to automatically check for updates.  But for those who wish to check manually, here's your way.  Additionally there are some pretty cool Tools (see the 7. Tools section for more details).  There are also some links to the FMScout and sigames websites.


### 3.2 Application Window ###

The application window consists of two main parts below the top apron.  The left side is a navigation frame.  There you have Entities, Favorites, Shortlists, and Game Info from which you select and then can view various degrees of detail.  The right side is where the details of your selection are displayed.

Simply put, Entities are the _classes_ which contain similar records, for example players or coaches (known as People within the game) are an Entity which contain many people but all people share similar attributes.  Other Entities would be Clubs or Stadiums or even things like Awards, Continents and even Weather.  Actually, even more simply put, Entities are the _things_ you will look to view or edit or search for.  Favorites are Entities which you can save (more on that later) in an easy to access list.  Shortlists (much like the ones used in the FM2011 game) are lists you create in the Scout function of FM11SX.  Finally Game Info lists some details about the saved game file currently loaded.

Once a saved game file is loaded you will also see next to each Entity the number of records associated with it.  Of course typically the largest number of records will be the People Entity.  The number of records is different for every game..

When you select an Entity from the list on the left, the right side frame will then show all the records associated with the particular Entity.  In the example above, Clubs has been selected and all the football clubs in the game are listed (currently sorted by Unique ID number) on the right.

To view details of particular records within an Entity merely double click on the record within the right side frame.  For example, double clicking on Ipswich Town within the Clubs Entity will bring up the detailed view as seen below.  _**(Note the top of the detailed view contains tabs of recently viewed Entities or specific records within an Entity.  Enabling you to quickly click back to say, Clubs while still maintaining a link to Tottenham).**_



Each Entity has a variety of information available to view (and in most cases) edit.  The following is brief list.  Please note that due to screen space some items are accessed via pull down menus (note the pull down menu with the item titled "General" slightly above the Name attribute for Tottenham in the picture above).

**Entities you can edit:**

  * Awards
  * Cities
  * Clubs
  * Competitions
  * Continents
  * Currencies
  * Derbies
  * Injuries
  * Languages
  * Local Areas
  * Media
  * Nations
  * People
  * Sponsors
  * Stadiums
  * Stadium Changes
  * Weather


In some Entities there are additional views (called Inspectors) available to see and edit even more attributes.  These additional views can be accessed by the _eye_ icon.

![http://lh3.ggpht.com/_CjLl-iz68fw/S0-380JsmEI/AAAAAAAAARg/8c4NzwOla4Y/s800/eye%20icon.jpg](http://lh3.ggpht.com/_CjLl-iz68fw/S0-380JsmEI/AAAAAAAAARg/8c4NzwOla4Y/s800/eye%20icon.jpg)

Selecting this icon will open the corresponding inspector view.

A good example of this type of view is the Club Team Inspector which provides access to such items as Players, Coaches and Physio as seen below for Tottenham.



### 3.3 Scout Window ###
The Scout window contains the main scouting window to scout for Players, Staff, and Clubs.  Additionally there are pop up windows for setting the various searching criteria.  The scout tool in FM11SX is as powerful as the editor and as such contains a complex scouting engine.  Here you can scout based on a vast set of criteria including regular player attributes (like Finishing, Marking, Composure, etc.) as well as some of the hidden data (like Current Ability (CA) and Potential Ability (PA), Reputation,  Professionalism, etc.).



## 4. Editor ##
FM11SX is a full featured in-game editor.  The concept of "in-game" editing is that you can alter data within your game after it has been started.  By comparison the editor which ships with the FM2011 can ONLY make edits prior to the starting of a new game. Once the game has started (i.e., you begin to play), there is no way to edit the game file with the SI's editor.  FM11SX can open both compressed and uncompressed saved games, however currently FM11SX will ONLY save the game as an uncompressed game file.  If you have any issues with your game file you may wish to uncompress your game prior to using FM11SX (see 8. Helpful Hints).

FM11SX can edit an almost exhausted list of items and far too many to list out in this user manual.  But to name a few of the most popular: the editor can change the attributes of players and staff (including making "superman" players), can alter team finances, stadiums, and kits, you can also edit contracts, currency rates, the weather, award criteria.  As we say, the list is nearly endless.

With all this power to change your game, however, there are some risks and it is advisable that the user backs up his or her saved games. FM11SX has a setting in the preferences to enable automatic backups of your untouched game (prior to edits), but for added safety the user may wish to make a backup of their saved game prior to using it with FM11SX.


### 4.1  Player Edits ###
FM11SX groups Players and Staff within the People category since FM2011 treats both as "people".  To access a Player's data first select the Player within the People category.  You can search for a player using their first name or last name or any combination (including a partial spelling of the name).



Once you have selected the player you wish, double clicking on the player will bring up the detail views for the player selected.  There are 8 different views available: Person Data, Person Stats, Relationships, Player Data, Player Stats, Preferred Moves, Staff Data, and Contracts.  Within each detailed view are a plethora of attributes and data items which can be viewed and edited.



_**Please Note: Some attributes are actually based on a 1-100 scale although when you play the game you only see them as 1-20.  Most of the Player attributes are good examples.  Those which differ are presented in the editor both as the true attribute based on a 1-100 scale (the one you would edit) and as the 1-20 scaled (shown next to an edit box).**_


### 4.2  Staff Edits ###
Staff editing is nearly identical to Player editing.  Keep in mind both are treated as "People" by FM2011 so within FM11SX both are located in the People category.  You search for a Staff person to edit you (as with Players) by first name or last or any combination (including a partial spelling of the name).  Access the Staff person the same as Players by double clicking on the selected Staff.

The detail views of Staff people differ a bit from Players.  For Staff there are 7 different sub views (Person Data, Person Stats, Relationships, Non-Player Data, Non-Player Stats, Staff Data, and Contracts).



_**Please Note: Some attributes are actually based on a 1-100 scale although when you play the game you only see them as 1-20.  Most of the Player attributes are good examples.  Those which differ are presented in the editor both as the true attribute based on a 1-100 scale (the one you would edit) and as the 1-20 scaled (shown next to an edit box).**_

### 4.3  Club Edits ###
Access a Club's data by selecting it in the Club category.  You can search for a club using _**the club name only**_ not nicknames (example, "Manchester" not "Red Devils").  You can including a partial spelling of the name.  The Club detail views show the extensive data that can be edited.  They are grouped into 13 sub views (General, Alternate Kits, Staff, Coefficients, Finances, IDPCs, Regional Division, Relationships, Scouting Knowledges, Sponsors, Tactics, Teams, and Training).





### 4.4  Other Edits ###
All other entities from Awards to Weather can be accessed and edited in a similar fashion to Player, Staff, and Club editing.  There is of course a plethora of data within a Football Manager 2011 game file and nearly everything can be edited by FM11SX.  There is so much data, however, that it is impossible to list it all here in a user manual.  However, FM11SX has organized this surfeit of data into various entities (or categories) thus making it easier to view and edit nearly every part of a game file.

### 4.5  Future Enhancements ###
TBD


## 5. Scout ##
### 5.1 TBD ###
## 6. Game Info ##
### 6.1 TBD ###
## 7. Tools ##
FM11SX contains a couple of very handy tools.  These include the Extract Savegame Files tool, the ID Lookup tool, and the FM Date Converter.


The Extract Savegame Files is a super powerful tool which can unarchive various game files (and some subfiles).  It's purpose was primarily for littleblue to handle debugging and for most general users of FM11SX it may be a bit too technical.  However for those users who wish to explore the inner depths of a saved game file it is quite powerful indeed.  What it does is to unarchive a saved game file.  Additionally it can also unarchive the lang\_db.dat file to show all languages.

Note that it does **not** replace or erase the original saved game file and instead merely creates a new folder which contains the various files within a saved game file.

The ID Lookup tool searches data items based on the Unique ID number.

The FM Date Converter changes the dates from human readable form to Hex (and vice versa).

## 8. Helpful Hints ##
  * If you have difficulty opening your saved game in FM11SX you may want to try to uncompress your games.  To "uncompress" your games prior to loading into FM11SX uncheck the "Compress Saved Games" option in the preferences of Football Manager 2011, save the game, and then try to load it in FM11SX.


  * On some windows there are additional views (called Inspectors) available to see and edit even more detail.  These additional views can be accessed by the _eye_ icon.
![http://lh3.ggpht.com/_CjLl-iz68fw/S0-380JsmEI/AAAAAAAAARg/8c4NzwOla4Y/s800/eye%20icon.jpg](http://lh3.ggpht.com/_CjLl-iz68fw/S0-380JsmEI/AAAAAAAAARg/8c4NzwOla4Y/s800/eye%20icon.jpg)


  * Please Note: Some attributes are actually based on a 1-100 scale although when you play the game you only see them as 1-20.  Most of the Player attributes are good examples.  Those which differ are presented in the editor both as the true attribute based on a 1-100 scale (the one you would edit) and as the 1-20 scaled (shown next to an edit box).


## 9. Credits ##
First and foremost littleblue.  This project which began in the FM2005 timeframe has been her baby.  And yes, I did say "her".  As the original FM09SX had as its famous banner "I just can't believe a woman made it".  And, of course, that's why it's so good.

Various others have generously contributed code snipets, beta testing, documentation (sorry had to give a plug for my own contributions), etc.  And this project, in a sense, is **_by_** folks playing Football Manager on the Mac and **_for_** folks playing FM2011 on a Mac.  Being a pure Mac user for many years now it was great to see a few posts on the forums like these:

I would like to add that the work littleblue has put into this project has been huge (keep in mind this isn't her real job) so if you like the application and find it useful please note there is a means to donate.
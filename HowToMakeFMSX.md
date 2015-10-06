#A How To to compile FMSX between releases

In order to compile your version of FMSX from the code base you need to have the application called Xcode. It's free from Apple. You can register on their site to get your free copy of Xcode 3.

Once you have Xcode installed you will "check-out" the latest source code of FMSX and then compile it into a working FMSX program.

The following steps you have successfully installed Xcode.

1. Launch Xcode and select SCM from the top menu, then select Configure SCM Repositories.  There are plenty of better How Tos about setting up repositories on the web so I won't go into details.  But I will note that FMSX repository url is...

http://fmsx.googlecode.com/svn/trunk/

2. You can now select Repositories (again under the SCM).  You will select the FMSX repository icon on the left which will then search out and show on the right all the source code files.

3. Select the "Checkout" icon on the menu bar which will give you a Save pop up window asking you to save the file somewhere (although the button actually says "Checkout" and not "Save") and call it something, it should default the name to "FMSX".

Then it will download all the source files and place them into a folder (again the default folder name is FMSX).  At the end it will give you another pop up window asking you if you want to open the project.

Click Open

4. You can now build (compile) the source code into a working program.  To do so, just select under the menu item Build, Build (yes, you are selecting "Build" which is under the "Build" menu item.  You can alternatively select "Build and Run" which will also launch FMSX.

5. The working copy of FMSX is now within a folder called Debug inside the Build folder inside the FMSX folder.  The actual path is FMSX/Build/Debug/

The file in there is your FMSX application (and should have the pretty FMSX icon you know and love).  You can copy this to your applications folder and start using FMSX.

Congratulations on becoming a software developer (well, almost).
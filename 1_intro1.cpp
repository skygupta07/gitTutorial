/*
--------->GIT
to track history of changes made in projects
to collaborate

---------> GITHUB
website that allows developers to store and manage their code using git..
-> github ki folder is repository
-> .md means mark down
-> commit karna matlab change final karna
-> Readme mai changes karna is like html likhna
-> git --version  to know the installed version of git in your machine
-> ~ tilde sign represents the current directory or folder


step1.) configuring git 
git config --global user.name "skygupta07"
git config --global user.email "mailfromakashgupta@gmail.com"
git config --list       => it lists all the git user collabed with the current machine


-----------
-> although we can write all our code in the terminal itself but since we want to 
collab our coding working with the git so we will use the code editor i.e. vs code

-> local -> means file saved locally on pc
-> remote -> on github => github ki repos are remote..

-> git clone <https wala link>    vs code ke terminal mai jaake karna hai...
clone means creating a repository or folder on our local machine

-> terminal mai % se just pehle hume location batata hai ki hum abhi kaha hai...
-> cd means change directory...
-> tab used for autocompletion of directories name...
-> ls means list files 
-> ls -a means list all files that git is tracking (helpful to check whether our file is
being tracked simultaneously on git also.. => .git will be there indicating that the current
file is being tracked by git)
 
-> U means untracked file (or newly created file).....

-----------     -----   ------

-> git status => displays the state of the code
M represents that the file has been modified

there can be possible four status of the file 
1. untracked -> new files that git doesn't track
2. modified -> changed 
3. staged -> file is ready to be commited
4. unmodified -> unchanged

-----------       ====     -------


there are two stages   
1. add -> adds new or changed file from your working directory to the git staging area
git add <file-name>
git add .          -> issey saare file aa jaenge...

2. commit -> it is the record of change
git commit -m "some message"

----- -----       -----

3. push-> upload local repo content to remote repo
git push origin main

origin-> git ki main folder ho gayi
main -> bydefault the first branch where code gets commited

=> cd.. se ek directory back ho jaoge...
=> mkdir    to create a new directory urf folder

---------
4. git remote add origin <link>
5. git remote -v      =>(to verify remote)
6. git branch      => (to check branch)
7. git branch -M main   (to rename branch)
8. git push origin main
9. git push -u origin main    => when you are working on same file then no need to write
origin main again and again instead write only git push

===> push operation

let's say mere ko puri folder upload karni thi to mene terminal mai jaake current directory
ko desired folder pe set kiya then 
1.git init
2. go to github make a repo, copy its https wala url
3. git remote add origin <link>
4. git add .
5. git commit -m "message of what changes you performed"
6. git push origin BranchMain
add commit then push

-----------   ------



*/
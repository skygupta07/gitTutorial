/*
workflow for local git....
1. create github repo
2. clone it on local pc
3. make changes
4. git add
5. git commit
6. git push


------------------
if there are multiple people working on same project with different modules assigned to
them then you create git branches
----branch commands-------
1. git branch    => to check branch
2. git branch -M main       => to rename branch

3. git branch -d <branchname>           (to delete branch) => but you can't delete 
the branch in which you are currently lying....(#kalidad rule)


4. git checkout -b <new-branch-name>    (to create new branch)
5. git checkout <branchname>      =>to navigate through branches

----------   merging code-----------
=> two ways to merge your code 
way 1 -> directly from command line (vs code)
way2 -> create a PR(pull request)

pull request-> it lets you tell others about changes you have pushed to a branch in a 
repository on github..

pull command -> git pull origin main
used to fetch and download content from a remote repo and immediately update the local repo
to match that content....

to see difference => git diff <jis branch se compare karna hai uska naam> 


------resolving merge conflicts-------
an event that takes place when git is unable to automatically resolve differences in
code between two commits

---fork------
-> a fork is a new repository that shares code and visibility settings with the original
upstream repository
-> fork is a rough copy

=> terminal mai aapka directory mai repo or folder pai pe hi pointer atka rehta hai 
tabhi we need to add git add .    so that we could add each file of the current working 
directory....









































*/
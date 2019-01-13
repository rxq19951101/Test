# Test


由于经常忘记git操作， 所以这个文档用来记录如何操作git

首先是如何进行git push
修改了文件后 先需要将文件加到git 的远程仓库中

第一 git clone 仓库地址
git add .// 将本地修改的所有文件加入到云端
git commit -m ""// 提交到云端，并且进行注释，这里必须-m加注释，否则我也不知道怎么弄
git push origin master //提交到想要的分支

###有时候云端的文件内容已经被我修改， 然后我又不想破坏云端或者本机的文件（不想合并）  这个时候可以创建另外一个分支
git branch [name]  //创建分支

git push -u origin [name] // 然后将本地文件全部push到这个分支


至于pull 就是
git pull 就会将本地与服务器端同步


下面是github 常用的命令：
git branch 查看本地所有分支\
git status 查看当前状态\
git commit 提交\
git branch -a 查看所有的分支\
git branch -r 查看远程所有分支\
git commit -am "init" 提交并且加注释\
git remote add origin git@192.168.1.119:ndshowgit\
push origin master 将文件给推到服务器上\
git remote show origin 显示远程库origin里的资源\
git push origin master:develop\
git push origin master:hb-dev 将本地库与服务器上的库进行关联\
git checkout --track origin/dev 切换到远程dev分支\
git branch -D master develop 删除本地库develop\
git checkout -b dev 建立一个新的本地分支dev\
git merge origin/dev 将分支dev与当前分支进行合并\
git checkout dev 切换到本地dev分支\
git remote show 查看远程库\
git add .git rm 文件名(包括路径) 从git中删除指定文件* git clone git://github.com/schacon/grit.git 从服务器上将代码给拉下来\
git config --list 看所有用户\
git ls-files 看已经被提交的\
git rm [file name] 删除一个文件\
git commit -a 提交当前repos的所有的改变\
git add [file name] 添加一个文件到\
git indexgit commit -v 当你用－v参数的时候可以看commit的差异\
git commit -m "This is the message describing the commit" 添加commit信息\
git commit -a -a是代表add，把所有的change加到git index里然后再commit\
git commit -a -v 一般提交命令\
git log 看你commit的日志\
git diff 查看尚未暂存的更新\
git rm a.a 移除文件(从暂存区和工作区中删除)\
git rm --cached a.a 移除文件(只从暂存区中删除)\
git commit -m "remove" 移除文件(从Git中删除)\
git rm -f a.a 强行移除修改后文件(从暂存区和工作区中删除)\
git diff --cached 或 $ git diff --staged 查看尚未提交的更新\
git stash push 将文件给push到一个临时空间中\
git stash pop 将文件从临时空间pop下来\

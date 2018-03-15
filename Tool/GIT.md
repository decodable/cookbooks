# Commands
## Local
```
git config --global push.default simple
git config --local user.name "Mi Lix"
git config --local user.email test@milix.com
git commit -a -m "new examples"
git commit --amend
git checkout <commit> <file>
git cherry-pick -e <commit>
```

## Remote
```
git clone https://github.com/trymilix/cookbook.git
git pull  
git push
git remote -v
git remote set-url
git remote set-url origin git@github.com:yakow/cookbooks.git
```

## Branch
```
git branch -a -v
git branch -r -v
git branch {new branch name}
git checkout {branch to switch}
```

# Reference
[Git in Bash](https://git-scm.com/book/en/v2/Git-in-Other-Environments-Git-in-Bash)
[Git push requires username and password](http://stackoverflow.com/questions/6565357/git-push-requires-username-and-password)


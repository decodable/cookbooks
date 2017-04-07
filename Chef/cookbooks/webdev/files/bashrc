# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

if [ -f ~/.git-completion.bash ]; then
  . ~/.git-completion.bash
fi

if [ -f ~/.git-prompt.sh ]; then
  . ~/.git-prompt.sh
fi

shopt -s histappend
export PROMPT_COMMAND='history -a'

export GIT_PS1_SHOWDIRTYSTATE=1
export PS1='\W$(__git_ps1 " (%s)")\$ '



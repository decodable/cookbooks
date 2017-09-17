# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

if [ -f ~/.bash/.git-completion.bash ]; then
  . ~/.bash/.git-completion.bash
fi

if [ -f ~/.bash/.git-prompt.sh ]; then
  . ~/.bash/.git-prompt.sh
fi

if [ -f ~/.bash/.start_ssh_agent.sh ]; then
  . ~/.bash/.start_ssh_agent.sh
fi

shopt -s histappend
export PROMPT_COMMAND='history -a'

export GIT_PS1_SHOWDIRTYSTATE=1
export PS1='\W$(__git_ps1 " (%s)")\$ '




# .screenrc
```
##
## look and feel for the bottom two lines.
##
caption    always        "%{+b rk}%H%{gk} |%c %{yk}%d.%m.%Y | %72=Load: %l %{wk}"
hardstatus alwayslastline "%?%{yk}%-Lw%?%{wb}%n*%f %t%?(%u)%?%?%{yk}%+Lw%?"

vbell  off
screen -t dev
screen -t remote
screen -t tmp
```

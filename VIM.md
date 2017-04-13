# Install
```
apt-get install vim
apt-get install exuberant-ctags
```

# Basic
## File
| Commands | Comments |
| ------- | ---- |
| :e {file} | open a file |
| :e | reopen |
| :w | save |
| :w {file} | save as | 
| :wq | save and quite |
| :q | quit current buffer |
| :qa | quit all |
| :q! | quit without save |
| :b[N] | go to buffer N |
| :bn | go to next buffer N |

## Move
| Commands | Comments |
| ------- | ---- |
| h j k l | move |
| ^ b w $ | move faster |
| ^u | scroll up |
| ^d | scroll down |
| G | goto end of file |
| :{lineno} | goto line |

## Search
| Commands | Comments |
| ------- | ---- |
| f{char} | find next char in the line |
| F{char} | find previous char in the line |
| *       | search word |
| /{pattern} | search forward |
| ?{pattern} | search backword |
| % | jump to the match like {} |

## Edit
| Commands | Comments |
| ------- | ---- |
| i | insert |
| a | append |
| A | Append at the end of line |
| o | new line below |
| O | new line upper |
| r | replace one character |
| R | enter replace mode |
| s | delete one character and edit |
| S | delete one line and edit |
| x | delete one character |
| dd | delete one line |
| dw | delete one word |
| d$ | delete one word |
| ^n | complete word with next matching |
| ^p | complete word with previous matching |
| J | join lines |
| = | auto format |
| > | indent |
| < | unindent |

### Undo / Redo
| Commands | Comments |
| ------- | ---- |
| u | undo |
| ^r | redo |

### Copy / Paste 
| Commands | Comments |
| ------- | ---- |
| yy | copy (yank) one line |
| yw | copy (yank) one word |
| p | insert after |
| P | insert before |

### Select
| Commands | Comments |
| ------- | ---- |
| v | select character |
| V | select line |
| ^v | select block |

## Window
| Commands | Comments |
| ------- | ---- |
| :sp | split |
| :vs | split vertically |

# Plugins

1. [minibufexpl](http://www.vim.org/scripts/script.php?script_id=159) Elegant buffer explorer - takes very little screen space 
2. [Tagbar](http://www.vim.org/scripts/script.php?script_id=3465) Display tags of the current file ordered by scope

# Tips

1. [Easy edit of files in the same directory](http://vim.wikia.com/wiki/Easy_edit_of_files_in_the_same_directory)
2. [Encryption](http://vim.wikia.com/wiki/Encryption)
3. [Toggle auto-indenting for code paste](http://vim.wikia.com/wiki/Toggle_auto-indenting_for_code_paste)
4. [Writing a valid statusline](http://vim.wikia.com/wiki/Writing_a_valid_statusline)
5. [Jumping to previously visited locations](http://vim.wikia.com/wiki/Jumping_to_previously_visited_locations)
6. [Using marks](http://vim.wikia.com/wiki/Using_marks)
7. [Using Exuberant Ctags for Drupal](https://www.koumbit.org/en/content/using-exuberant-ctags-drupal)

# References
1. [Graphical vi-vim Cheat Sheet and Tutorial](http://www.viemu.com/a_vi_vim_graphical_cheat_sheet_tutorial.html)
2. [Vim as an IDE](https://github.com/jez/vim-as-an-ide)


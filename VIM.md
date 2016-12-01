Exuberant ctags
```
apt-get install exuberant-ctags
```

[Tagbar : Display tags of the current file ordered by scope](http://www.vim.org/scripts/script.php?script_id=3465)
```
curl http://www.vim.org/scripts/download_script.php?src_id=21362 > tagbar.vmb
vim tagbar.vmb 
:so % 
:q 
```

edit ~/.vimrc
```
nmap <F8> :TagbarToggle<CR> 
```

tags for Drupal
```
ctags --langmap=php:.engine.inc.module.theme.install.php --php-kinds=cdfi --languages=php --recurse
```

[Encryption](http://vim.wikia.com/wiki/Encryption)
```
:X
```

```
:set paste
:set nopaste
```

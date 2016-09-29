
[Tagbar : Display tags of the current file ordered by scope](http://www.vim.org/scripts/script.php?script_id=3465)
```
curl -Ss http://www.vim.org/scripts/download_script.php?src_id=21362 > tagbar.vmb
vim tagbar.vba 
:so % 
:q 
```

edit ~/.vimrc
```
nmap <F8> :TagbarToggle<CR> 
```

tags
```
ctags-exuberant -f php.tags --languages=PHP -R
```

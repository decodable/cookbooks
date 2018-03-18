" http://vim.wikia.com/wiki/Easy_edit_of_files_in_the_same_directory
" Edit another file in the same directory as the current file
" uses expression to extract path from current file's path
" (thanks Douglas Potts)
if has("unix")
  map ,e :e <C-R>=expand("%:p:h") . '/'<CR>
else
  map ,e :e <C-R>=expand("%:p:h") . '\'<CR>
endif

nmap <F8> :TagbarToggle<CR>

" line number
set nu
" auto indent
set autoindent
set smartindent
set cindent
set cinoptions=g0

" Highly recommended to set tab keys to 2 spaces
set tabstop=2
set shiftwidth=2
set et    " expend tab

syntax enable
filetype on
filetype plugin on
filetype plugin indent on

set ignorecase
set smartcase

" Encodeing for Japanese
source $HOME/.vim/vimrc_encoding

" status line
:set statusline=%F%m%r%h%w\ [FORMAT=%{&ff}]\ [TYPE=%Y]\ [ASCII=\%03.3b]\ [HEX=\%02.2B]\ [POS=%04l,%04v][%p%%]\ [LEN=%L]
:set laststatus=2


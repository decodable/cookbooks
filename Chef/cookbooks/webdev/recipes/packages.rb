packages = ['vim', 'screen', 'git', 'lynx', 'exuberant-ctags', 'nodejs']

package packages do
  action :install
end

user_name = 'vagrant'

remote_directory "/home/vagrant/.vim/" do
  source 'vim'
  owner user_name
  group user_name
  mode '0700'
  action :create
end

hidden_files = ['gitconfig', 'git-completion.bash', 'git-prompt.sh', 'vimrc', 'vimrc', 'screenrc', 'bashrc']
hidden_files.each do |hidden_file|
  cookbook_file "/home/vagrant/.#{hidden_file}" do
    source hidden_file
    owner user_name
    group user_name
    mode '0600'
    action :create
  end
end


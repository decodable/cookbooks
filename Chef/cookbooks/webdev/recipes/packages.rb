packages = ['vim', 'screen', 'git', 'lynx', 'exuberant-ctags', 'nodejs', 'npm', 'python-pip', 'ruby', 'ruby-dev']

package packages do
  action :upgrade
end

user_name = 'vagrant'

remote_directory "/home/vagrant/.vim/" do
  source 'vim'
  owner user_name
  group user_name
  mode '0700'
  action :create
end

hidden_files = ['gitconfig', 'git-completion.bash', 'git-prompt.sh', 'vimrc', 'screenrc', 'bashrc']
hidden_files.each do |hidden_file|
  cookbook_file "/home/vagrant/.#{hidden_file}" do
    source hidden_file
    owner user_name
    group user_name
    mode '0600'
    action :create
  end
end

link '/usr/bin/node' do
  to '/usr/bin/nodejs'
end

execute 'install Grip' do
  command 'pip install grip'
  not_if 'which grip'
end

gem_package 'bundler'
gem_package 'jekyll'


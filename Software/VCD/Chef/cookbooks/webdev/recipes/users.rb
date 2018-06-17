# openssl passwd -1 "theplaintextpassword"
password_hash = '$1$/O/Ajzwy$56Pdzck8AlNzZ9GxWPplj.'

users = ['vagrant', 'aliang']

remote_directory "/etc/" do
  source 'etc'
  action :create	
end

user 'root' do
  password password_hash
  shell '/bin/bash'
end

users.each do |user_name|
  user "create user #{user_name}" do
    action :create
    username user_name
    password password_hash 
    shell '/bin/bash'
	manage_home true
  end
  
  group 'add #{user_name} to docker' do
    action :modify
	group_name 'docker'
    members user_name
    append true
  end
  
  group 'add #{user_name} to sudo' do
    action :modify
	group_name 'sudo'
    members user_name
    append true
  end
end


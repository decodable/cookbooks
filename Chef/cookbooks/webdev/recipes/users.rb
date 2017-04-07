# openssl passwd -1 "theplaintextpassword"
password_hash = '$1$/O/Ajzwy$56Pdzck8AlNzZ9GxWPplj.'

users = ['root', 'vagrant']

users.each do |user_name|
  user user_name do
    username user_name
    password password_hash
    action :modify
  end
end


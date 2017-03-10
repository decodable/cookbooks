```
chef generate cookbook cookbooks/{cookbook}
chef generate template cookbooks/{cookbook}/ {file}
```

```
chef-client --local-mode -Fmin -W --runlist 'recipe[{cookbook}::{recipe}]'
chef-client --local-mode --runlist 'recipe[{cookbook}::{recipe}]'
```

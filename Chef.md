```
chef generate cookbook cookbooks/{cookbook}
chef generate template cookbooks/{cookbook}/ {file}
```

-W, --why-run                    Enable whyrun mode
```
chef-client --local-mode -Fmin -W --runlist 'recipe[{cookbook}::{recipe}]'
```


```
chef-client --local-mode --runlist 'recipe[{cookbook}::{recipe}]'
```

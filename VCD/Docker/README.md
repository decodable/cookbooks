```
# Images
docker pull ubuntu:latest
docker images
docker rmi
docker history
docker build -t name .

# container
docker ps -a
docker inspect
docker run --rm -ti -v /data:/data:rw -p 3002:3002 3107e358f41c /bin/bash
docker create
docker start
docker exec -ti 3107e358f41c /bin/bash
docker stop
docker kill
docker rm
docker pause
docker unpause
docker logs
docker stats
docker top
docker diff
```

# References
1. [Understanding Docker "Container Host" vs. "Container OS" for Linux and Windows Containers](http://www.floydhilton.com/docker/2017/03/31/Docker-ContainerHost-vs-ContainerOS-Linux-Windows.html)
2. [Docker Base Image OS Size Comparison](https://www.brianchristner.io/docker-image-base-os-size-comparison/)
3. [Push a Docker Image to a Personal Repository](http://karlcode.owtelse.com/blog/2017/01/25/push-a-docker-image-to-personal-repository/)
4. [Named Volumes in Dockerfile](https://github.com/moby/moby/issues/30647)

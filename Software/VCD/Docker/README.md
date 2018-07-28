# Images
```
docker pull ubuntu:16.04
docker images
docker rmi
docker history
docker build -t name .
```
My Images:
1. [ubuntu_cpp_dev](https://hub.docker.com/r/verigy/ubuntu_cpp_dev/)


# Container
Container is an instance of image.
```
docker ps -a
docker inspect
docker run --rm -it -v /data:/data:rw -p 3002:3002 3107e358f41c /bin/bash
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

# Images <=> Container
1. docker build - build image from Docker file.
2. docker commit - commit the change in a container to image.
3. docker save - save an image to a local file - tarball.
4. docker load - load an image from a local file.
5. docker pull - load in image from a repository - docker hub
6. docker push - save an image to a repository.

it is better to use Dockerfiles to manage images in a documented and maintainable way. 

# References
1. [Understanding Docker "Container Host" vs. "Container OS" for Linux and Windows Containers](http://www.floydhilton.com/docker/2017/03/31/Docker-ContainerHost-vs-ContainerOS-Linux-Windows.html)
2. [Docker Base Image OS Size Comparison](https://www.brianchristner.io/docker-image-base-os-size-comparison/)
3. [Push a Docker Image to a Personal Repository](http://karlcode.owtelse.com/blog/2017/01/25/push-a-docker-image-to-personal-repository/)
4. [Named Volumes in Dockerfile](https://github.com/moby/moby/issues/30647)
5. [Docker development best practices](https://docs.docker.com/develop/dev-best-practices/)
6. [Using Docker and Docker Compose for Local Development and Small Deployments](https://www.codementor.io/jquacinella/docker-and-docker-compose-for-local-development-and-small-deployments-ph4p434gb)
7. [An Introduction to Docker for Embedded Developers](https://blog.feabhas.com/2017/09/introduction-docker-embedded-developers-part-1-getting-started/)
8. Architecting Containers [Part1](https://rhelblog.redhat.com/2015/07/29/architecting-containers-part-1-user-space-vs-kernel-space/) [Part2](https://rhelblog.redhat.com/2015/09/17/architecting-containers-part-2-why-the-user-space-matters-2/) [Part3](https://rhelblog.redhat.com/2015/11/10/architecting-containers-part-3-how-the-user-space-affects-your-application/)
9. [Docker Container’s Filesystem Demystified](https://medium.com/@nagarwal/docker-containers-filesystem-demystified-b6ed8112a04a)

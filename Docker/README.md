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


私人定制

Replace all 'Menu' with '目录'

post.hbs
1. delete section {{#author}}
2. delete section class="share"
3. delete section class="read-next"
4. section post-meta: add updated_at right after date attribute

home.hbs
1. cp index.hbs home.hbs
2. replace "loop" with "list"

partials/list.hbs
1. cp loop.hbs list.hbs
2.

# Development
1. [Working with Ghost](https://docs.ghost.org/v1.0.0/docs/working-with-ghost)
2. [Using Docker and Yarn for Development](https://medium.com/@shemleong/using-docker-and-yarn-for-development-2546e567ad2)

# Local
1. [Local Install](https://docs.ghost.org/v1.0.0/docs/install-local)
2. [Ghost on Docker](https://hub.docker.com/_/ghost/)

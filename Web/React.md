
# How React Works
1. property: Parent component build properties of child components. Update child components only when properties change. Properties are immuatable, one component cannot change it's own propterty.
2. state: State is internal and changable. State change will also trigger render of component.
3. Model change trigger the change of properties of root component, which will further change properties of child components.
4. State is intialized when properties change when component was is created.
5. State update interactively on events.
6. Model also update on events.

## References
1. [React Demystified](http://blog.reverberate.org/2014/02/react-demystified.html)
2. [props vs state](https://github.com/uberVU/react-guide/blob/master/props-vs-state.md)

# Immutability
1. [Pros and Cons of using immutability with React.js](http://reactkungfu.com/2015/08/pros-and-cons-of-using-immutability-with-react-js/)
2. [Optimizing Performance](https://facebook.github.io/react/docs/optimizing-performance.html)
3. [Immutable JS: worth the cost?](https://medium.com/@AlexFaunt/immutablejs-worth-the-price-66391b8742d4#.s18x038ye)
4. [Does immutability hurt performance in JavaScript?](http://softwareengineering.stackexchange.com/questions/304574/does-immutability-hurt-performance-in-javascript)

# Routing
1. [Authentication routing in a React-Flux application](http://wmyers.github.io/technical/react-flux/Authentication-routing-in-a-React-Flux-application/)

# Redux
1. [Getting Started With React Redux: An Intro](https://www.codementor.io/reactjs/tutorial/intro-to-react-redux-pros)
2. [React, Redux and Immutable.js: Ingredients for Efficient Web Applications](https://www.toptal.com/react/react-redux-and-immutablejs)
3. [Full-Stack Redux Tutorial](https://teropa.info/blog/2015/09/10/full-stack-redux-tutorial.html)
4. [Managing your React state with Redux](https://onsen.io/blog/react-state-management-redux-store/)
5. [A guide to React Native with Redux and Immutable.js](https://medium.com/the-react-native-log/a-guide-to-react-native-with-redux-and-immutable-js-65a2b795cb6f#.kic1k4ysi)
6. [A Guide For Building A React Redux CRUD App](https://medium.com/@rajaraodv/a-guide-for-building-a-react-redux-crud-app-7fe0b8943d0f#.6ohb8af7b)
7. [Idiomatic Redux: Why use action creators?](https://github.com/acdlite/redux-actions)
8. [redux-saga](https://survivejs.com/blog/redux-saga-interview/)

# References
1. [Tutorial: Intro To React](https://facebook.github.io/react/tutorial/tutorial.html)
3. [Reconciliation](https://facebook.github.io/react/docs/reconciliation.html)
4. [9 things every React.js beginner should know](https://camjackson.net/post/9-things-every-reactjs-beginner-should-know)
5. [React’s diff algorithm](https://calendar.perfplanet.com/2013/diff/)


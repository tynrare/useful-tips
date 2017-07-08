
## JS

### What isn't "object" in JS
- Values of type string, number, and Boolean are not objects, and though the language doesn’t complain if you try to set new properties on them, it doesn’t actually store those properties. The values are immutable and cannot be changed. Eloquent *JavaScript, Written by Marijn Haverbeke*

### Была проблема с перерисовкой изображений на css, почему-то спасло: 

```css
@keyframes test {0% { opacity: 1; } 50% { opacity: 1; } 100% {opacity: 1}}
```

### How to inherit in createjs

```js
(function (window) {
 "use strict";

 function Object(data) {
 }
 var p = createjs.extend(Object, createjs.Container);
 
 p.prop = 123; //public field
 var prop2 = 123; //static private field
 
 window.Particle = createjs.promote(Object, "Container");

}(window));
```

## C/C++

## VIM

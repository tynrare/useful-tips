
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

 function Particle(data) {
}
var p = createjs.extend(Particle, createjs.Container);
 window.Particle = createjs.promote(Particle, "Container");

}(window));
```

## C/C++

## VIM

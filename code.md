
## JS

### What isn't "object" in JS
- Values of type string, number, and Boolean are not objects, and though the language doesn’t complain if you try to set new properties on them, it doesn’t actually store those properties. The values are immutable and cannot be changed. Eloquent *JavaScript, Written by Marijn Haverbeke*

### How to round values

Thanks [Jack Moore](http://www.jacklmoore.com/notes/rounding-in-javascript/)
```javascript
function round(value, decimals) {
  return Number(Math.round(value+'e'+decimals)+'e-'+decimals);
}

round(1.005, 2); // 1.01
```

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

### How to use "ADD" blendMode on transparent background in pixi.js

I use additional TextureRenderer on original texture to avoid artifacts

```js
var brt = new PIXI.BaseRenderTexture(canvas.width, canvas.height, PIXI.SCALE_MODES.LINEAR, 1);
var rt = new PIXI.RenderTexture(brt);
var sprite = new PIXI.Sprite(rt);
sprite.alpha = 0.7; //has to be half-transparent
sprite.blendMode = PIXI.BLEND_MODES.ADD;
stage.addChild(sprite);
```

and somewhere in update

```js
Renderer.render(textureToBlend, rt);
```

### Why context.drawImage doesn't work in safari

 - Safari doesn't draw image if drawing zone bigger than image
 
 ```js
 ctx.drawImage(img, 0, 0, 101, 101, ...) // Will fail with 100x100 image
 ```

## C/C++

## VIM

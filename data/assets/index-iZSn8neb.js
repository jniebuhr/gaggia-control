(function(){const e=document.createElement("link").relList;if(e&&e.supports&&e.supports("modulepreload"))return;for(const i of document.querySelectorAll('link[rel="modulepreload"]'))r(i);new MutationObserver(i=>{for(const o of i)if(o.type==="childList")for(const c of o.addedNodes)c.tagName==="LINK"&&c.rel==="modulepreload"&&r(c)}).observe(document,{childList:!0,subtree:!0});function n(i){const o={};return i.integrity&&(o.integrity=i.integrity),i.referrerPolicy&&(o.referrerPolicy=i.referrerPolicy),i.crossOrigin==="use-credentials"?o.credentials="include":i.crossOrigin==="anonymous"?o.credentials="omit":o.credentials="same-origin",o}function r(i){if(i.ep)return;i.ep=!0;const o=n(i);fetch(i.href,o)}})();var Y,v,Ke,Ge,M,De,Ve,me,Ce,ge,ye,Ze,J={},Je=[],mt=/acit|ex(?:s|g|n|p|$)|rph|grid|ows|mnc|ntw|ine[ch]|zoo|^ord|itera/i,fe=Array.isArray;function U(t,e){for(var n in e)t[n]=e[n];return t}function Qe(t){t&&t.parentNode&&t.parentNode.removeChild(t)}function A(t,e,n){var r,i,o,c={};for(o in e)o=="key"?r=e[o]:o=="ref"?i=e[o]:c[o]=e[o];if(arguments.length>2&&(c.children=arguments.length>3?Y.call(arguments,2):n),typeof t=="function"&&t.defaultProps!=null)for(o in t.defaultProps)c[o]===void 0&&(c[o]=t.defaultProps[o]);return K(t,c,r,i,null)}function K(t,e,n,r,i){var o={type:t,props:e,key:n,ref:r,__k:null,__:null,__b:0,__e:null,__d:void 0,__c:null,constructor:void 0,__v:i??++Ke,__i:-1,__u:0};return i==null&&v.vnode!=null&&v.vnode(o),o}function T(t){return t.children}function G(t,e){this.props=t,this.context=e}function R(t,e){if(e==null)return t.__?R(t.__,t.__i+1):null;for(var n;e<t.__k.length;e++)if((n=t.__k[e])!=null&&n.__e!=null)return n.__e;return typeof t.type=="function"?R(t):null}function Ye(t){var e,n;if((t=t.__)!=null&&t.__c!=null){for(t.__e=t.__c.base=null,e=0;e<t.__k.length;e++)if((n=t.__k[e])!=null&&n.__e!=null){t.__e=t.__c.base=n.__e;break}return Ye(t)}}function be(t){(!t.__d&&(t.__d=!0)&&M.push(t)&&!ce.__r++||De!==v.debounceRendering)&&((De=v.debounceRendering)||Ve)(ce)}function ce(){var t,e,n,r,i,o,c,_;for(M.sort(me);t=M.shift();)t.__d&&(e=M.length,r=void 0,o=(i=(n=t).__v).__e,c=[],_=[],n.__P&&((r=U({},i)).__v=i.__v+1,v.vnode&&v.vnode(r),Se(n.__P,r,i,n.__n,n.__P.namespaceURI,32&i.__u?[o]:null,c,o??R(i),!!(32&i.__u),_),r.__v=i.__v,r.__.__k[r.__i]=r,nt(c,r,_),r.__e!=o&&Ye(r)),M.length>e&&M.sort(me));ce.__r=0}function Xe(t,e,n,r,i,o,c,_,u,l,d){var s,h,f,p,S,x=r&&r.__k||Je,m=e.length;for(n.__d=u,gt(n,e,x),u=n.__d,s=0;s<m;s++)(f=n.__k[s])!=null&&(h=f.__i===-1?J:x[f.__i]||J,f.__i=s,Se(t,f,h,i,o,c,_,u,l,d),p=f.__e,f.ref&&h.ref!=f.ref&&(h.ref&&ke(h.ref,null,f),d.push(f.ref,f.__c||p,f)),S==null&&p!=null&&(S=p),65536&f.__u||h.__k===f.__k?u=et(f,u,t):typeof f.type=="function"&&f.__d!==void 0?u=f.__d:p&&(u=p.nextSibling),f.__d=void 0,f.__u&=-196609);n.__d=u,n.__e=S}function gt(t,e,n){var r,i,o,c,_,u=e.length,l=n.length,d=l,s=0;for(t.__k=[],r=0;r<u;r++)(i=e[r])!=null&&typeof i!="boolean"&&typeof i!="function"?(c=r+s,(i=t.__k[r]=typeof i=="string"||typeof i=="number"||typeof i=="bigint"||i.constructor==String?K(null,i,null,null,null):fe(i)?K(T,{children:i},null,null,null):i.constructor===void 0&&i.__b>0?K(i.type,i.props,i.key,i.ref?i.ref:null,i.__v):i).__=t,i.__b=t.__b+1,o=null,(_=i.__i=yt(i,n,c,d))!==-1&&(d--,(o=n[_])&&(o.__u|=131072)),o==null||o.__v===null?(_==-1&&s--,typeof i.type!="function"&&(i.__u|=65536)):_!==c&&(_==c-1?s--:_==c+1?s++:(_>c?s--:s++,i.__u|=65536))):i=t.__k[r]=null;if(d)for(r=0;r<l;r++)(o=n[r])!=null&&!(131072&o.__u)&&(o.__e==t.__d&&(t.__d=R(o)),rt(o,o))}function et(t,e,n){var r,i;if(typeof t.type=="function"){for(r=t.__k,i=0;r&&i<r.length;i++)r[i]&&(r[i].__=t,e=et(r[i],e,n));return e}t.__e!=e&&(e&&t.type&&!n.contains(e)&&(e=R(t)),n.insertBefore(t.__e,e||null),e=t.__e);do e=e&&e.nextSibling;while(e!=null&&e.nodeType===8);return e}function tt(t,e){return e=e||[],t==null||typeof t=="boolean"||(fe(t)?t.some(function(n){tt(n,e)}):e.push(t)),e}function yt(t,e,n,r){var i=t.key,o=t.type,c=n-1,_=n+1,u=e[n];if(u===null||u&&i==u.key&&o===u.type&&!(131072&u.__u))return n;if((typeof o!="function"||o===T||i)&&r>(u!=null&&!(131072&u.__u)?1:0))for(;c>=0||_<e.length;){if(c>=0){if((u=e[c])&&!(131072&u.__u)&&i==u.key&&o===u.type)return c;c--}if(_<e.length){if((u=e[_])&&!(131072&u.__u)&&i==u.key&&o===u.type)return _;_++}}return-1}function Le(t,e,n){e[0]==="-"?t.setProperty(e,n??""):t[e]=n==null?"":typeof n!="number"||mt.test(e)?n:n+"px"}function re(t,e,n,r,i){var o;e:if(e==="style")if(typeof n=="string")t.style.cssText=n;else{if(typeof r=="string"&&(t.style.cssText=r=""),r)for(e in r)n&&e in n||Le(t.style,e,"");if(n)for(e in n)r&&n[e]===r[e]||Le(t.style,e,n[e])}else if(e[0]==="o"&&e[1]==="n")o=e!==(e=e.replace(/(PointerCapture)$|Capture$/i,"$1")),e=e.toLowerCase()in t||e==="onFocusOut"||e==="onFocusIn"?e.toLowerCase().slice(2):e.slice(2),t.l||(t.l={}),t.l[e+o]=n,n?r?n.u=r.u:(n.u=Ce,t.addEventListener(e,o?ye:ge,o)):t.removeEventListener(e,o?ye:ge,o);else{if(i=="http://www.w3.org/2000/svg")e=e.replace(/xlink(H|:h)/,"h").replace(/sName$/,"s");else if(e!="width"&&e!="height"&&e!="href"&&e!="list"&&e!="form"&&e!="tabIndex"&&e!="download"&&e!="rowSpan"&&e!="colSpan"&&e!="role"&&e!="popover"&&e in t)try{t[e]=n??"";break e}catch{}typeof n=="function"||(n==null||n===!1&&e[4]!=="-"?t.removeAttribute(e):t.setAttribute(e,e=="popover"&&n==1?"":n))}}function He(t){return function(e){if(this.l){var n=this.l[e.type+t];if(e.t==null)e.t=Ce++;else if(e.t<n.u)return;return v.event&&(e=v.event(e)),"handleEvent"in n?n.handleEvent(e):n(e)}}}function Se(t,e,n,r,i,o,c,_,u,l){var d,s,h,f,p,S,x,m,y,D,E,N,L,ne,I,C,$=e.type;if(e.constructor!==void 0)return null;128&n.__u&&(u=!!(32&n.__u),o=[_=e.__e=n.__e]),(d=v.__b)&&d(e);e:if(typeof $=="function")try{if(m=e.props,y="prototype"in $&&$.prototype.render,D=(d=$.contextType)&&r[d.__c],E=d?D?D.props.value:d.__:r,n.__c?x=(s=e.__c=n.__c).__=s.__E:(y?e.__c=s=new $(m,E):(e.__c=s=new G(m,E),s.constructor=$,s.render=xt),D&&D.sub(s),s.props=m,s.state||(s.state={}),s.context=E,s.__n=r,h=s.__d=!0,s.__h=[],s._sb=[]),y&&s.__s==null&&(s.__s=s.state),y&&$.getDerivedStateFromProps!=null&&(s.__s==s.state&&(s.__s=U({},s.__s)),U(s.__s,$.getDerivedStateFromProps(m,s.__s))),f=s.props,p=s.state,s.__v=e,h)y&&$.getDerivedStateFromProps==null&&s.componentWillMount!=null&&s.componentWillMount(),y&&s.componentDidMount!=null&&s.__h.push(s.componentDidMount);else{if(y&&$.getDerivedStateFromProps==null&&m!==f&&s.componentWillReceiveProps!=null&&s.componentWillReceiveProps(m,E),!s.__e&&(s.shouldComponentUpdate!=null&&s.shouldComponentUpdate(m,s.__s,E)===!1||e.__v===n.__v)){for(e.__v!==n.__v&&(s.props=m,s.state=s.__s,s.__d=!1),e.__e=n.__e,e.__k=n.__k,e.__k.some(function(B){B&&(B.__=e)}),N=0;N<s._sb.length;N++)s.__h.push(s._sb[N]);s._sb=[],s.__h.length&&c.push(s);break e}s.componentWillUpdate!=null&&s.componentWillUpdate(m,s.__s,E),y&&s.componentDidUpdate!=null&&s.__h.push(function(){s.componentDidUpdate(f,p,S)})}if(s.context=E,s.props=m,s.__P=t,s.__e=!1,L=v.__r,ne=0,y){for(s.state=s.__s,s.__d=!1,L&&L(e),d=s.render(s.props,s.state,s.context),I=0;I<s._sb.length;I++)s.__h.push(s._sb[I]);s._sb=[]}else do s.__d=!1,L&&L(e),d=s.render(s.props,s.state,s.context),s.state=s.__s;while(s.__d&&++ne<25);s.state=s.__s,s.getChildContext!=null&&(r=U(U({},r),s.getChildContext())),y&&!h&&s.getSnapshotBeforeUpdate!=null&&(S=s.getSnapshotBeforeUpdate(f,p)),Xe(t,fe(C=d!=null&&d.type===T&&d.key==null?d.props.children:d)?C:[C],e,n,r,i,o,c,_,u,l),s.base=e.__e,e.__u&=-161,s.__h.length&&c.push(s),x&&(s.__E=s.__=null)}catch(B){if(e.__v=null,u||o!=null){for(e.__u|=u?160:128;_&&_.nodeType===8&&_.nextSibling;)_=_.nextSibling;o[o.indexOf(_)]=null,e.__e=_}else e.__e=n.__e,e.__k=n.__k;v.__e(B,e,n)}else o==null&&e.__v===n.__v?(e.__k=n.__k,e.__e=n.__e):e.__e=bt(n.__e,e,n,r,i,o,c,u,l);(d=v.diffed)&&d(e)}function nt(t,e,n){e.__d=void 0;for(var r=0;r<n.length;r++)ke(n[r],n[++r],n[++r]);v.__c&&v.__c(e,t),t.some(function(i){try{t=i.__h,i.__h=[],t.some(function(o){o.call(i)})}catch(o){v.__e(o,i.__v)}})}function bt(t,e,n,r,i,o,c,_,u){var l,d,s,h,f,p,S,x=n.props,m=e.props,y=e.type;if(y==="svg"?i="http://www.w3.org/2000/svg":y==="math"?i="http://www.w3.org/1998/Math/MathML":i||(i="http://www.w3.org/1999/xhtml"),o!=null){for(l=0;l<o.length;l++)if((f=o[l])&&"setAttribute"in f==!!y&&(y?f.localName===y:f.nodeType===3)){t=f,o[l]=null;break}}if(t==null){if(y===null)return document.createTextNode(m);t=document.createElementNS(i,y,m.is&&m),_&&(v.__m&&v.__m(e,o),_=!1),o=null}if(y===null)x===m||_&&t.data===m||(t.data=m);else{if(o=o&&Y.call(t.childNodes),x=n.props||J,!_&&o!=null)for(x={},l=0;l<t.attributes.length;l++)x[(f=t.attributes[l]).name]=f.value;for(l in x)if(f=x[l],l!="children"){if(l=="dangerouslySetInnerHTML")s=f;else if(!(l in m)){if(l=="value"&&"defaultValue"in m||l=="checked"&&"defaultChecked"in m)continue;re(t,l,null,f,i)}}for(l in m)f=m[l],l=="children"?h=f:l=="dangerouslySetInnerHTML"?d=f:l=="value"?p=f:l=="checked"?S=f:_&&typeof f!="function"||x[l]===f||re(t,l,f,x[l],i);if(d)_||s&&(d.__html===s.__html||d.__html===t.innerHTML)||(t.innerHTML=d.__html),e.__k=[];else if(s&&(t.innerHTML=""),Xe(t,fe(h)?h:[h],e,n,r,y==="foreignObject"?"http://www.w3.org/1999/xhtml":i,o,c,o?o[0]:n.__k&&R(n,0),_,u),o!=null)for(l=o.length;l--;)Qe(o[l]);_||(l="value",y==="progress"&&p==null?t.removeAttribute("value"):p!==void 0&&(p!==t[l]||y==="progress"&&!p||y==="option"&&p!==x[l])&&re(t,l,p,x[l],i),l="checked",S!==void 0&&S!==t[l]&&re(t,l,S,x[l],i))}return t}function ke(t,e,n){try{if(typeof t=="function"){var r=typeof t.__u=="function";r&&t.__u(),r&&e==null||(t.__u=t(e))}else t.current=e}catch(i){v.__e(i,n)}}function rt(t,e,n){var r,i;if(v.unmount&&v.unmount(t),(r=t.ref)&&(r.current&&r.current!==t.__e||ke(r,null,e)),(r=t.__c)!=null){if(r.componentWillUnmount)try{r.componentWillUnmount()}catch(o){v.__e(o,e)}r.base=r.__P=null}if(r=t.__k)for(i=0;i<r.length;i++)r[i]&&rt(r[i],e,n||typeof t.type!="function");n||Qe(t.__e),t.__c=t.__=t.__e=t.__d=void 0}function xt(t,e,n){return this.constructor(t,n)}function wt(t,e,n){var r,i,o,c;v.__&&v.__(t,e),i=(r=typeof n=="function")?null:e.__k,o=[],c=[],Se(e,t=(!r&&n||e).__k=A(T,null,[t]),i||J,J,e.namespaceURI,!r&&n?[n]:i?null:e.firstChild?Y.call(e.childNodes):null,o,!r&&n?n:i?i.__e:e.firstChild,r,c),nt(o,t,c)}function Me(t,e,n){var r,i,o,c,_=U({},t.props);for(o in t.type&&t.type.defaultProps&&(c=t.type.defaultProps),e)o=="key"?r=e[o]:o=="ref"?i=e[o]:_[o]=e[o]===void 0&&c!==void 0?c[o]:e[o];return arguments.length>2&&(_.children=arguments.length>3?Y.call(arguments,2):n),K(t.type,_,r||t.key,i||t.ref,null)}function $e(t,e){var n={__c:e="__cC"+Ze++,__:t,Consumer:function(r,i){return r.children(i)},Provider:function(r){var i,o;return this.getChildContext||(i=new Set,(o={})[e]=this,this.getChildContext=function(){return o},this.componentWillUnmount=function(){i=null},this.shouldComponentUpdate=function(c){this.props.value!==c.value&&i.forEach(function(_){_.__e=!0,be(_)})},this.sub=function(c){i.add(c);var _=c.componentWillUnmount;c.componentWillUnmount=function(){i&&i.delete(c),_&&_.call(c)}}),r.children}};return n.Provider.__=n.Consumer.contextType=n}Y=Je.slice,v={__e:function(t,e,n,r){for(var i,o,c;e=e.__;)if((i=e.__c)&&!i.__)try{if((o=i.constructor)&&o.getDerivedStateFromError!=null&&(i.setState(o.getDerivedStateFromError(t)),c=i.__d),i.componentDidCatch!=null&&(i.componentDidCatch(t,r||{}),c=i.__d),c)return i.__E=i}catch(_){t=_}throw t}},Ke=0,Ge=function(t){return t!=null&&t.constructor==null},G.prototype.setState=function(t,e){var n;n=this.__s!=null&&this.__s!==this.state?this.__s:this.__s=U({},this.state),typeof t=="function"&&(t=t(U({},n),this.props)),t&&U(n,t),t!=null&&this.__v&&(e&&this._sb.push(e),be(this))},G.prototype.forceUpdate=function(t){this.__v&&(this.__e=!0,t&&this.__h.push(t),be(this))},G.prototype.render=T,M=[],Ve=typeof Promise=="function"?Promise.prototype.then.bind(Promise.resolve()):setTimeout,me=function(t,e){return t.__v.__b-e.__v.__b},ce.__r=0,Ce=0,ge=He(!1),ye=He(!0),Ze=0;var Ct=0;function a(t,e,n,r,i,o){e||(e={});var c,_,u=e;"ref"in e&&(c=e.ref,delete e.ref);var l={type:t,props:u,key:n,ref:c,__k:null,__:null,__b:0,__e:null,__d:void 0,__c:null,constructor:void 0,__v:--Ct,__i:-1,__u:0,__source:i,__self:o};if(typeof t=="function"&&(c=t.defaultProps))for(_ in c)u[_]===void 0&&(u[_]=c[_]);return v.vnode&&v.vnode(l),l}var O,b,he,Ae,Q=0,it=[],w=v,Oe=w.__b,Ie=w.__r,Be=w.diffed,We=w.__c,Re=w.unmount,Fe=w.__;function X(t,e){w.__h&&w.__h(b,t,Q||e),Q=0;var n=b.__H||(b.__H={__:[],__h:[]});return t>=n.__.length&&n.__.push({}),n.__[t]}function V(t){return Q=1,Ee(at,t)}function Ee(t,e,n){var r=X(O++,2);if(r.t=t,!r.__c&&(r.__=[at(void 0,e),function(_){var u=r.__N?r.__N[0]:r.__[0],l=r.t(u,_);u!==l&&(r.__N=[l,r.__[1]],r.__c.setState({}))}],r.__c=b,!b.u)){var i=function(_,u,l){if(!r.__c.__H)return!0;var d=r.__c.__H.__.filter(function(h){return!!h.__c});if(d.every(function(h){return!h.__N}))return!o||o.call(this,_,u,l);var s=r.__c.props!==_;return d.forEach(function(h){if(h.__N){var f=h.__[0];h.__=h.__N,h.__N=void 0,f!==h.__[0]&&(s=!0)}}),o&&o.call(this,_,u,l)||s};b.u=!0;var o=b.shouldComponentUpdate,c=b.componentWillUpdate;b.componentWillUpdate=function(_,u,l){if(this.__e){var d=o;o=void 0,i(_,u,l),o=d}c&&c.call(this,_,u,l)},b.shouldComponentUpdate=i}return r.__N||r.__}function ot(t,e){var n=X(O++,3);!w.__s&&Te(n.__H,e)&&(n.__=t,n.i=e,b.__H.__h.push(n))}function st(t,e){var n=X(O++,4);!w.__s&&Te(n.__H,e)&&(n.__=t,n.i=e,b.__h.push(n))}function P(t){return Q=5,F(function(){return{current:t}},[])}function F(t,e){var n=X(O++,7);return Te(n.__H,e)&&(n.__=t(),n.__H=e,n.__h=t),n.__}function St(t,e){return Q=8,F(function(){return t},e)}function Pe(t){var e=b.context[t.__c],n=X(O++,9);return n.c=t,e?(n.__==null&&(n.__=!0,e.sub(b)),e.props.value):t.__}function kt(){for(var t;t=it.shift();)if(t.__P&&t.__H)try{t.__H.__h.forEach(ae),t.__H.__h.forEach(xe),t.__H.__h=[]}catch(e){t.__H.__h=[],w.__e(e,t.__v)}}w.__b=function(t){b=null,Oe&&Oe(t)},w.__=function(t,e){t&&e.__k&&e.__k.__m&&(t.__m=e.__k.__m),Fe&&Fe(t,e)},w.__r=function(t){Ie&&Ie(t),O=0;var e=(b=t.__c).__H;e&&(he===b?(e.__h=[],b.__h=[],e.__.forEach(function(n){n.__N&&(n.__=n.__N),n.i=n.__N=void 0})):(e.__h.forEach(ae),e.__h.forEach(xe),e.__h=[],O=0)),he=b},w.diffed=function(t){Be&&Be(t);var e=t.__c;e&&e.__H&&(e.__H.__h.length&&(it.push(e)!==1&&Ae===w.requestAnimationFrame||((Ae=w.requestAnimationFrame)||$t)(kt)),e.__H.__.forEach(function(n){n.i&&(n.__H=n.i),n.i=void 0})),he=b=null},w.__c=function(t,e){e.some(function(n){try{n.__h.forEach(ae),n.__h=n.__h.filter(function(r){return!r.__||xe(r)})}catch(r){e.some(function(i){i.__h&&(i.__h=[])}),e=[],w.__e(r,n.__v)}}),We&&We(t,e)},w.unmount=function(t){Re&&Re(t);var e,n=t.__c;n&&n.__H&&(n.__H.__.forEach(function(r){try{ae(r)}catch(i){e=i}}),n.__H=void 0,e&&w.__e(e,n.__v))};var je=typeof requestAnimationFrame=="function";function $t(t){var e,n=function(){clearTimeout(r),je&&cancelAnimationFrame(e),setTimeout(t)},r=setTimeout(n,100);je&&(e=requestAnimationFrame(n))}function ae(t){var e=b,n=t.__c;typeof n=="function"&&(t.__c=void 0,n()),b=e}function xe(t){var e=b;t.__c=t.__(),b=e}function Te(t,e){return!t||t.length!==e.length||e.some(function(n,r){return n!==t[r]})}function at(t,e){return typeof e=="function"?e(t):e}let H,q;const Et=(t,e)=>{if(H=void 0,e&&e.type==="click"){if(e.ctrlKey||e.metaKey||e.altKey||e.shiftKey||e.button!==0)return t;const n=e.target.closest("a[href]"),r=n&&n.getAttribute("href");if(!n||n.origin!=location.origin||/^#/.test(r)||!/^(_?self)?$/i.test(n.target)||q&&(typeof q=="string"?!r.startsWith(q):!q.test(r)))return t;H=!0,e.preventDefault(),e=n.href.replace(location.origin,"")}else typeof e=="string"?H=!0:e&&e.url?(H=!e.replace,e=e.url):e=location.pathname+location.search;return H===!0?history.pushState(null,"",e):H===!1&&history.replaceState(null,"",e),e},Pt=(t,e,n)=>{t=t.split("/").filter(Boolean),e=(e||"").split("/").filter(Boolean);for(let r=0,i,o;r<Math.max(t.length,e.length);r++){let[,c,_,u]=(e[r]||"").match(/^(:?)(.*?)([+*?]?)$/);if(i=t[r],!(!c&&_==i)){if(!c&&i&&u=="*"){n.rest="/"+t.slice(r).map(decodeURIComponent).join("/");break}if(!c||!i&&u!="?"&&u!="*")return;if(o=u=="+"||u=="*",o?i=t.slice(r).map(decodeURIComponent).join("/")||void 0:i&&(i=decodeURIComponent(i)),n.params[_]=i,_ in n||(n[_]=i),o)break}}return n};function ee(t){const[e,n]=Ee(Et,t.url||location.pathname+location.search);t.scope&&(q=t.scope);const r=H===!0,i=F(()=>{const o=new URL(e,location.origin),c=o.pathname.replace(/\/+$/g,"")||"/";return{url:e,path:c,query:Object.fromEntries(o.searchParams),route:(_,u)=>n({url:_,replace:u}),wasPush:r}},[e]);return st(()=>(addEventListener("click",n),addEventListener("popstate",n),()=>{removeEventListener("click",n),removeEventListener("popstate",n)}),[]),A(ee.ctx.Provider,{value:i},t.children)}const Tt=Promise.resolve();function ct(t){const[e,n]=Ee(C=>C+1,0),{url:r,query:i,wasPush:o,path:c}=Nt(),{rest:_=c,params:u={}}=Pe(ze),l=P(!1),d=P(c),s=P(0),h=P(),f=P(),p=P(),S=P(!1),x=P();x.current=!1;const m=P(!1);let y,D,E;tt(t.children).some(C=>{if(Pt(_,C.props.path,E={...C.props,path:_,query:i,params:u,rest:""}))return y=Me(C,E);C.props.default&&(D=Me(C,E))});let N=y||D;F(()=>{f.current=h.current;const C=f.current&&f.current.props.children;!C||!N||N.type!==C.type||N.props.component!==C.props.component?(this.__v&&this.__v.__k&&this.__v.__k.reverse(),s.current++,m.current=!0):m.current=!1},[r]);const L=h.current&&h.current.__u&ie&&h.current.__u&oe,ne=h.current&&h.current.__h;h.current=A(ze.Provider,{value:E},N),L?(h.current.__u|=ie,h.current.__u|=oe):ne&&(h.current.__h=!0);const I=f.current;return f.current=null,this.__c=(C,$)=>{x.current=!0,f.current=I,t.onLoadStart&&t.onLoadStart(r),l.current=!0;let B=s.current;C.then(()=>{B===s.current&&(f.current=null,h.current&&($.__h&&(h.current.__h=$.__h),$.__u&oe&&(h.current.__u|=oe),$.__u&ie&&(h.current.__u|=ie)),Tt.then(n))})},st(()=>{const C=this.__v&&this.__v.__e;if(x.current){!S.current&&!p.current&&(p.current=C);return}!S.current&&p.current&&(p.current!==C&&p.current.remove(),p.current=null),S.current=!0,d.current!==c&&(o&&scrollTo(0,0),t.onRouteChange&&t.onRouteChange(r),d.current=c),t.onLoadEnd&&l.current&&t.onLoadEnd(r),l.current=!1},[c,o,e]),m.current?[A(pe,{r:h}),A(pe,{r:f})]:A(pe,{r:h})}const ie=32,oe=128,pe=({r:t})=>t.current;ct.Provider=ee;ee.ctx=$e({});const ze=$e({}),se=t=>A(t.component,t),Nt=()=>Pe(ee.ctx),qe=v.__e;v.__e=(t,e,n)=>{if(t&&t.then){let r=e;for(;r=r.__;)if(r.__c&&r.__c.__c)return e.__e==null&&(e.__e=n.__e,e.__k=n.__k),e.__k||(e.__k=[]),r.__c.__c(t,e)}qe&&qe(t,e,n)};function Ut(){return a("p",{className:"text-6xl font-light mb-6 text-[#333333] font-logo",children:[a("span",{className:"font-semibold",children:"GAGGI"}),"MATE"]})}function Dt(){return a("footer",{children:[a("div",{className:"flex flex-row justify-center mt-4 gap-2",children:[a("a",{rel:"noopener",href:"https://github.com/jniebuhr/gaggimate",target:"_blank",className:"text-black",children:a("svg",{xmlns:"http://www.w3.org/2000/svg",width:"25",height:"25",viewBox:"0 0 496 512",children:a("path",{fill:"#333333",d:"M165.9 397.4c0 2-2.3 3.6-5.2 3.6-3.3 .3-5.6-1.3-5.6-3.6 0-2 2.3-3.6 5.2-3.6 3-.3 5.6 1.3 5.6 3.6zm-31.1-4.5c-.7 2 1.3 4.3 4.3 4.9 2.6 1 5.6 0 6.2-2s-1.3-4.3-4.3-5.2c-2.6-.7-5.5 .3-6.2 2.3zm44.2-1.7c-2.9 .7-4.9 2.6-4.6 4.9 .3 2 2.9 3.3 5.9 2.6 2.9-.7 4.9-2.6 4.6-4.6-.3-1.9-3-3.2-5.9-2.9zM244.8 8C106.1 8 0 113.3 0 252c0 110.9 69.8 205.8 169.5 239.2 12.8 2.3 17.3-5.6 17.3-12.1 0-6.2-.3-40.4-.3-61.4 0 0-70 15-84.7-29.8 0 0-11.4-29.1-27.8-36.6 0 0-22.9-15.7 1.6-15.4 0 0 24.9 2 38.6 25.8 21.9 38.6 58.6 27.5 72.9 20.9 2.3-16 8.8-27.1 16-33.7-55.9-6.2-112.3-14.3-112.3-110.5 0-27.5 7.6-41.3 23.6-58.9-2.6-6.5-11.1-33.3 2.6-67.9 20.9-6.5 69 27 69 27 20-5.6 41.5-8.5 62.8-8.5s42.8 2.9 62.8 8.5c0 0 48.1-33.6 69-27 13.7 34.7 5.2 61.4 2.6 67.9 16 17.7 25.8 31.5 25.8 58.9 0 96.5-58.9 104.2-114.8 110.5 9.2 7.9 17 22.9 17 46.4 0 33.7-.3 75.4-.3 83.6 0 6.5 4.6 14.4 17.3 12.1C428.2 457.8 496 362.9 496 252 496 113.3 383.5 8 244.8 8zM97.2 352.9c-1.3 1-1 3.3 .7 5.2 1.6 1.6 3.9 2.3 5.2 1 1.3-1 1-3.3-.7-5.2-1.6-1.6-3.9-2.3-5.2-1zm-10.8-8.1c-.7 1.3 .3 2.9 2.3 3.9 1.6 1 3.6 .7 4.3-.7 .7-1.3-.3-2.9-2.3-3.9-2-.6-3.6-.3-4.3 .7zm32.4 35.6c-1.6 1.3-1 4.3 1.3 6.2 2.3 2.3 5.2 2.6 6.5 1 1.3-1.3 .7-4.3-1.3-6.2-2.2-2.3-5.2-2.6-6.5-1zm-11.4-14.7c-1.6 1-1.6 3.6 0 5.9 1.6 2.3 4.3 3.3 5.6 2.3 1.6-1.3 1.6-3.9 0-6.2-1.4-2.3-4-3.3-5.6-2z"})})}),a("a",{rel:"noopener",href:"https://delta2.eu/discord",target:"_blank",className:"text-black",children:a("svg",{xmlns:"http://www.w3.org/2000/svg",width:"25",height:"25",viewBox:"0 0 640 512",children:a("path",{fill:"#333333",d:"M524.5 69.8a1.5 1.5 0 0 0 -.8-.7A485.1 485.1 0 0 0 404.1 32a1.8 1.8 0 0 0 -1.9 .9 337.5 337.5 0 0 0 -14.9 30.6 447.8 447.8 0 0 0 -134.4 0 309.5 309.5 0 0 0 -15.1-30.6 1.9 1.9 0 0 0 -1.9-.9A483.7 483.7 0 0 0 116.1 69.1a1.7 1.7 0 0 0 -.8 .7C39.1 183.7 18.2 294.7 28.4 404.4a2 2 0 0 0 .8 1.4A487.7 487.7 0 0 0 176 479.9a1.9 1.9 0 0 0 2.1-.7A348.2 348.2 0 0 0 208.1 430.4a1.9 1.9 0 0 0 -1-2.6 321.2 321.2 0 0 1 -45.9-21.9 1.9 1.9 0 0 1 -.2-3.1c3.1-2.3 6.2-4.7 9.1-7.1a1.8 1.8 0 0 1 1.9-.3c96.2 43.9 200.4 43.9 295.5 0a1.8 1.8 0 0 1 1.9 .2c2.9 2.4 6 4.9 9.1 7.2a1.9 1.9 0 0 1 -.2 3.1 301.4 301.4 0 0 1 -45.9 21.8 1.9 1.9 0 0 0 -1 2.6 391.1 391.1 0 0 0 30 48.8 1.9 1.9 0 0 0 2.1 .7A486 486 0 0 0 610.7 405.7a1.9 1.9 0 0 0 .8-1.4C623.7 277.6 590.9 167.5 524.5 69.8zM222.5 337.6c-29 0-52.8-26.6-52.8-59.2S193.1 219.1 222.5 219.1c29.7 0 53.3 26.8 52.8 59.2C275.3 311 251.9 337.6 222.5 337.6zm195.4 0c-29 0-52.8-26.6-52.8-59.2S388.4 219.1 417.9 219.1c29.7 0 53.3 26.8 52.8 59.2C470.7 311 447.5 337.6 417.9 337.6z"})})})]}),a("div",{className:"flex flex-row justify-center mt-4 gap-2 text-xs text-[#333333]",children:"Version: $BUILD_VERSION$ - Build Time: $BUILD_TIMESTAMP$"})]})}const Lt=$e(new Map);function _t(t,e){const n=Pe(Lt),[r,i]=V(o);ot(()=>{const{status:d,subscribers:s}=c();return s.push(i),d!=="loading"&&l(),()=>{s.splice(s.indexOf(i),1),s.length||n.delete(t)}},[t]);function o(){const d=c(),s={status:d.status,data:d.data,isLoading:d.status==="loading",isSuccess:d.status==="success",isError:d.status==="error",setData:u,refetch:l};return s.status==="error"&&(s.error=d.error),s}function c(){return n.has(t)||n.set(t,{subscribers:[]}),n.get(t)}function _(d){const s=c();for(const f in d)s[f]=d[f];const h=o();s.subscribers.forEach(f=>{f(h)})}function u(d){_({status:"success",data:d})}function l(){t!=null&&(_({status:"loading"}),Promise.resolve(e()).then(u).catch(d=>{_({status:"error",error:d})}))}return r}function _e({size:t=8}){return a("div",{role:"status",children:[a("svg",{"aria-hidden":"true",className:`w-${t} h-${t} text-gray-200 animate-spin dark:text-gray-600 fill-blue-600`,viewBox:"0 0 100 101",fill:"none",xmlns:"http://www.w3.org/2000/svg",children:[a("path",{d:"M100 50.5908C100 78.2051 77.6142 100.591 50 100.591C22.3858 100.591 0 78.2051 0 50.5908C0 22.9766 22.3858 0.59082 50 0.59082C77.6142 0.59082 100 22.9766 100 50.5908ZM9.08144 50.5908C9.08144 73.1895 27.4013 91.5094 50 91.5094C72.5987 91.5094 90.9186 73.1895 90.9186 50.5908C90.9186 27.9921 72.5987 9.67226 50 9.67226C27.4013 9.67226 9.08144 27.9921 9.08144 50.5908Z",fill:"currentColor"}),a("path",{d:"M93.9676 39.0409C96.393 38.4038 97.8624 35.9116 97.0079 33.5539C95.2932 28.8227 92.871 24.3692 89.8167 20.348C85.8452 15.1192 80.8826 10.7238 75.2124 7.41289C69.5422 4.10194 63.2754 1.94025 56.7698 1.05124C51.7666 0.367541 46.6976 0.446843 41.7345 1.27873C39.2613 1.69328 37.813 4.19778 38.4501 6.62326C39.0873 9.04874 41.5694 10.4717 44.0505 10.1071C47.8511 9.54855 51.7191 9.52689 55.5402 10.0491C60.8642 10.7766 65.9928 12.5457 70.6331 15.2552C75.2735 17.9648 79.3347 21.5619 82.5849 25.841C84.9175 28.9121 86.7997 32.2913 88.1811 35.8758C89.083 38.2158 91.5421 39.6781 93.9676 39.0409Z",fill:"currentFill"})]}),a("span",{className:"sr-only",children:"Loading..."})]})}var Ht=Symbol.for("preact-signals");function Ne(){if(W>1)W--;else{for(var t,e=!1;Z!==void 0;){var n=Z;for(Z=void 0,we++;n!==void 0;){var r=n.o;if(n.o=void 0,n.f&=-3,!(8&n.f)&&ft(n))try{n.c()}catch(i){e||(t=i,e=!0)}n=r}}if(we=0,W--,e)throw t}}var g=void 0,Z=void 0,W=0,we=0,le=0;function lt(t){if(g!==void 0){var e=t.n;if(e===void 0||e.t!==g)return e={i:0,S:t,p:g.s,n:void 0,t:g,e:void 0,x:void 0,r:e},g.s!==void 0&&(g.s.n=e),g.s=e,t.n=e,32&g.f&&t.S(e),e;if(e.i===-1)return e.i=0,e.n!==void 0&&(e.n.p=e.p,e.p!==void 0&&(e.p.n=e.n),e.p=g.s,e.n=void 0,g.s.n=e,g.s=e),e}}function k(t){this.v=t,this.i=0,this.n=void 0,this.t=void 0}k.prototype.brand=Ht;k.prototype.h=function(){return!0};k.prototype.S=function(t){this.t!==t&&t.e===void 0&&(t.x=this.t,this.t!==void 0&&(this.t.e=t),this.t=t)};k.prototype.U=function(t){if(this.t!==void 0){var e=t.e,n=t.x;e!==void 0&&(e.x=n,t.e=void 0),n!==void 0&&(n.e=e,t.x=void 0),t===this.t&&(this.t=n)}};k.prototype.subscribe=function(t){var e=this;return de(function(){var n=e.value,r=g;g=void 0;try{t(n)}finally{g=r}})};k.prototype.valueOf=function(){return this.value};k.prototype.toString=function(){return this.value+""};k.prototype.toJSON=function(){return this.value};k.prototype.peek=function(){var t=g;g=void 0;try{return this.value}finally{g=t}};Object.defineProperty(k.prototype,"value",{get:function(){var t=lt(this);return t!==void 0&&(t.i=this.i),this.v},set:function(t){if(t!==this.v){if(we>100)throw new Error("Cycle detected");this.v=t,this.i++,le++,W++;try{for(var e=this.t;e!==void 0;e=e.x)e.t.N()}finally{Ne()}}}});function ut(t){return new k(t)}function ft(t){for(var e=t.s;e!==void 0;e=e.n)if(e.S.i!==e.i||!e.S.h()||e.S.i!==e.i)return!0;return!1}function dt(t){for(var e=t.s;e!==void 0;e=e.n){var n=e.S.n;if(n!==void 0&&(e.r=n),e.S.n=e,e.i=-1,e.n===void 0){t.s=e;break}}}function ht(t){for(var e=t.s,n=void 0;e!==void 0;){var r=e.p;e.i===-1?(e.S.U(e),r!==void 0&&(r.n=e.n),e.n!==void 0&&(e.n.p=r)):n=e,e.S.n=e.r,e.r!==void 0&&(e.r=void 0),e=r}t.s=n}function j(t){k.call(this,void 0),this.x=t,this.s=void 0,this.g=le-1,this.f=4}(j.prototype=new k).h=function(){if(this.f&=-3,1&this.f)return!1;if((36&this.f)==32||(this.f&=-5,this.g===le))return!0;if(this.g=le,this.f|=1,this.i>0&&!ft(this))return this.f&=-2,!0;var t=g;try{dt(this),g=this;var e=this.x();(16&this.f||this.v!==e||this.i===0)&&(this.v=e,this.f&=-17,this.i++)}catch(n){this.v=n,this.f|=16,this.i++}return g=t,ht(this),this.f&=-2,!0};j.prototype.S=function(t){if(this.t===void 0){this.f|=36;for(var e=this.s;e!==void 0;e=e.n)e.S.S(e)}k.prototype.S.call(this,t)};j.prototype.U=function(t){if(this.t!==void 0&&(k.prototype.U.call(this,t),this.t===void 0)){this.f&=-33;for(var e=this.s;e!==void 0;e=e.n)e.S.U(e)}};j.prototype.N=function(){if(!(2&this.f)){this.f|=6;for(var t=this.t;t!==void 0;t=t.x)t.t.N()}};Object.defineProperty(j.prototype,"value",{get:function(){if(1&this.f)throw new Error("Cycle detected");var t=lt(this);if(this.h(),t!==void 0&&(t.i=this.i),16&this.f)throw this.v;return this.v}});function Mt(t){return new j(t)}function pt(t){var e=t.u;if(t.u=void 0,typeof e=="function"){W++;var n=g;g=void 0;try{e()}catch(r){throw t.f&=-2,t.f|=8,Ue(t),r}finally{g=n,Ne()}}}function Ue(t){for(var e=t.s;e!==void 0;e=e.n)e.S.U(e);t.x=void 0,t.s=void 0,pt(t)}function At(t){if(g!==this)throw new Error("Out-of-order effect");ht(this),g=t,this.f&=-2,8&this.f&&Ue(this),Ne()}function te(t){this.x=t,this.u=void 0,this.s=void 0,this.o=void 0,this.f=32}te.prototype.c=function(){var t=this.S();try{if(8&this.f||this.x===void 0)return;var e=this.x();typeof e=="function"&&(this.u=e)}finally{t()}};te.prototype.S=function(){if(1&this.f)throw new Error("Cycle detected");this.f|=1,this.f&=-9,pt(this),dt(this),W++;var t=g;return g=this,At.bind(this,t)};te.prototype.N=function(){2&this.f||(this.f|=2,this.o=Z,Z=this)};te.prototype.d=function(){this.f|=8,1&this.f||Ue(this)};function de(t){var e=new te(t);try{e.c()}catch(n){throw e.d(),n}return e.d.bind(e)}var ve;function z(t,e){v[t]=e.bind(null,v[t]||function(){})}function ue(t){ve&&ve(),ve=t&&t.S()}function vt(t){var e=this,n=t.data,r=It(n);r.value=n;var i=F(function(){for(var o=e.__v;o=o.__;)if(o.__c){o.__c.__$f|=4;break}return e.__$u.c=function(){var c,_=e.__$u.S(),u=i.value;_(),Ge(u)||((c=e.base)==null?void 0:c.nodeType)!==3?(e.__$f|=1,e.setState({})):e.base.data=u},Mt(function(){var c=r.value.value;return c===0?0:c===!0?"":c||""})},[]);return i.value}vt.displayName="_st";Object.defineProperties(k.prototype,{constructor:{configurable:!0,value:void 0},type:{configurable:!0,value:vt},props:{configurable:!0,get:function(){return{data:this}}},__b:{configurable:!0,value:1}});z("__b",function(t,e){if(typeof e.type=="string"){var n,r=e.props;for(var i in r)if(i!=="children"){var o=r[i];o instanceof k&&(n||(e.__np=n={}),n[i]=o,r[i]=o.peek())}}t(e)});z("__r",function(t,e){ue();var n,r=e.__c;r&&(r.__$f&=-2,(n=r.__$u)===void 0&&(r.__$u=n=function(i){var o;return de(function(){o=this}),o.c=function(){r.__$f|=1,r.setState({})},o}())),ue(n),t(e)});z("__e",function(t,e,n,r){ue(),t(e,n,r)});z("diffed",function(t,e){ue();var n;if(typeof e.type=="string"&&(n=e.__e)){var r=e.__np,i=e.props;if(r){var o=n.U;if(o)for(var c in o){var _=o[c];_!==void 0&&!(c in r)&&(_.d(),o[c]=void 0)}else n.U=o={};for(var u in r){var l=o[u],d=r[u];l===void 0?(l=Ot(n,u,d,i),o[u]=l):l.o(d,i)}}}t(e)});function Ot(t,e,n,r){var i=e in t&&t.ownerSVGElement===void 0,o=ut(n);return{o:function(c,_){o.value=c,r=_},d:de(function(){var c=o.value.value;r[e]!==c&&(r[e]=c,i?t[e]=c:c?t.setAttribute(e,c):t.removeAttribute(e))})}}z("unmount",function(t,e){if(typeof e.type=="string"){var n=e.__e;if(n){var r=n.U;if(r){n.U=void 0;for(var i in r){var o=r[i];o&&o.d()}}}}else{var c=e.__c;if(c){var _=c.__$u;_&&(c.__$u=void 0,_.d())}}t(e)});z("__h",function(t,e,n,r){(r<3||r===9)&&(e.__$f|=2),t(e,n,r)});G.prototype.shouldComponentUpdate=function(t,e){var n=this.__$u;if(!(n&&n.s!==void 0||4&this.__$f)||3&this.__$f)return!0;for(var r in e)return!0;for(var i in t)if(i!=="__source"&&t[i]!==this.props[i])return!0;for(var o in this.props)if(!(o in t))return!0;return!1};function It(t){return F(function(){return ut(t)},[])}const Bt={0:"Standby",1:"Brew",2:"Steam",3:"Water"};function Wt(){const[t,e]=V(0);de(()=>{const u=setInterval(()=>{t.value++},1e3);return()=>{clearInterval(u)}});const{isLoading:n,isError:r,error:i,data:o}=_t(`status/${t}`,async()=>{const l=await(await fetch("/api/status")).json();return{mode:Bt[l.mode],currentTemperature:l.ct,targetTemperature:l.tt}}),c=n?a(_e,{size:4}):a(T,{children:o==null?void 0:o.mode}),_=n?a(_e,{size:4}):a(T,{children:[o==null?void 0:o.currentTemperature,"°C/",o==null?void 0:o.targetTemperature,"°C"]});return a(T,{children:[a("div",{className:"flex flex-row justify-center mt-2 mb-2 gap-4",children:[a("div",{className:"flex flex-row items-center gap-2",children:[a("span",{className:"font-bold",children:"Mode: "}),c]}),a("div",{className:"flex flex-row items-center gap-2",children:[a("span",{className:"font-bold",children:"Temperature: "}),_]})]}),a("div",{className:"flex flex-col justify-center mt-2 mb-2",children:"Welcome to the GaggiMate Web UI. Please choose one of the options below."}),a("div",{className:"flex flex-col justify-center mt-2 mb-2 gap-2 w-full max-w-md border-b border-[#CCCCCC] pb-4",children:[a("a",{href:"#",className:"menu-button",children:"Profiles (coming soon)"}),a("a",{href:"#",className:"menu-button",children:"PID Autotune (coming soon)"}),a("a",{href:"/settings",className:"menu-button",children:"Settings"}),a("a",{href:"/ota",className:"menu-button",children:"Updates"}),a("a",{href:"/update",className:"text-xs text-center underline",children:"Old OTA updater"})]})]})}function Rt(){return a("div",{class:"border-b border-[#CCCCCC] pb-4 flex flex-col items-center",children:[a("h1",{className:"text-8xl font-logo my-12 font-medium",children:"404"}),a("p",{children:"The page you were looking for is not available."}),a("a",{href:"/",className:"menu-button my-4",children:"Back"})]})}function Ft(){const[t,e]=V(!1),[n,r]=V(0),[i,o]=V({}),{isLoading:c,isError:_,error:u,data:l}=_t(`settings/${n}`,async()=>await(await fetch("/api/settings")).json()),d=P();ot(()=>{o(l||{})},[l]);const s=f=>p=>{let S=p.currentTarget.value;f==="homekit"&&(S=!i.homekit),o({...i,[f]:S})},h=St(async f=>{f.preventDefault(),e(!0);const p=d.current,x=await(await fetch(p.action,{method:"post",body:new FormData(p)})).json();o(x),e(!1)},[o,d]);return c?a("div",{class:"p-16 flex flex-row items-center",children:a(_e,{size:8})}):a(T,{children:[a("h2",{class:"text-3xl font-semibold mb-4 text-[#333333]",children:"Settings"}),a("form",{ref:d,method:"post",action:"/api/settings",class:"flex flex-col gap-4 w-full max-w-md border-b border-[#CCCCCC] pb-4",onSubmit:h,children:[a("div",{children:a("b",{children:"User Preferences"})}),a("div",{children:[a("label",{for:"startup-mode",class:"block font-medium text-[#333333]",children:"Startup Mode"}),a("select",{id:"startup-mode",name:"startupMode",class:"input-field",onChange:s("startupMode"),children:[a("option",{value:"standby",selected:i.startupMode==="standby",children:"Standby"}),a("option",{value:"brew",selected:i.startupMode==="brew",children:"Brew"})]})]}),a("div",{children:[a("label",{for:"targetDuration",class:"block font-medium text-[#333333]",children:"Default Duration (sec)"}),a("input",{id:"targetDuration",name:"targetDuration",type:"number",class:"input-field",placeholder:"30",value:i.targetDuration,onChange:s("targetDuration")})]}),a("div",{children:[a("label",{for:"targetBrewTemp",class:"block font-medium text-[#333333]",children:"Default Brew Temperature (°C)"}),a("input",{id:"targetBrewTemp",name:"targetBrewTemp",type:"number",class:"input-field",placeholder:"93",value:i.targetBrewTemp,onChange:s("targetBrewTemp")})]}),a("div",{children:[a("label",{for:"targetSteamTemp",class:"block font-medium text-[#333333]",children:"Default Steam Temperature (°C)"}),a("input",{id:"targetSteamTemp",name:"targetSteamTemp",type:"number",class:"input-field",placeholder:"135",value:i.targetSteamTemp,onChange:s("targetSteamTemp")})]}),a("div",{children:[a("label",{for:"targetWaterTemp",class:"block font-medium text-[#333333]",children:"Default Water Temperature (°C)"}),a("input",{id:"targetWaterTemp",name:"targetWaterTemp",type:"number",class:"input-field",placeholder:"80",value:i.targetWaterTemp,onChange:s("targetWaterTemp")})]}),a("div",{children:[a("label",{for:"temperatureOffset",class:"block font-medium text-[#333333]",children:"Temperature Offset (°C)"}),a("input",{id:"temperatureOffset",name:"temperatureOffset",type:"number",class:"input-field",placeholder:"0",value:i.temperatureOffset,onChange:s("temperatureOffset")})]}),a("div",{children:a("b",{children:"Integrations"})}),a("div",{class:"flex flex-row items-center gap-4",children:[a("label",{class:"relative inline-flex items-center cursor-pointer",children:[a("input",{id:"homekit",name:"homekit",value:"homekit",type:"checkbox",class:"sr-only peer",checked:!!i.homekit,onChange:s("homekit")}),a("div",{class:"w-9 h-5 bg-gray-200 peer-focus:outline-none peer-focus:ring-4 peer-focus:ring-blue-300 dark:peer-focus:ring-blue-800 rounded-full peer dark:bg-gray-700 peer-checked:after:translate-x-full peer-checked:after:border-white after:content-[''] after:absolute after:top-[2px] after:left-[2px] after:bg-white after:border-gray-300 after:border after:rounded-full after:h-4 after:w-4 after:transition-all dark:border-gray-600 peer-checked:bg-blue-600"})]}),a("p",{children:"Homekit"})]}),a("div",{children:[a("b",{children:"System Settings"}),a("label",{for:"wifiSsid",class:"block font-medium text-[#333333]",children:"WiFi SSID"}),a("input",{id:"wifiSsid",name:"wifiSsid",type:"text",class:"input-field",placeholder:"WiFi SSID",value:i.wifiSsid,onChange:s("wifiSsid")})]}),a("div",{children:[a("label",{for:"wifiPassword",class:"block font-medium text-[#333333]",children:"WiFi Password"}),a("input",{id:"wifiPassword",name:"wifiPassword",type:"password",class:"input-field",placeholder:"WiFi Password",value:i.wifiPassword,onChange:s("wifiPassword")})]}),a("div",{children:[a("label",{for:"mdnsName",class:"block font-medium text-[#333333]",children:"Hostname"}),a("input",{id:"mdnsName",name:"mdnsName",type:"text",class:"input-field",placeholder:"Hostname",value:i.mdnsName,onChange:s("mdnsName")})]}),a("div",{children:[a("label",{for:"pid",class:"block font-medium text-[#333333]",children:"PID Values (Kp, Ki, Kd)"}),a("input",{id:"pid",name:"pid",type:"text",class:"input-field",placeholder:"2.0, 0.1, 0.01",value:i.pid,onChange:s("pid")})]}),a("div",{class:"text-sm text-[#666666]",children:"Some options like WiFi, NTP or integrations require a restart."}),a("div",{class:"flex justify-center mt-6 flex-row gap-1",children:[a("a",{href:"/",class:"menu-button",children:"Back"}),a("button",{type:"submit",class:"menu-button flex flex-row gap-2",disabled:t,children:["Save",t&&a(_e,{size:4})]}),a("input",{type:"submit",name:"restart",class:"menu-button",value:"Save and Restart",disabled:t})]})]})]})}function jt(){return a(T,{children:[a("h2",{class:"text-3xl font-semibold mb-4 text-[#333333]",children:"Updates"}),a("form",{method:"post",action:"/ota",class:"flex flex-col gap-4 w-full max-w-md border-b border-[#CCCCCC] pb-4",children:[a("div",{children:[a("label",{for:"channel",class:"block font-medium text-[#333333]",children:"Update Channel"}),a("select",{id:"channel",name:"channel",class:"input-field",children:[a("option",{value:"stable",children:"Stable"}),a("option",{value:"nightly",children:"Nightly"})]})]}),a("div",{children:[a("span",{class:"block font-medium text-[#333333]",children:"Current version"}),a("span",{class:"display-field",children:"%BUILD_VERSION%"})]}),a("div",{children:[a("span",{class:"block font-medium text-[#333333]",children:"Newest version"}),a("span",{class:"display-field",children:["v%LATEST_VERSION% ",a("span",{class:"font-bold",children:"%UPDATE_AVAILABLE%"})]})]}),a("div",{class:"flex justify-center mt-6 flex-row gap-1",children:[a("a",{href:"/",class:"menu-button",children:"Back"}),a("button",{type:"submit",class:"menu-button",children:"Save Preferences"}),a("input",{type:"submit",name:"update",class:"menu-button",value:"Update"})]})]})]})}function zt(){return a(ee,{children:a("div",{className:"flex flex-col items-center mt-12 mb-16",children:[a(Ut,{}),a(ct,{children:[a(se,{path:"/",component:Wt}),a(se,{path:"/settings",component:Ft}),a(se,{path:"/ota",component:jt}),a(se,{default:!0,component:Rt})]}),a(Dt,{})]})})}wt(a(zt,{}),document.getElementById("app"));
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGAnimatedTransformList : DOMObject {
}

@property(retain,readonly) DOMSVGTransformList *animVal;
@property(retain,readonly) DOMSVGTransformList *baseVal;

+ (id)_wrapSVGAnimatedTransformList:(struct SVGAnimatedTemplate<WebCore::SVGTransformList*> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)arg1;

- (struct SVGAnimatedTemplate<WebCore::SVGTransformList*> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)_SVGAnimatedTransformList;
- (id)_initWithSVGAnimatedTransformList:(struct SVGAnimatedTemplate<WebCore::SVGTransformList*> { int (**x1)(); NSInteger x2; struct QualifiedName {} *x3; }*)arg1;
- (id)animVal;
- (id)baseVal;
- (void)dealloc;
- (void)finalize;

@end
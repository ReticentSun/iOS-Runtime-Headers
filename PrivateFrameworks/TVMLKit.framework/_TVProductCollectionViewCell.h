/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _activeMargins;
    BOOL  _marginActive;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _margins;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _partialMargins;
    UIView * _titleView;
    UIViewController * _viewController;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } margins;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } partialMargins;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)disableMargins;
- (void)enableWithMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)isShowingTitleView;
- (void)layoutSubviews;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })margins;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })partialMargins;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)setMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPartialMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleView:(id)arg1 margins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 show:(BOOL)arg3;
- (void)setViewController:(id)arg1;
- (void)showTitleView:(BOOL)arg1;
- (id)titleView;
- (id)viewController;

@end

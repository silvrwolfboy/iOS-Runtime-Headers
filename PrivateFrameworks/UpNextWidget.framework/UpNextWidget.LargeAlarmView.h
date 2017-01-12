/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.LargeAlarmView : UIView {
    void bellImageView;
    void bellWidthAndHeight;
    void label;
    void tapURL;
    void viewTapped;
}

@property (nonatomic, copy) id /* block */ viewTapped;

- (id /* block */).cxx_destruct;
- (float)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (void)refreshWithAlarmsWithAlarms:(id)arg1;
- (void)setViewTapped:(id /* block */)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tappedWithGestureRecognizer:(id)arg1;
- (id /* block */)viewTapped;

@end
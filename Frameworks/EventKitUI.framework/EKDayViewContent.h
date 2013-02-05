/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSCalendar, <EKDayViewContentDelegate>, EKDayGridView, EKCalendarDate, NSMutableArray, NSTimeZone, UIView, EKEvent;

@interface EKDayViewContent : UIView <UIGestureRecognizerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _putSelectionOnTop : 1;
    unsigned int _darkensSelection : 1;
    unsigned int _eventsFillGrid : 1;
    unsigned int _dimsNonSelectedItems : 1;
    NSCalendar *_calendar;
    BOOL _darkensWeekends;
    NSMutableArray *_dayStarts;
    unsigned int _daysToDisplay;
    <EKDayViewContentDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    EKCalendarDate *_endDate;
    float _fixedDayWidth;
    EKDayGridView *_grid;
    NSMutableArray *_itemsByDay;
    float _lastDayWidth;
    float _lastHeight;
    } _latestVisibleRect;
    BOOL _lazyAddsOccurrenceViews;
    UIView *_saturdayDarkeningView;
    EKEvent *_selectedEvent;
    EKCalendarDate *_startDate;
    UIView *_sundayDarkeningView;
    BOOL _usesSmallText;
}

@property BOOL allowsOccurrenceSelection;
@property(copy) NSCalendar * calendar;
@property BOOL darkensSelection;
@property BOOL darkensWeekends;
@property <EKDayViewContentDelegate> * delegate;
@property(retain) EKEvent * dimmedOccurrence;
@property BOOL dimsNonSelectedItems;
@property(readonly) EKCalendarDate * endDate;
@property BOOL eventsFillGrid;
@property(readonly) double firstEventSecond;
@property float fixedDayWidth;
@property BOOL lazyAddsOccurrenceViews;
@property BOOL showsLeftBorder;
@property(copy) EKCalendarDate * startDate;
@property(copy) NSTimeZone * timeZone;
@property BOOL usesSmallText;

- (void)_computeDayStartsAndEnds;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEvent:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dayStarts;
- (float)_dayWidth;
- (void)_layoutContentItems:(id)arg1 dayStart:(id)arg2 dayEnd:(id)arg3 xPosition:(float)arg4 width:(float)arg5;
- (BOOL)allowsOccurrenceSelection;
- (id)calendar;
- (BOOL)containsEvent:(id)arg1;
- (BOOL)darkensSelection;
- (BOOL)darkensWeekends;
- (double)dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dayOccurrenceViewDragExited:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dimmedOccurrence;
- (BOOL)dimsNonSelectedItems;
- (id)endDate;
- (BOOL)eventsFillGrid;
- (BOOL)eventsIntersectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)firstEventSecond;
- (float)fixedDayWidth;
- (id)grid;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (id)lastDisplayedSecond;
- (void)layoutSubviews;
- (BOOL)lazyAddsOccurrenceViews;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (struct CGPoint { float x1; float x2; })pointForDate:(double)arg1;
- (void)rectBecameVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDarkensSelection:(BOOL)arg1;
- (void)setDarkensWeekends:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setFixedDayWidth:(float)arg1;
- (void)setHoursToPadTop:(int)arg1;
- (void)setLazyAddsOccurrenceViews:(BOOL)arg1;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateWithDateComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2;
- (BOOL)showsLeftBorder;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)startDate;
- (id)timeZone;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)usesSmallText;

@end
//
//  BaseView.h
//  Needfood
//
//  Created by Minh Nguyễn on 9/16/17.
//  Copyright © 2017 PHAM CONG SOFTWARE AND SERVICES COMPANY LIMITED. All rights reserved.
//

#import <UIKit/UIKit.h>


#define UIColorFromRGB(rgbValue)    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define MainColor UIColorFromRGB(0xe0443a)

#define isDebugging NO
#define FUll_VIEW_WIDTH     ([[UIScreen mainScreen] bounds].size.width)
#define FUll_VIEW_HEIGHT    ([[UIScreen mainScreen] bounds].size.height)
#define FUll_CONTENT_HEIGHT     FUll_VIEW_HEIGHT - NavigationBarHeight
#define TabbarHeight    49
#define NavigationBarHeight 64
#define PageTitleHeight     40
#define More5LineWidth      FUll_VIEW_WIDTH / 5.0

#define HelveticaNeueBold @"HelveticaNeue-Bold"
#define HelveticaNeueMedium @"HelveticaNeue-Medium"
#define HelveticaNeueLight @"HelveticaNeue-Light"
#define HelveticaNeueRegular @"HelveticaNeue-Regular"

#define NUMBER_OF_COMPONENTS_IN_PICKER_VIEW 1
#define NUMBER_OF_SECTIONS_DEFAULT 1
#define HEIGHT_HEADER_DEFAULT_CGFLOAT 35.0f
#define HEIGHT_FOOTER_DEFAULT_CGFLOAT 35.0f
#define HEIGHT_ROW_DEFAULT_CGFLOAT 50.0f
#define HEIGHT_ROW_USER_INFORMATION_CGFLOAT 70.0f

#define PasswordRequirementMin 6
#define PasswordRequirementMax 30

#define Padding 5.0f


@interface BaseView : UIView <UIScrollViewDelegate>

@property (strong, nonatomic) UIScrollView *scrollView; /**<  滑动视图   **/
@property (assign, nonatomic) NSInteger currentPage; /**<  页码   **/
@property (strong, nonatomic) UIScrollView *topTab; /**<  顶部tab   **/
@property (strong, nonatomic) NSArray *titleArray; /**<  标题   **/
@property (strong, nonatomic) NSArray *topArray; /**<  未选中时顶部自定义视图   **/
@property (strong, nonatomic) NSArray *changeTopArray; /**<  选中时顶部自定义视图   **/
@property (assign, nonatomic) CGFloat titleScale; /**< 标题缩放比例 **/
@property (assign, nonatomic) NSInteger baseDefaultPage; /**< 设置默认加载的界面 **/
@property (assign, nonatomic) CGFloat blockHeight; /**< 滑块高度 **/
@property (assign, nonatomic) CGFloat bottomLinePer; /**< 下划线占比 **/
@property (assign, nonatomic) CGFloat bottomLineHeight; /**< 下划线高度 **/
@property (assign, nonatomic) CGFloat sliderCornerRadius; /**< 滑块圆角 **/
@property (assign, nonatomic) CGFloat titlesFont; /**< 标题字体大小 **/
@property (assign, nonatomic) CGFloat topHeight; /**< TopTab高度 **/
@property (assign, nonatomic) BOOL topTabUnderLineHidden; /**< 是否显示下方的下划线 **/
@property (assign, nonatomic) BOOL slideEnabled; /**< 允许下方左右滑动 **/
@property (assign, nonatomic) BOOL autoFitTitleLine; /**< 下划线是否自适应标题宽度 **/
@property (assign, nonatomic) BOOL topTabHiddenEnable; /**< 是否允许下方滑动时候隐藏上方的toptab **/
@property (strong, nonatomic) UIColor *buttonUnSelectColor; /**< 未选中的标题颜色 **/
@property (strong, nonatomic) UIColor *buttonSelectColor; /**< 选中的标题颜色 **/
@property (strong, nonatomic) UIColor *underlineBlockColor; /**< 下划线或滑块颜色 **/
@property (strong, nonatomic) UIColor *topTabColor; /**< topTab背景颜色 **/
/**
 *  Init Method.
 *
 *  @param frame          BaseView frame.
 *  @param topTabNum      Toptab styles.
 *
 */
- (instancetype)initWithFrame:(CGRect)frame WithTopTabType:(NSInteger)topTabNum;


/**
 *  Reload toptab titles
 *
 @param newTitles new titles
 */
- (void)reloadTabItems:(NSArray *)newTitles;

@end

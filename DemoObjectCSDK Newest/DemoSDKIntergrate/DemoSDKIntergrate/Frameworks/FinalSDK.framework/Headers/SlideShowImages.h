//
//  SlideShowImages.h
//  FinalSDK
//
//  Created by Jessy on 1/11/20.
//  Copyright © 2020 com.icsoftwarecompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN


typedef void(^SlideShowImagesRequestBlock)(UIImage*image, NSError * error);

@class SlideShowImages;

#pragma mark  - Data source
@protocol SlideShowImagesDataSource <NSObject>

@required
- (NSArray *) arrayWithImages:(SlideShowImages*)pager;
- (UIViewContentMode) contentModeForImage:(NSUInteger)image inPager:(SlideShowImages*)pager;

@optional
- (UIImage *) placeHolderImageForImagePager:(SlideShowImages*)pager;
- (NSString *) captionForImageAtIndex:(NSInteger)index  inPager:(SlideShowImages*)pager;
- (UIViewContentMode) contentModeForPlaceHolder:(SlideShowImages*)pager;

@end

#pragma mark  - Delegate
@protocol SlideShowImagesDelegate <NSObject>

@optional
- (void) imagePager:(SlideShowImages *)imagePager didScrollToIndex:(NSUInteger)index;
- (void) imagePager:(SlideShowImages *)imagePager didSelectImageAtIndex:(NSUInteger)index;

@end

#pragma mark  - Image source

@protocol SlideShowImagesImageSource <NSObject>

-(void) imageWithUrl:(NSURL*)url completion:(SlideShowImagesRequestBlock)completion;

@end


@interface SlideShowImages : UIView

// Delegate and Datasource
@property (weak) IBOutlet id <SlideShowImagesDataSource> dataSource;
@property (weak) IBOutlet id <SlideShowImagesDelegate> delegate;
@property (weak) IBOutlet id <SlideShowImagesImageSource> imageSource;


// General
@property (nonatomic) UIViewContentMode contentMode;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) UIPageControl *pageControl;
@property (nonatomic) NSUInteger currentPage;
@property (nonatomic) BOOL indicatorDisabled;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL imageCounterDisabled;
@property (nonatomic) BOOL hidePageControlForSinglePages; // Defaults YES

// Slideshow
@property (nonatomic) NSUInteger slideshowTimeInterval; // Defaults 0.0f (off)
@property (nonatomic) BOOL slideshowShouldCallScrollToDelegate; // Defaults YES

// Caption Label
@property (nonatomic, strong) UIColor *captionTextColor; // Defaults Black
@property (nonatomic, strong) UIColor *captionBackgroundColor; // Defaults White (with an alpha of .7f)
@property (nonatomic, strong) UIFont *captionFont; // Defaults to Helvetica 12.0f points

- (void) reloadData;
- (void) setCurrentPage:(NSUInteger)currentPage animated:(BOOL)animated;

@end


NS_ASSUME_NONNULL_END

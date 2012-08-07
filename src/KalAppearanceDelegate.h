//
//  KalAppearanceDelegate.h
//  Kal
//
//  Created by Marcus Ramsden on 06/08/2012.
//
//

#import <Foundation/Foundation.h>

@protocol KalAppearanceDelegate <NSObject>

@optional
- (NSString *)pathForTodaySelected;
- (NSString *)pathForToday;
- (NSString *)pathForTileSelectedAtDate:(NSDate *)date;
- (NSString *)pathForTileAtDate:(NSDate *)date;
- (UIImage *)backgroundImageForTodaySelected;
- (UIImage *)backgroundImageForTileSelectedAtDate:(NSDate *)date;
- (UIImage *)backgroundImageForTileAtDate:(NSDate *)date;
- (UIImage *)backgroundImageForInactiveDay;
- (UIColor *)colorForTextInAdjacentMonth;
- (UIColor *)colorForTextShadowInAdjacentMonth;
- (UIColor *)colorForTextAtDate:(NSDate *)date;
- (UIColor *)colorForTextShadowAtDate:(NSDate *)date;
- (UIColor *)colorForTextSelected:(NSDate *)date;
- (UIColor *)colorForTextShadowSelected:(NSDate *)date;
- (UIColor *)colorForTextToday:(NSDate *)date;
- (UIColor *)colorForTextShadowToday:(NSDate *)date;

@end

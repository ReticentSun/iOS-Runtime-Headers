/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, NSDate, NSString;

@interface GKSubmitAchievementDataRequest : GKDataRequest {
    NSString *_achievementID;
    NSDate *_date;
    GKGame *_game;
    BOOL _isHidden;
    NSInteger _percentComplete;
}

@property NSString *achievementID;
@property NSDate *date;
@property(retain) GKGame *game;
@property BOOL isHidden;
@property NSInteger percentComplete;

- (id)achievementID;
- (NSInteger)cacheType;
- (id)date;
- (void)dealloc;
- (id)game;
- (id)invalidateCacheKeys;
- (BOOL)isHidden;
- (id)key;
- (NSInteger)percentComplete;
- (id)request;
- (void)setAchievementID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setPercentComplete:(NSInteger)arg1;

@end
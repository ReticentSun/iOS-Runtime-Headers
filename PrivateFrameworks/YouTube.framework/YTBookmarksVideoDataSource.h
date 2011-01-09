/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableArray, YTSearchRequest;



@interface YTBookmarksVideoDataSource : YTVideoDataSource 
{
    NSMutableArray *_bookmarkedShortIDs;
    YTSearchRequest *_bookmarksSearchRequest;
    BOOL _lastReloadWasAccountsFavorites;
}


- (id)init;
- (void)dealloc;
- (void)_nextBatch;
- (void)reloadData;
- (NSUInteger)maxVideosToSave;
- (BOOL)isLoading;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (void)searchRequest:(id)arg1 foundBatchURL:(id)arg2;
- (void)addVideo:(id)arg1;

@end
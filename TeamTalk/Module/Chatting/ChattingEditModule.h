
#import <Foundation/Foundation.h>

@interface ChattingEditModule : NSObject
-(void)removePersonFromGroup:(NSArray *)userIDs Block:(void(^)(BOOL success))block;
- (instancetype)initChattingEditModel:(NSString *)sessionID;

@end

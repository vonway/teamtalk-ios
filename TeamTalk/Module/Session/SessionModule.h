
#import <Foundation/Foundation.h>

@class MTTSessionEntity;

typedef enum
{
    ADD = 0,
    REFRESH = 1,
    DELETE =2
}SessionAction;

@protocol SessionModuelDelegate<NSObject>
@optional
- (void)sessionUpdate:(MTTSessionEntity *)session Action:(SessionAction)action;
@end
@interface SessionModule : NSObject

@property(strong)id<SessionModuelDelegate>delegate;

+ (instancetype)instance;

-(NSArray *)getAllSessions;

-(void)addToSessionModel:(MTTSessionEntity *)session;

-(void)addSessionsToSessionModel:(NSArray *)sessionArray;

-(MTTSessionEntity *)getSessionById:(NSString *)sessionID;

-(void)getRecentSession:(void(^)(NSUInteger count))block;

-(void)removeSessionByServer:(MTTSessionEntity *)session;

-(void)clearSession;

-(void)loadLocalSession:(void(^)(bool isok))block;

-(void)getHadUnreadMessageSession:(void(^)(NSUInteger count))block;

-(NSUInteger)getAllUnreadMessageCount;


@end


#import "MTTBaseViewController.h"
#import "MTTGroupEntity.h"
#import "DDChattingEditViewController.h"
@class MTTSessionEntity;
typedef void(^RefreshBlock)(NSString *sessionID);
@interface EditGroupViewController : MTTBaseViewController<UISearchBarDelegate,UISearchDisplayDelegate,UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate>
@property(strong)NSMutableArray *users;
@property(copy)NSString *sessionID;
@property(strong)MTTSessionEntity *session;
@property(assign)BOOL isGroupCreator;
@property(assign)BOOL isCreat;
@property(weak)MTTGroupEntity *group;
@property(strong)DDChattingEditViewController *editControll;
@end

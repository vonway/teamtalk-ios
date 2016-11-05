
#import "MTTBaseViewController.h"
#import "LCActionSheet.h"
@class MTTUserEntity;
@interface MTTMyViewController : MTTBaseViewController<UITableViewDataSource,UITableViewDelegate,LCActionSheetDelegate>
@property(nonatomic,weak)MTTUserEntity *user;
@property(nonatomic,strong)UITableView* tableView;
@property(assign)BOOL pushShiledStatus;

@end

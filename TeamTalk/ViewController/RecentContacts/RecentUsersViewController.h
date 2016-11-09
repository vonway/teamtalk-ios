
#import "MTTPullScrollViewController.h"
#import "SessionModule.h"
@class RecentUserVCModule;
@interface RecentUsersViewController : MTTPullScrollViewController<UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,UISearchBarDelegate,SessionModuelDelegate,UIScrollViewDelegate>
// pc status和最新联系人的table
@property(nonatomic,weak)IBOutlet UITableView* tableView;
//@property(nonatomic,strong)RecentUserVCModule* module;
//@property(nonatomic,strong)UIView* placeholderView;
// 放置MTTSessionEntity的array，用来存储当前的用户所有的当前sessions
@property(strong)NSMutableArray *items;
+ (instancetype)shareInstance;

-(void)sortItems;
-(void)setToolbarBadge:(NSUInteger)count;

@end

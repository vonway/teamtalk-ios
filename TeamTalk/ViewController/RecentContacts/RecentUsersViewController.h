
#import "MTTPullScrollViewController.h"
#import "SessionModule.h"
@class RecentUserVCModule;
@interface RecentUsersViewController : MTTPullScrollViewController<UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,UISearchBarDelegate,SessionModuelDelegate,UIScrollViewDelegate>

@property(nonatomic,weak)IBOutlet UITableView* tableView;
@property(nonatomic,strong)RecentUserVCModule* module;
@property(nonatomic,strong)UIView* placeholderView;
@property(strong)NSMutableArray *items;
+ (instancetype)shareInstance;

-(void)sortItems;
-(void)setToolbarBadge:(NSUInteger)count;

@end

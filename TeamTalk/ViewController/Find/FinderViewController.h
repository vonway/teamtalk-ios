
#import "MTTBaseViewController.h"

@interface FinderViewController : MTTBaseViewController<UITableViewDataSource,UITableViewDelegate,UIWebViewDelegate,NSURLConnectionDelegate>
@property(nonatomic,strong)UITableView* tableView;
@end

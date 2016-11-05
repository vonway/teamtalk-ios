
#import "MTTBaseViewController.h"
#import "LCActionSheet.h"
@class MTTUserEntity;
@interface PublicProfileViewControll : MTTBaseViewController<UITableViewDataSource,UITableViewDelegate,LCActionSheetDelegate>
@property(nonatomic,strong)MTTUserEntity *user;
@property(nonatomic,strong)UITableView* tableView;
@property(nonatomic,strong)UIImageView *avatar;
@property(nonatomic,strong)UIImageView *avatarView;
@property(nonatomic,strong)UILabel *name;
@property(nonatomic,strong)UILabel *cname;
@property(nonatomic,strong)UIButton *chatBtn;
@property(nonatomic,strong)UIButton *callBtn;
@end
